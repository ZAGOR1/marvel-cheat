﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyMarvelLobbyGameState

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyMarvelLobbyGameState.PyMarvelLobbyGameState
// 0x0000 (0x0508 - 0x0508)
class APyMarvelLobbyGameState : public AMarvelGameStateBase
{
public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelLobbyGameState">();
	}
	static class APyMarvelLobbyGameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelLobbyGameState>();
	}
};

}

