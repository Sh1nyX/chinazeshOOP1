#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
	Fraction fraction; 
	fraction.setNominator(1); 
	fraction.setDenominator(2);
	fraction.sum(1, 2);
	fraction.diff(1, 2);
	fraction.multiply(1, 2);
	fraction.subtract(1, 2);
}