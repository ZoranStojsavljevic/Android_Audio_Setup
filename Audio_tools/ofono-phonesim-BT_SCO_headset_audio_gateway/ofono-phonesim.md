### ofono-phonesim tool

#### [0] Some reading to understand better ofono-phonesim tool

This is the documentation for the ofono 1.21 version [MOSTLY OBSOLETE]

HFP with ofono-phonesim with phone as Audio Gateway?

https://askubuntu.com/questions/1394409/hfp-with-ofono-phonesim-with-phone-as-audio-gateway

HFP not working with PulseAudio

https://wiki.archlinux.org/title/bluetooth_headset#HFP_not_working_with_PulseAudio

This is the documentation for the ofono 1.31 version, which is used in Ubuntu 20.04 LTS.

#### [1] The Ubuntu packages to adopt it as bluetooth gateway

	$ sudo apt install ofono
	## Either from third party repo, either from the source code
	$ apt install ofono-phonesim

The detailed explanation for both methods is given in README.md (for ofono-phonesim 1.21).

#### [2] Create the ofono-phonesim config file

	$ cat /etc/ofono/phonesim.conf
```
# This is a sample file for the phonesim configuration
#
# It should be installed in your oFono system directory,
# e.g. /etc/ofono/phonesim.conf
#
# Each group is parsed as a modem device
#
# Each group shall at least define the address and port
#   Address = <valid IPv4 address format>
#   Port = <valid TCP port>

[phonesim]
Address=127.0.0.1
Port=12345
Driver=phonesim
```
#### [3] Start as an user

	$ ofono-phonesim -p 12345 /usr/share/phonesim/default.xml &

#### [4] Enable/start adn query the ofono.service

	$ systemctl start ofono
```
$ systemctl status ofono
● ofono.service - Telephony service
     Loaded: loaded (/lib/systemd/system/ofono.service; enabled; vendor preset: enabled)
     Active: active (running) since Tue 2022-09-06 08:11:06 CEST; 5s ago
   Main PID: 59506 (ofonod)
      Tasks: 1 (limit: 18965)
     Memory: 1.3M
     CGroup: /system.slice/ofono.service
             └─59506 /usr/sbin/ofonod -n

Sep 06 08:11:06 <hostname> systemd[1]: Starting Telephony service...
Sep 06 08:11:06 <hostname> ofonod[59506]: oFono version 1.31
Sep 06 08:11:06 <hostname> systemd[1]: Started Telephony service.
Sep 06 08:11:06 <hostname> ofonod[59506]: parse_devices_reply: found 1st battery device: /org/freedesktop/UPower/...
```
#### [5] [OPTIONAL] and/or to start automatically on next boot

	$ systemctl enable ofono

#### [6] Please, read the following documentation, it is very important to get grip on ideas
https://www.freedesktop.org/wiki/Software/PulseAudio/Documentation/User/Bluetooth/

##### Using HFP with oFono

Currently HFP support in pulseaudio is only available through oFono. The additional
dependency makes device setup somewhat difficult because oFono is designed for mobile
telephony and not for audio applications.

Within oFono, a mobile telephony device is represented as a modem. oFono will only
work if there is at least one enabled modem in your system. To simplify modem control,
you should download the source code of oFono:

git://git.kernel.org/pub/scm/network/ofono/ofono.git

which contains a "test" directory with several useful python scripts. A list of
available modems can be obtained by running (after cloning the repo: in the root dir):

	$ test/list-modems

A modem can be enabled with:

	$ test/enable-modem /modem_path
	example: $ test/enable-modem /phonesim

and disabled again with:

	$ test/disable-modem /modem_path
	example: $ test/disable-modem /phonesim

#### [7] [Recalling [6]] Power the modem:

	$ sudo dbus-send --print-reply --system --dest=org.ofono /phonesim org.ofono.Modem.SetProperty string:"Powered" variant:boolean:true
	method return time=1662374690.171434 sender=:1.113 -> destination=:1.124 serial=30 reply_serial=2

#### [8] [Recalling [6]] Activate modem:

	$ sudo dbus-send --print-reply --system --dest=org.ofono /phonesim org.ofono.Modem.SetProperty string:"Online" variant:boolean:true
	method return time=1662374863.030195 sender=:1.113 -> destination=:1.127 serial=61 reply_serial=2

#### [9] Check the TCP port which should come out of the config file:

	$ sudo netstat -tunlp | grep 12345
	tcp        0      0 0.0.0.0:12345           0.0.0.0:*               LISTEN      1698/ofono-phonesim

#### [10] /usr/lib/ofono/test/ or repo ofono/test/

To check the results, use the test commands from ofonoAUR installed in /usr/lib/ofono/test/.
To power, activate, and test the modem:

	$ /usr/lib/ofono/test/enable-modem /phonesim
	$ /usr/lib/ofono/test/online-modem /phonesim
	$ /usr/lib/ofono/test/list-modems

The output of the respective modem section should read like this:
```
...
[ /phonesim ]
  Online = 1
  Powered = 1
  Lockdown = 0
  Emergency = 0
  Manufacturer = MeeGo
  ...
```
