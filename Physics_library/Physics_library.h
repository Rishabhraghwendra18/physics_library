#pragma once
namespace emi {
	float solo_mag(float N, float i);
	float flux(float magf, float area);
}
namespace EMW {
	float sp_Ew(float mag); //speed of Electric field
	float sp_W(float u, float e);
}
namespace atoms {
	float K_E(int z, int n); 
	float P_E(int z, int n);
	float T_E(int z, int n);
}
