// Copyright Ivan Monteiro Prado 2017

#pragma once

#include "Components/ActorComponent.h"
#include "PositionReportCouch.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UPositionReportCouch : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPositionReportCouch();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	
};
