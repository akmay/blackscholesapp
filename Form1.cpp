#include "calculations.h"
#include <cmath> //including math library

namespace BlackScholes {

	// functions to calculate d1
	System::Double calculated1(double S, double V, double X, double r, double t){
		return (log(S / X) + (r + V*V / 2)*t) / (V*sqrt(t));
	} //end Calculated1

	// functions to calculate d2
	System::Double calculated2(double S, double V, double X, double r, double t){
		return (log(S / X) + (r + V*V / 2)*t) / (V*sqrt(t)) - V*sqrt(t);
	} //end Calculated2

	//function to estimate cdf
	System::Double normalCDF(double X)
	{
		return 0.5 * erfc(-X / sqrt(2));
	} //end normalCDF

	//function to calculate and return call price
	System::Double Call(double S, double X, double r, double t, double cdf1, double cdf2)
	{
		return S*cdf1 - X*exp(-r*t)*cdf2;
	} //end CalculateCall

	//function to calculate and return put price
	System::Double Put(double S, double X, double r, double t, double cdf1, double cdf2)
	{
		return -S*(1-cdf1) + X*exp(-r*t)*(1-cdf2);
	} //end CalculatePut
}

#include "Form1.h"

using namespace BlackScholes;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}