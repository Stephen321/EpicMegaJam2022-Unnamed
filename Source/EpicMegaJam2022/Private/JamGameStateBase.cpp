// Fill out your copyright notice in the Description page of Project Settings.

#include "JamGameStateBase.h"

void AJamGameStateBase::AddTokens(int32 Count)
{
	check(Count > 0);
	
	Tokens += Count;
	OnTokensChanged.Broadcast(Tokens);
}
