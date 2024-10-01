// AnVilE Production

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "HeroCombatComponent.generated.h"


class AWarriorHeroWeaponBase;

/**
 * 
 */
UCLASS()
class RPG_WARRIOR_API UHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorHeroWeaponBase* GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const;

	
};
