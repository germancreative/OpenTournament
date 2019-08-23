// Copyright 2019 Open Tournament Project, All Rights Reserved.

/////////////////////////////////////////////////////////////////////////////////////////////////
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"

#include "OpenTournament.h"
#include "UR_Weapon.h"
#include "UR_Ammo.h"


#include "UR_InventoryComponent.generated.h"

/////////////////////////////////////////////////////////////////////////////////////////////////
// Forward declaration


/////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * InventoryComponent is the base component for use by actors to have an inventory.
 */
UCLASS(DefaultToInstanced, BlueprintType, meta = (Tooltip = "A InventoryComponent is a reusable component that can be added to any actor to give it a Inventory value.", ShortTooltip = "A InventoryComponent is a reusable component that can be added to any actor to give it a Inventory value."), hideCategories = (UR, Character, Collision, Cooking))
class OPENTOURNAMENT_API UUR_InventoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:

    UUR_InventoryComponent();

	TArray<AUR_Weapon*> InventoryW;
	TArray<AUR_Ammo*> InventoryA;
	AUR_Weapon * ActiveWeapon;

	void Add(AUR_Weapon* weapon);
	void Add(AUR_Ammo* ammo);


	void ShowInventory();

	int32 SelectWeapon(int number);

	AUR_Weapon * SelectWeaponG(int number);

    
};
