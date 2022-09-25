### Pulse Audio control (pactl) tool

### About pactl tool
https://www.freedesktop.org/wiki/Software/PulseAudio/Documentation/User/Modules/

### BT_low_quality_radio use case (bluez_card)

#### Set the active profile for the GW card to be: headset_audio_gateway

	$ pactl set-card-profile bluez_card.90_78_B2_C7_8F_A8 headset_audio_gateway
	$ pactl list
```
Card #2
	Name: bluez_card.90_78_B2_C7_8F_A8
	Driver: module-bluez5-device.c
	Owner Module: 24
	Properties:
		device.description = <bluetooth_device>
		device.string = "90:78:B2:C7:8F:A8"
		device.api = "bluez"
		device.class = "sound"
		device.bus = "bluetooth"
		bluez.path = "/org/bluez/hci0/dev_90_78_B2_C7_8F_A8"
		bluez.class = "0x38043c"
		bluez.alias = <bluetooth_device>
		device.icon_name = "audio-card-bluetooth"
	Profiles:
		a2dp_source: High Fidelity Capture (A2DP Source) (sinks: 0, sources: 1, priority: 20, available: yes)
		headset_audio_gateway: Headset Audio Gateway (HSP/HFP) (sinks: 1, sources: 1, priority: 10, available: yes)
		off: Off (sinks: 0, sources: 0, priority: 0, available: yes)
	Active Profile: headset_audio_gateway
	Ports:
		unknown-output: Bluetooth Output (priority: 0, latency offset: 0 usec, available)
			Part of profile(s): headset_audio_gateway
		unknown-input: Bluetooth Input (priority: 0, latency offset: 0 usec, available)
			Part of profile(s): a2dp_source, headset_audio_gateway
```
### pactl traces for the Bluetooth client in the headset audio gateway (HSP/HFP) mode

#### After setting the BT_SCO flag ON

	$ pactl info
```
Server String: /run/user/126401823/pulse/native
Library Protocol Version: 33
Server Protocol Version: 33
Is Local: yes
Client Index: 22
Tile Size: 65472
User Name: <username>
Host Name: <hostname>
Server Name: pulseaudio
Server Version: 13.99.1
Default Sample Specification: s16le 2ch 44100Hz
Default Channel Map: front-left,front-right
Default Sink: bluez_sink.90_78_B2_C7_8F_A8.headset_audio_gateway
Default Source: bluez_source.90_78_B2_C7_8F_A8.headset_audio_gateway
Cookie: e8cc:1c51
```

#### After setting the BT_SCO flag OFF

        $ pactl info
```
Server String: /run/user/126401823/pulse/native
Library Protocol Version: 33
Server Protocol Version: 33
Is Local: yes
Client Index: 21
Tile Size: 65472
User Name: <username>
Host Name: <hostname>
Server Name: pulseaudio
Server Version: 13.99.1
Default Sample Specification: s16le 2ch 44100Hz
Default Channel Map: front-left,front-right
Default Sink: alsa_output.pci-0000_00_1b.0.analog-stereo
Default Source: alsa_input.pci-0000_00_1b.0.analog-stereo
Cookie: e8cc:1c51
```
