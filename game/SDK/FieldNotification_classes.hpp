﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: FieldNotification

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class FieldNotification.NotifyFieldValueChanged
// 0x0000 (0x0030 - 0x0030)
class INotifyFieldValueChanged final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NotifyFieldValueChanged">();
	}
	static class INotifyFieldValueChanged* GetDefaultObj()
	{
		return GetDefaultObjImpl<INotifyFieldValueChanged>();
	}
};

}

