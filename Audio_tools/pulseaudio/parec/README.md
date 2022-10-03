### Pulse audio recorder
https://manpages.debian.org/experimental/pulseaudio-utils/parec.1.en.html

### parec-simple.c. A simple recording tool using the simple API. Part of PulseAudio.
http://0pointer.de/lennart/projects/pulseaudio/doxygen/parec-simple_8c-example.html

#### parec --help
```
parec [options]
Capture audio data from a PulseAudio sound server and write it to STDOUT or the specified file.

  -h, --help                            Show this help
      --version                         Show version

  -r, --record                          Create a connection for recording
  -p, --playback                        Create a connection for playback

  -v, --verbose                         Enable verbose operations

  -s, --server=SERVER                   The name of the server to connect to
  -d, --device=DEVICE                   The name of the sink/source to connect to
  -n, --client-name=NAME                How to call this client on the server
      --stream-name=NAME                How to call this stream on the server
      --volume=VOLUME                   Specify the initial (linear) volume in range 0...65536
      --rate=SAMPLERATE                 The sample rate in Hz (defaults to 44100)
      --format=SAMPLEFORMAT             The sample format, see
                                        https://www.freedesktop.org/wiki/Software/PulseAudio/Documentation/User/SupportedAudioFormats/
                                        for possible values (defaults to s16ne)
      --channels=CHANNELS               The number of channels, 1 for mono, 2 for stereo
                                        (defaults to 2)
      --channel-map=CHANNELMAP          Channel map to use instead of the default
      --fix-format                      Take the sample format from the sink/source the stream is
                                        being connected to.
      --fix-rate                        Take the sampling rate from the sink/source the stream is
                                        being connected to.
      --fix-channels                    Take the number of channels and the channel map
                                        from the sink/source the stream is being connected to.
      --no-remix                        Don't upmix or downmix channels.
      --no-remap                        Map channels by index instead of name.
      --latency=BYTES                   Request the specified latency in bytes.
      --process-time=BYTES              Request the specified process time per request in bytes.
      --latency-msec=MSEC               Request the specified latency in msec.
      --process-time-msec=MSEC          Request the specified process time per request in msec.
      --property=PROPERTY=VALUE         Set the specified property to the specified value.
      --raw                             Record/play raw PCM data.
      --passthrough                     Passthrough data.
      --file-format[=FFORMAT]           Record/play formatted PCM data.
      --list-file-formats               List available file formats.
      --monitor-stream=INDEX            Record from the sink input with index INDEX.
```

#### parec example

	parec -r -v foo.wav --fix-rate --fix-channels
	Opening a recording stream with sample specification 's16le 2ch 44100Hz' and channel map 'front-left,front-right'.
	Connection established.
	Stream successfully created.
	Buffer metrics: maxlength=4194304, fragsize=32000
	Using sample spec 's16le 1ch 8000Hz', channel map 'mono'.
	Connected to device bluez_source.D4_CA_6E_1B_B2_14.headset_audio_gateway (index: 19, suspended: no).
	Got signal, exiting.cy: 37668 usec.

