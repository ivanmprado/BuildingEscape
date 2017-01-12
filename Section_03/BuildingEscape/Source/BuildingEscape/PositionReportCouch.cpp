// Copyright Ivan Monteiro Prado 2017

#include "BuildingEscape.h"
#include "PositionReportCouch.h"


// Sets default values for this component's properties
UPositionReportCouch::UPositionReportCouch()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReportCouch::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPositionReportCouch::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	UE_LOG(LogTemp, Error, TEXT("Position report on Couch"));
}

