#include "ClassStats.h"

ClassStats::ClassStats()
{
	HPAllocater = 0;
	DamAllocater = 0;
	HitAllocater = 0;
	AvoAllocater = 0;
	DefAllocater = 0;
	MovAllocater = 0;
}


ClassStats::~ClassStats()
{

}

int ClassStats::GetStat(int stat, int baseclass)
{
	if (stat == 0) {
		if (baseclass == 0) {
			HPAllocater = 22; //11
		}
		if (baseclass == 1) {
			HPAllocater = 19; //9.5
		}
		if (baseclass == 2) {
			HPAllocater = 27; //13.5
		}
		return HPAllocater;
	}
	else if (stat == 1) {
		if (baseclass == 0) {
			DamAllocater = 21; //31.5
		}
		if (baseclass == 1) {
			DamAllocater = 18; //27
		}
		if (baseclass == 2) {
			DamAllocater = 24; //36
		}
		return DamAllocater;
	}
	else if (stat == 2) {
		if (baseclass == 0) {
			HitAllocater = 140; //14
		}
		if (baseclass == 1) {
			HitAllocater = 145; //14.5
		}
		if (baseclass == 2) {
			HitAllocater = 105; //10.5
		}
		return HitAllocater;
	}
	else if (stat  == 3) {
		if (baseclass == 0) {
			AvoAllocater = 50; //25
		}
		if (baseclass == 1) {
			AvoAllocater = 30; //15
		}
		if (baseclass == 2) {
			AvoAllocater = 10; //5
		}
		return AvoAllocater;
	}
	else if (stat == 4) {
		if (baseclass == 0) {
			DefAllocater = 10; //12.5
		}
		if (baseclass == 1) {
			DefAllocater = 12; //15
		}
		if (baseclass == 2) {
			DefAllocater = 12; //15
		}
		return DefAllocater;
	}
	else if (stat == 5) {
		if (baseclass == 0) {
			MovAllocater = 7; //28
		}
		if (baseclass == 1) {
			MovAllocater = 5; //20
		}
		if (baseclass == 2) {
			MovAllocater = 5; //20
		}

		return MovAllocater;
	}

	/* Total: 0 = 100 1 = 100 2 = 100 */

	else {
		return 0;
	}
}

void ClassStats::GetSprite(int baseclass, Entity* e, bool team)
{
	if (baseclass == 0) {
		if (!team) {
			e->addSpriteSheet("assets/MercAnimation.tga", 2, 2);
		}
		else
		{
			e->addSpriteSheet("assets/MercAnimation2.tga", 2, 2);
		}
	}
	else if (baseclass == 1)
	{
		if (!team) {
			e->addSpriteSheet("assets/SoldierAnimation.tga", 2, 2);
		}
		else
		{
			e->addSpriteSheet("assets/SoldierAnimation2.tga", 2, 2);
		}
	}
	else if (baseclass == 2) {
		if (!team) {
			e->addSpriteSheet("assets/fighAnimation.tga", 2, 2);
		}
		else
		{
			e->addSpriteSheet("assets/fighAnimation2.tga", 2, 2);
		}
	}
}

