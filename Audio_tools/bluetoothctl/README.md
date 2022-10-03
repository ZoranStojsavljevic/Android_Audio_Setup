### Bluetoothctl
https://wiki.archlinux.org/title/bluetooth

#### Systemd bluetooth system service

Service bluetooth is a part of systemd.

	$ systemctl status bluetooth
	● bluetooth.service - Bluetooth service
	     Loaded: loaded (/lib/systemd/system/bluetooth.service; enabled; vendor preset: enabled)
	     Active: active (running) since Mon 2022-09-05 16:10:21 CEST; 18h ago
	       Docs: man:bluetoothd(8)
	   Main PID: 1893 (bluetoothd)
	     Status: "Running"
	      Tasks: 1 (limit: 18965)
	     Memory: 2.5M
	     CGroup: /system.slice/bluetooth.service
	             └─1893 /usr/lib/bluetooth/bluetoothd

	Sep 05 16:10:22 rhubu-G50-70 bluetoothd[1893]: Failed to set mode: Blocked through rfkill (0x12)
	Sep 05 16:10:24 rhubu-G50-70 bluetoothd[1893]: Failed to set mode: Blocked through rfkill (0x12)
	Sep 05 17:58:00 rhubu-G50-70 bluetoothd[1893]: Endpoint registered: sender=:1.132 path=/MediaEndpoint/A2DPSink/sbc
	Sep 05 17:58:00 rhubu-G50-70 bluetoothd[1893]: Endpoint registered: sender=:1.132 path=/MediaEndpoint/A2DPSource/sbc
	Sep 05 17:59:34 rhubu-G50-70 bluetoothd[1893]: Endpoint unregistered: sender=:1.132 path=/MediaEndpoint/A2DPSink/sbc
	Sep 05 17:59:34 rhubu-G50-70 bluetoothd[1893]: Endpoint unregistered: sender=:1.132 path=/MediaEndpoint/A2DPSource/sbc
	Sep 06 07:05:05 rhubu-G50-70 bluetoothd[1893]: Endpoint registered: sender=:1.176 path=/MediaEndpoint/A2DPSink/sbc
	Sep 06 07:05:05 rhubu-G50-70 bluetoothd[1893]: Endpoint registered: sender=:1.176 path=/MediaEndpoint/A2DPSource/sbc
	Sep 06 10:10:13 rhubu-G50-70 bluetoothd[1893]: Endpoint unregistered: sender=:1.176 path=/MediaEndpoint/A2DPSink/sbc
	Sep 06 10:10:13 rhubu-G50-70 bluetoothd[1893]: Endpoint unregistered: sender=:1.176 path=/MediaEndpoint/A2DPSource/sbc

#### bluetoothctl tool commands

$ bluetoothctl

```
Agent registered
[CHG] Controller 2C:33:7A:0A:F9:BC Pairable: yes
[bluetooth]# show
Controller 2C:33:7A:0A:F9:BC (public)
	Name: rhubu-G50-70
	Alias: rhubu-G50-70
	Class: 0x00000000
	Powered: no
	Discoverable: yes
	DiscoverableTimeout: 0x00000000
	Pairable: yes
	UUID: A/V Remote Control        (0000110e-0000-1000-8000-00805f9b34fb)
	UUID: Audio Source              (0000110a-0000-1000-8000-00805f9b34fb)
	UUID: PnP Information           (00001200-0000-1000-8000-00805f9b34fb)
	UUID: Audio Sink                (0000110b-0000-1000-8000-00805f9b34fb)
	UUID: Headset                   (00001108-0000-1000-8000-00805f9b34fb)
	UUID: A/V Remote Control Target (0000110c-0000-1000-8000-00805f9b34fb)
	UUID: Generic Access Profile    (00001800-0000-1000-8000-00805f9b34fb)
	UUID: Generic Attribute Profile (00001801-0000-1000-8000-00805f9b34fb)
	UUID: Headset AG                (00001112-0000-1000-8000-00805f9b34fb)
	UUID: Handsfree                 (0000111e-0000-1000-8000-00805f9b34fb)
	Modalias: usb:v1D6Bp0246d0535
	Discovering: no
Advertising Features:
	ActiveInstances: 0x00
	SupportedInstances: 0x05
	SupportedIncludes: appearance
	SupportedIncludes: local-name
```

$ sudo bluetoothctl trust 90:78:B2:C7:8F:A8

	[NEW] Controller 2C:33:7A:0A:F9:BC device_bluetooth [default]
	[NEW] Device DC:A6:32:EB:2E:AA raspberrypi
	[NEW] Device 90:78:B2:C7:8F:A8 device_0001
	Agent registered

[bluetooth]# devices

	Device DC:A6:32:EB:2E:AA raspberrypi
	Device 90:78:B2:C7:8F:A8 device_0001

[bluetooth]# scan on

[bluetooth]# scan off

	Discovery stopped

[bluetooth]# devices

[bluetooth]# pair 90:78:B2:C7:8F:A8

	Attempting to pair with 90:78:B2:C7:8F:A8
	[CHG] Device 90:78:B2:C7:8F:A8 Connected: yes
	Request confirmation
	[agent] Confirm passkey 444907 (yes/no): yes
	[CHG] Device 90:78:B2:C7:8F:A8 ServicesResolved: yes
	[CHG] Device 90:78:B2:C7:8F:A8 Paired: yes
	[CHG] Device 90:78:B2:C7:8F:A8 Trusted: yes
	Changing 90:78:B2:C7:8F:A8 trust succeeded

[bluetooth]# trust 90:78:B2:C7:8F:A8

[bluetooth]# connect 90:78:B2:C7:8F:A8

	Attempting to connect to 90:78:B2:C7:8F:A8
	[CHG] Device 90:78:B2:C7:8F:A8 Connected: yes
	Connection successful

[bluetooth]# remove 90:78:B2:C7:8F:A8

	[DEL] Device 90:78:B2:C7:8F:A8 device_0001
	Device has been removed

