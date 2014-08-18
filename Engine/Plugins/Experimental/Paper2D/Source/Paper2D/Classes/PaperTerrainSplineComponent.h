// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/SplineComponent.h"
#include "PaperTerrainSplineComponent.generated.h"

//@TODO: Document
UCLASS(BlueprintType, Experimental)
class PAPER2D_API UPaperTerrainSplineComponent : public USplineComponent
{
	GENERATED_UCLASS_BODY()

public:
	// UObject interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	// End of UObject interface

public:
	// Triggered when the spline is edited
	FSimpleDelegate OnSplineEdited;
};

