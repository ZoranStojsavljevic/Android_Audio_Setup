### Some default NXP Audio HAL implementations

	Android version		HAL version

	Android 13		7.1
	Android 12		7.0
	Android 11		6.0
	Android 10		5.0
	Android 9		4.0
	Android 8		2.0

In this directory, some default NXP Audio Hals are posted.

From the following web pointer:

https://www.codeaurora.org

https://www.codeaurora.org/projects

https://source.codeaurora.org/external/imx/

#### NXP_Audio_HAL_2.0 used for Android 7

Please, do note that there are specifics parts of the vendor implementation,
such as sampling rate, buffer size and the latency. These data and others
(Audio Flinger call backs) should be read by Audio Flinger while changing
the cards in the multiple cards' Audio HAL implementation. These parameters
for the new card (while opening an output stream as an example) MUST be read
by Audio Flinger from the Audio HAL!

In this regard, Audio Flinger of Android 7 has the ugly bug, while changing
from the one family card to the another, since Google programmers forgot,
while opening the output stream to pass the buffer size, assuming that the
buffer size is a fixed value through the live of the Audio Stack (which
is NOT). Google programmers pass the other two parameters: sampling rate
and the latency!

#### NXP_Audio_HAL_5.0 used for Android 10

Please, do note that there are specifics parts of the vendor implementation,
such as sampling rate, buffer size and the latency. These data and others
(Audio Flinger call backs) should be read by Audio Flinger while changing
the cards in the multiple cards' Audio HAL implementation. These parameters
for the new card (while opening an output stream as an example) MUST be read
by Audio Flinger from the Audio HAL!

(I did not test 5.0 NXP Audio HAL with the Android 10)
