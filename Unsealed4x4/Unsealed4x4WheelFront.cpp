// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Unsealed4x4.h"
#include "Unsealed4x4WheelFront.h"

UUnsealed4x4WheelFront::UUnsealed4x4WheelFront(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
	ShapeRadius = 40.f;
	ShapeWidth = 34.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 40.f;
	DampingRate = 0.25f;
	Mass = 20;
	
}
