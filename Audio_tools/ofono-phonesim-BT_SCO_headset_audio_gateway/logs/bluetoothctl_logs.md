### bluetoothctl tool
https://smarttech101.com/bluetoothctl-management-of-bluetooth-devices-in-linux/

### bluetooth traces

If everything was correctly setup by the docs in the parent directory, the
following profiles should appear while running bluetoothctl tool (some added
by ofono and ofono-phonesim):

```
[bluetooth]# show
Controller 08:D9:0C:ED:80:73 (public)
	Name: <hostname>
	Alias: <hostname>
	Class: 0x007e010c
	Powered: yes
	Discoverable: no
	DiscoverableTimeout: 0x00000000
	Pairable: yes
	UUID: Message Notification Se.. (00001133-0000-1000-8000-00805f9b34fb)
	UUID: A/V Remote Control        (0000110e-0000-1000-8000-00805f9b34fb)
	UUID: OBEX Object Push          (00001105-0000-1000-8000-00805f9b34fb)
	UUID: Message Access Server     (00001132-0000-1000-8000-00805f9b34fb)
	UUID: PnP Information           (00001200-0000-1000-8000-00805f9b34fb)
	UUID: IrMC Sync                 (00001104-0000-1000-8000-00805f9b34fb)
	UUID: Vendor specific           (00005005-0000-1000-8000-0002ee000001)
	UUID: Dialup Networking         (00001103-0000-1000-8000-00805f9b34fb)
	UUID: Headset AG                (00001112-0000-1000-8000-00805f9b34fb)
	UUID: A/V Remote Control Target (0000110c-0000-1000-8000-00805f9b34fb)
	UUID: Generic Attribute Profile (00001801-0000-1000-8000-00805f9b34fb)
	UUID: Phonebook Access Server   (0000112f-0000-1000-8000-00805f9b34fb)
	UUID: Audio Sink                (0000110b-0000-1000-8000-00805f9b34fb)
	UUID: Generic Access Profile    (00001800-0000-1000-8000-00805f9b34fb)
	UUID: Handsfree Audio Gateway   (0000111f-0000-1000-8000-00805f9b34fb)
	UUID: Audio Source              (0000110a-0000-1000-8000-00805f9b34fb)
	UUID: OBEX File Transfer        (00001106-0000-1000-8000-00805f9b34fb)
	UUID: Handsfree                 (0000111e-0000-1000-8000-00805f9b34fb)
	Modalias: usb:v1D6Bp0246d0535
	Discovering: no
Advertising Features:
	ActiveInstances: 0x00
	SupportedInstances: 0x05
	SupportedIncludes: tx-power
	SupportedIncludes: appearance
	SupportedIncludes: local-name
[bluetooth]#
```
