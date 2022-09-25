/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright (C) 2012 Freescale Semiconductor, Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_TLV320_H
#define ANDROID_INCLUDE_IMX_CONFIG_TLV320_H

/* Microphone */
#define MIXER_TLV320_ADC_CAPTURE_SWITCH               "ADC Capture Switch"
#define MIXER_TLV320_PGA_CAPTURE_SWITCH               "PGA Capture Switch"
#define MIXER_TLV320_PGA_CAPTURE_VOLUME               "PGA Capture Volume"
#define MIXER_TLV320_LEFT_PGA_LINE1L_SWITCH           "Left PGA Mixer Line1L Switch"
#define MIXER_TLV320_LEFT_PGA_LINE1R_SWITCH           "Left PGA Mixer Line1R Switch"
#define MIXER_TLV320_LEFT_PGA_MIC2L_SWITCH            "Left PGA Mixer Mic2L Switch"
#define MIXER_TLV320_LEFT_PGA_MIC2R_SWITCH            "Left PGA Mixer Mic2R Switch"

#define MIXER_TLV320_RIGHT_PGA_LINE1L_SWITCH          "Right PGA Mixer Line1L Switch"
#define MIXER_TLV320_RIGHT_PGA_LINE1R_SWITCH          "Right PGA Mixer Line1R Switch"
#define MIXER_TLV320_RIGHT_PGA_MIC2L_SWITCH           "Right PGA Mixer Mic2L Switch"
#define MIXER_TLV320_RIGHT_PGA_MIC2R_SWITCH           "Right PGA Mixer Mic2R Switch"

/* HP-Output */

#define MIXER_TLV320_PCM_PLAYBACK_VOLUME              "PCM Playback Volume"
#define MIXER_TLV320_HP_PLAYBACK_SWITCH               "HP Playback Switch"

#define MIXER_TLV320_RIGHT_HP_MIXER_DACL1_SWITCH       "Right HP Mixer DACL1 Switch"
#define MIXER_TLV320_RIGHT_HP_MIXER_DACR1_SWITCH       "Right HP Mixer DACR1 Switch"
#define MIXER_TLV320_RIGHT_HP_MIXER_PGAL_BYPASS_SWITCH "Right HP Mixer PGAL Bypass Switch"
#define MIXER_TLV320_RIGHT_HP_MIXER_PGAR_BYPASS_SWITCH "Right HP Mixer PGAR Bypass Switch"

#define MIXER_TLV320_LEFT_HP_MIXER_DACL1_SWITCH       "Left HP Mixer DACL1 Switch"
#define MIXER_TLV320_LEFT_HP_MIXER_DACR1_SWITCH       "Left HP Mixer DACR1 Switch"
#define MIXER_TLV320_LEFT_HP_MIXER_PGAL_BYPASS_SWITCH "Left HP Mixer PGAL Bypass Switch"
#define MIXER_TLV320_LEFT_HP_MIXER_PGAR_BYPASS_SWITCH "Left HP Mixer PGAR Bypass Switch"

#define MIXER_TLV320_OUTPUT_DRIVER_POWERON_TIME  "Output Driver Power-On time"
#define MIXER_TLV320_OUTPUT_DRIVER_RAMP_UP_STEP  "Output Driver Ramp-up step"

#include "audio_hardware.h"

static struct route_setting defaults_tlv320[] = {
	{
		.ctl_name = MIXER_TLV320_OUTPUT_DRIVER_POWERON_TIME,
		.intval = 6,
	},
	{
		.ctl_name = MIXER_TLV320_OUTPUT_DRIVER_RAMP_UP_STEP,
		.intval = 0,
	},
        {
		.ctl_name = NULL,
        },
};

