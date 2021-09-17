#include<iostream>
#include<cmath>
#include"casing_formula.h"
using namespace std;
float get_Lj(float Lc, float j)//all in ft
{
	return((Lc / 2) - j);
}
float get_Lt(float D, float L, float Lj)//all in ft
{
	return((D * L) / (L - Lj));
}
float get_Lp(float L, float Lc, float J)
{
	return (L - ((Lc / 2) + J));
}
float get_Wp(float De, float Di)//in inches
{
	float t = (De - Di) / 2;
	float t1 = De - t;
	return (10.68 * t * t1);
}
float get_Wc(float Lc, float dc, float M, float dr, float d2)
{
	float d3, Wc;
	d3 = d2 - (0.0625 * ((Lc / 2.0) - M));
	Wc = ((0.222 * Lc * dc*dc) - (0.445 * M * dr * dr) - (0.074 * (Lc - (2 * M)) * ((d2*d2) + (d2 * d3) + (d3*d3))));
	return Wc;
}
float get_Wt(float lt, float de, float L1, float d1)
{
	float d4, Wt, a = lt - L1;
	d4 = d1 - (0.0625 * a);
	Wt = ((0.222 * lt * de * de) - (0.074 * a *((d1 * d1) + (d1 * d4) + (d4 * d4))) - (0.074 * L1 * ((de * de) + (d1 * de) + (d1 * d1))));
		return Wt;
}
float get_Wtc(float Lp,float L, float de, float di,float Wt,float Wc)
{
	float Wp = get_Wp(de, di),Wtc;
	Wtc = (Lp * Wp - 2 * Wt + Wc) / L;
}
float get_Fjs(float de, float t, float C)
{
	float Fjs;
	Fjs = C * (33.71 - de) * (24.45 * t - 0.742) * (de - (t - 0.07125));
	return Fjs;
}
float get_Fjl(float C, float de, float t)
{
	float Fjl;
	Fjl = 1.647 * C * (25.58 - de) * ((24.45 * t) - 0.742) * (de - (t - 0.07125));
	return Fjl;
}
float get_Pb(float Ym, float t, float de)
{
	float Pb;
	Pb = (1.75 * Ym) * (t / de);
	return Pb;
}
float get_Pc
int main()
{
	cout << get_Wt(10, 5, 3,4);
}