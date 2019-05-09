#include <iostream>
#ifndef __fraction_hpp	
#define __fraction_hpp
using namespace std;

/*
Name: Christopher Trent
MyWSU: F329B984
Assignment Number: 3
Descritpion: a class used to represent a ratio of two integers.
Date: 9/4/2015
 
-PsuedoCode

Class Name: Fraction
Data:	    num - holds the integer value for the numerator in the fraction
			den - holds the integer value for the denominator
Mutator Functions:	Set_Num - mutator function that prompts the user to input a value for the numberator of the fraction
					Set_Den - mutator function that prompts the user for inputs regarding the denominator in the fraction
					To_Dec - mutator function that takes the current values for num and den and converts them to a double (decimal) equivalent
					add_frac - mutator function that prompts the user for a second numerator and denominator and adds the two fractions
					sub_frac - mutator function that prompts the user for a second numerator and denominator and subtracts the two fractions
					mult_frac - mutator function that prompts the user for a second numerator and denominator and multiplies the two fractions
					div_frac - mutator function that prompts the user for a second numerator and denominator and divides the two fractions
					Get_GCD - finds the greatest common denominator between the num/den fraction and the n/d fraction for all mathematical operations.

Accessor Functions:	prints - accessor function that takes the current value of num and den and inputs them into the fraction form and prints it out for the user "num"/"den" (ex 8/4)		  
 
 */
 
class Fraction
{
private: 
	int num;
	int den;	
public:
	Fraction();
	void Set_Num();		// mutator
	void Set_Den();		// mutator
    void prints();		// accessor
	void To_Dec();		// mutator
    void add_frac();	// mutator
    void sub_frac();	// mutator
    void mult_frac();	// mutator
    void div_frac();	// mutator
    void Get_GCD();		// mutator
};
#endif