static struct route_setting speaker_output_tlv320[] = {
        {
            .ctl_name = MIXER_TLV320_PCM_PLAYBACK_VOLUME,
            .intval = 127,
        },
        {
            .ctl_name = MIXER_TLV320_RIGHT_HP_MIXER_PGAL_BYPASS_SWITCH,
            .intval = 0,
        },
        {
            .ctl_name = MIXER_TLV320_RIGHT_HP_MIXER_DACL1_SWITCH,
            .intval = 0,
        },
        {
            .ctl_name = MIXER_TLV320_RIGHT_HP_MIXER_PGAR_BYPASS_SWITCH,
            .intval = 0,
        },
        {
            .ctl_name = MIXER_TLV320_RIGHT_HP_MIXER_DACR1_SWITCH,
            .intval = 1,
        },
        {
            .ctl_name = MIXER_TLV320_LEFT_HP_MIXER_PGAL_BYPASS_SWITCH,
            .intval = 0,
        },
        {
            .ctl_name = MIXER_TLV320_LEFT_HP_MIXER_DACL1_SWITCH,
            .intval = 1,
        },
        {
            .ctl_name = MIXER_TLV320_LEFT_HP_MIXER_PGAR_BYPASS_SWITCH,
            .intval = 0,
        },
        {
            .ctl_name = MIXER_TLV320_LEFT_HP_MIXER_DACR1_SWITCH,
            .intval = 0,
        },
        {
            .ctl_name = MIXER_TLV320_HP_PLAYBACK_SWITCH,
            .intval = 1,
        },
        {
            .ctl_name = NULL,
        },
    };

static struct route_setting mm_main_mic_input_tlv320[] = {
    {
        .ctl_name = MIXER_TLV320_LEFT_PGA_LINE1L_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_TLV320_LEFT_PGA_LINE1R_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_TLV320_LEFT_PGA_MIC2L_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_TLV320_LEFT_PGA_MIC2R_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_TLV320_RIGHT_PGA_LINE1L_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_TLV320_RIGHT_PGA_LINE1R_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_TLV320_RIGHT_PGA_MIC2L_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_TLV320_RIGHT_PGA_MIC2R_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_TLV320_ADC_CAPTURE_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_TLV320_PGA_CAPTURE_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = NULL,
    },
};

/* ALSA cards for IMX, these must be defined according different board / kernel config*/
static struct audio_card  tlv320_card = {
    .name = "tlv320aic3104",
    .driver_name = "tlv320aic3104",
    .supported_out_devices = (AUDIO_DEVICE_OUT_EARPIECE |
            AUDIO_DEVICE_OUT_SPEAKER |
            AUDIO_DEVICE_OUT_WIRED_HEADSET |
            AUDIO_DEVICE_OUT_WIRED_HEADPHONE |
            AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET |
            AUDIO_DEVICE_OUT_DGTL_DOCK_HEADSET |
            AUDIO_DEVICE_OUT_ALL_SCO |
            AUDIO_DEVICE_OUT_DEFAULT),
    .supported_in_devices = (
            AUDIO_DEVICE_IN_COMMUNICATION |
            AUDIO_DEVICE_IN_AMBIENT |
            AUDIO_DEVICE_IN_BUILTIN_MIC |
            AUDIO_DEVICE_IN_WIRED_HEADSET |
            AUDIO_DEVICE_IN_BACK_MIC |
            AUDIO_DEVICE_IN_ALL_SCO |
            AUDIO_DEVICE_IN_DEFAULT),
    .defaults            = defaults_tlv320,
    .bt_output           = NULL,
    .speaker_output      = speaker_output_tlv320,
    .hs_output           = NULL,
    .earpiece_output     = NULL,
    .vx_hs_mic_input     = NULL,
    .mm_main_mic_input   = mm_main_mic_input_tlv320,
    .vx_main_mic_input   = NULL,
    .mm_hs_mic_input     = NULL,
    .vx_bt_mic_input     = NULL,
    .mm_bt_mic_input     = NULL,
    .card                = 0,
    .out_rate            = 0,
    .out_channels        = 0,
    .out_format          = 0,
    .in_rate             = 0,
    .in_channels         = 0,
    .in_format           = 0,
};
#endif  /* ANDROID_INCLUDE_IMX_CONFIG_HDMI_H */
