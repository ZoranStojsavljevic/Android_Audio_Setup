### pulseaudio
https://wiki.archlinux.org/title/PulseAudio

https://www.freedesktop.org/wiki/Software/PulseAudio/Documentation/User/Modules/

#### pulseaudio examples
https://wiki.archlinux.org/title/PulseAudio/examples

#### pulseaudio is preferably installed as a local (user) servic

#### systemctl status for all local services (as variance to determined one)
```
rhubu@rhubu-G50-70:~$ systemctl status --user 
● rhubu-G50-70
    State: running
     Jobs: 0 queued
● rhubu-G50-70
    State: running
     Jobs: 0 queued
● rhubu-G50-70
    State: running
     Jobs: 0 queued
● rhubu-G50-70
    State: running
     Jobs: 0 queued
   Failed: 0 units
    Since: Tue 2022-09-06 07:05:04 CEST; 2h 57min ago
   CGroup: /user.slice/user-1000.slice/user@1000.service
           ├─gvfs-goa-volume-monitor.service 
           │ └─57107 /usr/libexec/gvfs-goa-volume-monitor
           ├─pulseaudio.service 
           │ └─57038 /usr/bin/pulseaudio --daemonize=no --log-target=journal
           ├─gvfs-daemon.service 
           │ ├─57072 /usr/libexec/gvfsd
           │ └─57083 /usr/libexec/gvfsd-fuse /run/user/1000/gvfs -f -o big_writes
           ├─gvfs-udisks2-volume-monitor.service 
           │ └─57089 /usr/libexec/gvfs-udisks2-volume-monitor
           ├─init.scope 
           │ ├─57024 /lib/systemd/systemd --user
           │ └─57026 (sd-pam)
           ├─gvfs-gphoto2-volume-monitor.service 
           │ └─57144 /usr/libexec/gvfs-gphoto2-volume-monitor
           ├─dbus.service 
           │ ├─57049 /usr/bin/dbus-daemon --session --address=systemd: --nofork --nopidfile --systemd-activation --sysl>
           │ ├─57112 /usr/libexec/goa-daemon
           │ └─57126 /usr/libexec/goa-identity-service
           ├─tracker-miner-fs.service 
           │ └─57040 /usr/libexec/tracker-miner-fs
           ├─gvfs-mtp-volume-monitor.service 
           │ └─57136 /usr/libexec/gvfs-mtp-volume-monitor
           └─gvfs-afc-volume-monitor.service 
             └─57148 /usr/libexec/gvfs-afc-volume-monitor
```

