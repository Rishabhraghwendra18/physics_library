#include "pch.h"
#include "framework.h"
namespace emi {
#define uo 12.56
#define tur_len( tu , len ) tu/len
	float solo_mag(float N, float i )
	{
		return uo*N * i;
	}

}
