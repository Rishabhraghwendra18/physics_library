#include "pch.h"
#include "framework.h"
#include<math.h>
namespace emi {
#define uo 12.56
#define pi 3.14
#define tur_len( tu , len ) tu/len
	float solo_mag(float N, float i)
	{
		return uo * N * i;
	}
	float flux(float magf, float area)
	{
		return magf * area;

	}
}
namespace EMW {
#define c 3
	float sp_Ew(float mag) //speed of Electric field 
	{
		return c * mag;
	}
	float sp_W(float u, float e)
	{
		float mul = u * e;
		return 1.0 / sqrt(mul) ;
	}
}
