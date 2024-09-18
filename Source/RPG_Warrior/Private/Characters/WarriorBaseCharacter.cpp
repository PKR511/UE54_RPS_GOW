// AnVilE Production


#include "Characters/WarriorBaseCharacter.h"

AWarriorBaseCharacter::AWarriorBaseCharacter()
{
 	
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

}//AWarriorBaseCharacter.


