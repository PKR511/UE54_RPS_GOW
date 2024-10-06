// AnVilE Production


#include "WarriorTypes/WarriorStructTypes.h"

#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"


bool FWarriorHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;

}//IsValid.
