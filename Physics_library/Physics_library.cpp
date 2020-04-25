#include "pch.h"
#include "framework.h"
namespace emi {
#define uo 12.56
#define pi 3.14
#define tur_len( tu , len ) tu/len

}
namespace atoms {
	float K_E(int z, int n)
	{
		float res = (13.6 * z * z) / (n * n);
		return res;
	}
	float P_E(int z, int n)
	{
		float res = (-27.2 * z * z) / (n * n);
		return res;
	}
	float T_E(int z, int n)
	{
		float p_E = P_E(z, n);
		float k_E = K_E(z, n);
		return p_E + k_E;
	}
}