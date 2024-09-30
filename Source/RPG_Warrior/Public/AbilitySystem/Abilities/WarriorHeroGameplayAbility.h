// AnVilE Production

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "WarriorHeroGameplayAbility.generated.h"


class AWarriorHeroCharacter;
class AWarriorHeroController;

/**
 * 
 */
UCLASS()
class RPG_WARRIOR_API UWarriorHeroGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()
	


public:

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AWarriorHeroCharacter* GetHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AWarriorHeroController* GetHeroControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();
private:

	TWeakObjectPtr<AWarriorHeroCharacter> CachedWarriorHeroCharacter;

	TWeakObjectPtr<AWarriorHeroController> CachedWarriorHeroController;

};
