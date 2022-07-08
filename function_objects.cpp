#include<iostream>

//A Function Object is an instance of a class that defines the Operator " () " and which instances are
//therefore callable like functions.
//

class ImpliedVolSurface{
	//...
	//Some Data Members with Get-Set standard
	
	public:
		//Picks an implied vol for a given strike and expiry
		
		void operator()(const double K, const double T, double* iVol);
};
