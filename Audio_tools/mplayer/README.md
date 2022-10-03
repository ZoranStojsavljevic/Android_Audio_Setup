### mplayer

Mplayer is a video player also with the sound/audio capabilities.

We are interested here ONLY in audio commands.

#### mplayer --help

	$ mplayer --help
```
Creating config file: /home/vuser/.mplayer/config
Usage:   mplayer [options] [url|path/]filename

Basic options: (complete list in the man page)
 -vo <drv>        select video output driver ('-vo help' for a list)
 -ao <drv>        select audio output driver ('-ao help' for a list)
 vcd://<trackno>  play (S)VCD (Super Video CD) track (raw device, no mount)
 dvd://<titleno>  play DVD title from device instead of plain file
 -alang/-slang    select DVD audio/subtitle language (by 2-char country code)
 -ss <position>   seek to given (seconds or hh:mm:ss) position
 -nosound         do not play sound
 -fs              fullscreen playback (or -vm, -zoom, details in the man page)
 -x <x> -y <y>    set display resolution (for use with -vm or -zoom)
 -sub <file>      specify subtitle file to use (also see -subfps, -subdelay)
 -playlist <file> specify playlist file
 -vid x -aid y    select video (x) and audio (y) stream to play
 -fps x -srate y  change video (x fps) and audio (y Hz) rate
 -pp <quality>    enable postprocessing filter (details in the man page)
 -framedrop       enable frame dropping (for slow machines)

Basic keys: (complete list in the man page, also check input.conf)
 <-  or  ->       seek backward/forward 10 seconds
 down or up       seek backward/forward  1 minute
 pgdown or pgup   seek backward/forward 10 minutes
 < or >           step backward/forward in playlist
 p or SPACE       pause movie (press any key to continue)
 q or ESC         stop playing and quit program
 + or -           adjust audio delay by +/- 0.1 second
 o                cycle OSD mode:  none / seekbar / seekbar + timer
 * or /           increase or decrease PCM volume
 x or z           adjust subtitle delay by +/- 0.1 second
 r or t           adjust subtitle position up/down, also see -vf expand

 * * * SEE THE MAN PAGE FOR DETAILS, FURTHER (ADVANCED) OPTIONS AND KEYS * * *

MPlayer 1.5-12 (C) 2000-2022 MPlayer Team
```

#### mplayer -ao --help

Option -ao <drv>	## select audio output driver ('-ao help' for a list)

	$ mplayer -ao help

	MPlayer 1.5-12 (C) 2000-2022 MPlayer Team
	Available audio output drivers:
		oss	OSS/ioctl audio output
		alsa	ALSA-0.9.x-1.x audio output
		pulse	PulseAudio audio output
		jack	JACK audio output
		sdl	SDLlib audio output
		mpegpes	DVB audio output
		v4l2	V4L2 MPEG Audio Decoder output
		null	Null audio output
		pcm	RAW PCM/WAVE file writer audio output

#### Examples of mplayer audio commands
```
$ mplayer -ao alsa test.wav

MPlayer 1.5-12 (C) 2000-2022 MPlayer Team
do_connect: could not connect to socket
connect: No such file or directory
Failed to open LIRC support. You will not be able to use your remote control.

Playing test.wav.
libavformat version 59.16.100 (external)
Audio only file format detected.
Load subtitles in ./ 
==========================================================================
Opening audio decoder: [pcm] Uncompressed PCM audio decoder
AUDIO: 16000 Hz, 1 ch, s16le, 256.0 kbit/100.00% (ratio: 32000->32000)
Selected audio codec: [pcm] afm: pcm (Uncompressed PCM)
==========================================================================
AO: [alsa] 16000Hz 1ch s16le (2 bytes per sample)
Video: no video
Starting playback...
A:   0.2 (00.1) of 0.6 (00.6)  0.0%                                                                          
```

```
$ mplayer -ao alsa cheering.wav

MPlayer 1.5-12 (C) 2000-2022 MPlayer Team
do_connect: could not connect to socket
connect: No such file or directory
Failed to open LIRC support. You will not be able to use your remote control.

Playing cheering.wav.
libavformat version 59.16.100 (external)
Audio only file format detected.
Load subtitles in ./
==========================================================================
Opening audio decoder: [pcm] Uncompressed PCM audio decoder
AUDIO: 11025 Hz, 1 ch, u8, 88.2 kbit/100.00% (ratio: 11025->11025)
Selected audio codec: [pcm] afm: pcm (Uncompressed PCM)
==========================================================================
AO: [alsa] 11025Hz 1ch u8 (1 bytes per sample)
Video: no video
Starting playback...
A:   4.0 (04.0) of 4.0 (04.0)  0.0%                                                                          


Exiting... (End of file)
```
