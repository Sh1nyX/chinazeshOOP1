#pragma once
class Fraction
{
	private:
		int m_nominator, m_denominator; 

	public:
		
		Fraction(); 

		void setNominator(int nominator); 

		void setDenominator(int denominator); 

		int getNominator(); 

		int getDenominator(); 

		void sum(int nominator, int denominator);

		void diff(int nominator, int denominator); 

		void multiply(int nominator, int denominator); 

		void subtract(int nominator, int denominator); 


};

