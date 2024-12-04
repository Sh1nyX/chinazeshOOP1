#include "Fraction.h"
#include <iostream>

using namespace std; 

Fraction::Fraction()
{

}

void Fraction::setNominator(int nominator)
{
	m_nominator = nominator; 
}

void Fraction::setDenominator(int denominator)
{
	m_denominator = denominator; 
}

int Fraction::getNominator()
{
	return m_nominator;
}

int Fraction::getDenominator()
{
	return m_denominator;
}

void Fraction::sum(int nominator, int denominator)
{
	int new_nominator = 0;
	if (m_denominator != denominator)
	{
		int new_denominator = 1; 
		while (true)
		{
			if (new_denominator % denominator == 0 && new_denominator % m_denominator == 0)
			{
				nominator *= (new_denominator / denominator); 
				m_nominator *= (new_denominator / m_denominator); 
				break; 
			}
			++new_denominator; 
		}
		new_nominator = m_nominator + nominator; 
		if (new_nominator == new_denominator)
			cout << 1 << endl;
		else
			cout << new_nominator << "/" << new_denominator << endl;
	}
	else
	{
		new_nominator = m_nominator + nominator; 
		if (new_nominator == denominator)
			cout << 1 << endl; 
		else
			cout << new_nominator << "/" << denominator << endl; 
	}
}

void Fraction::diff(int nominator, int denominator)
{
	int new_nominator = 0; 
	if (m_denominator != denominator)
	{
		int new_denominator = 1;
		while (true)
		{
			if (new_denominator % denominator == 0 && new_denominator % m_denominator == 0)
			{
				nominator *= (new_denominator / denominator);
				m_nominator *= (new_denominator / m_denominator);
				break;
			}
			++new_denominator;
		}
		new_nominator = m_nominator - nominator;
		if (new_nominator == new_denominator)
			cout << 1 << endl;
		else if (new_nominator < 0)
			cout << "- (" << new_nominator << "/" << new_denominator << ")" << endl;\
		else if (new_nominator == 0)
			cout << 0 << endl;
		else
			cout << new_nominator << "/" << new_denominator << endl;
	}
	else
	{
		new_nominator = m_nominator - nominator;
		if (new_nominator == denominator)
			cout << 1 << endl;
		else if (new_nominator < 0)
			cout << "-(" << new_nominator * (-1) << "/" << denominator << ")" << endl;
		else if (new_nominator == 0)
			cout << 0 << endl; 
		else
			cout << new_nominator << "/" << denominator << endl;
	}
}

void Fraction::multiply(int nominator, int denominator)
{
	int new_nominator = 0, new_denominator = 0;
	new_nominator = m_nominator * nominator; 
	new_denominator = m_denominator * denominator; 
	if (new_nominator < 0)
		cout << "-(" << new_nominator * (-1) << "/" << new_denominator << ")" << endl;
	else if (new_nominator == 0)
		cout << 0 << endl;
	else if (new_nominator == new_denominator)
		cout << 0 << endl; 
	else
		cout << new_nominator << "/" << new_denominator << endl; 
}

void Fraction::subtract(int nominator, int denominator)
{
	int new_nominator = 0, new_denominator = 0;
	new_nominator = m_nominator * denominator;
	new_denominator = m_denominator * nominator;
	if (new_nominator < 0)
		cout << "-(" << new_nominator * (-1) << "/" << new_denominator << ")" << endl;
	else if (new_nominator == 0)
		cout << 0 << endl;
	else if (new_nominator == new_denominator)
		cout << 0 << endl;
	else
		cout << new_nominator << "/" << new_denominator << endl;
}
