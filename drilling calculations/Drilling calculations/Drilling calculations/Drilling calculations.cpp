#include <iostream>
#include<string>
#include<conio.h>
#include<cmath>
#include"Formula.h"
#define PI 3.14159265
using namespace std;


void Environmental_loading();
void Engine_fuel_consumption();

int main()
{   
	Engine_fuel_consumption();
    return 0;
     
}
void Environmental_loading()
{

	float V, W, H, Wp, L, b;
	cout << "\nEnter wind velocity(miles/hour):-";
	cin >> V;
	cout << "\nEnter Pipe set back width(feet):-";
	cin >> W;
	cout << "\nEnter pipe set back height(feet):-";
	cin >> H;
	cout << "\nEnter finger board height(feet):-";
	cin >> b;
	cout << "\nEnter drill pipe linear weight(PPF):-";
	cin >> Wp;
	cout << "\nEnter total drill pipes length on pipe set back(feet):-";
	cin >> L;
	float Pw, Apsb, W1, W2, Wf;

	Pw = (0.004 * V * V);
	Apsb = W * H;
	W1 = L * Wp * sin(2.5);
	W2 = Apsb * Pw;
	Wf = (W1 + W2) * ((H / 2) / b);
	cout << "\nTotal Environmental Loading(lbs)= " << Wf << "\n\n";

}
void Engine_fuel_consumption()
{
	float fuel_density, heat_value, output_torque, engine_rpm, fuel_consumtion_rate;
	cout << "Fuel density(ppg):-"; cin >> fuel_density;
	cout << "\nHeat value(btu/lbm):-"; cin >> heat_value;
	cout << "\noutput torque(ft-lbf):-"; cin >> output_torque;
	cout << "\nengine speed(rpm)"; cin >> engine_rpm;
	cout << "\nfuel consumption rate(gallon/hour):-"; cin >> fuel_consumtion_rate;
	float angular_velocity, output_power_hp, heat_energy_input, efficiency,fuel_consumption;
	angular_velocity = 2 * PI * engine_rpm; 
	output_power_hp = (angular_velocity * output_torque) / 33000;
	fuel_consumption = (fuel_consumtion_rate * fuel_density / 60);
	heat_energy_input = (fuel_consumption * heat_value *0.023606060); 
	efficiency = (output_power_hp / heat_energy_input) * 100;
	cout << "\nEfficiency of diesal engine is:-" << efficiency << "\n\n";

}