### pipewire
https://wiki.archlinux.org/title/PipeWire

#### pipewire examples
https://wiki.archlinux.org/title/PipeWire/Examples

#### pipewire is preferably installed as a local (user) service

```
$ systemctl status --user pipewire 
● pipewire.service - PipeWire Multimedia Service
     Loaded: loaded (/usr/lib/systemd/user/pipewire.service; disabled; vendor preset: disabled)
    Drop-In: /usr/lib/systemd/user/pipewire.service.d
             └─00-uresourced.conf
     Active: active (running) since Sun 2022-10-02 10:35:18 CEST; 20h ago
TriggeredBy: ● pipewire.socket
   Main PID: 3601 (pipewire)
      Tasks: 2 (limit: 14158)
     Memory: 13.0M
        CPU: 12min 7.676s
     CGroup: /user.slice/user-1001.slice/user@1001.service/session.slice/pipewire.service
             └─ 3601 /usr/bin/pipewire

Oct 02 10:35:18 fedora36-ssd-2TB systemd[3208]: Started pipewire.service - PipeWire Multimedia Service.
Oct 02 10:35:18 fedora36-ssd-2TB pipewire[3601]: mod.rt: Can't find xdg-portal: (null)
Oct 02 10:35:18 fedora36-ssd-2TB pipewire[3601]: mod.rt: found session bus but no portal
```
