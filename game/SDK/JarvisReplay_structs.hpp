﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: JarvisReplay

#include "Basic.hpp"


namespace SDK
{

// Enum JarvisReplay.EJarvisInputEventType
// NumValues: 0x000E
enum class EJarvisInputEventType : uint8
{
	Invalid                                  = 0,
	Jarvis_InputKeyEvent                     = 1,
	Jarvis_PointerEvent                      = 2,
	Jarvis_CharEvent                         = 3,
	Jarvis_KeyDownEvent                      = 4,
	Jarvis_Character                         = 5,
	Jarvis_KeyDown                           = 6,
	Jarvis_KeyUp                             = 7,
	Jarvis_MouseDown                         = 8,
	Jarvis_MouseUp                           = 9,
	Jarvis_MouseDoubleClick                  = 10,
	Jarvis_MouseWheel                        = 11,
	Jarvis_MouseMove                         = 12,
	EJarvisInputEventType_MAX                = 13,
};

}

