// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	// ...
	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = "x=something,y=something,ect";
	FTransform ObjectPosTransform = GetOwner()->GetActorTransform();
	FVector ObjectPosLocation = GetOwner()->GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("Position report reporting for duty (on %s)!"), *ObjectName);
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName,*ObjectPosLocation.ToString());

}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

