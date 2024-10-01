// AnVilE Production

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/WarriorWeaponBase.h"
#include "WarriorTypes/WarriorStructTypes.h"

#include "WarriorHeroWeaponBase.generated.h"

/**
 * 
 */
UCLASS()
class RPG_WARRIOR_API AWarriorHeroWeaponBase : public AWarriorWeaponBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FWarriorHeroWeaponData HeroWeaponData;

	
};
