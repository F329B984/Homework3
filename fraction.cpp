#include <iostream>
#include "fraction.hpp"
using namespace std;

Fraction::Fraction() //Constructors
{
	num = 1;
	den = 1;
}
void Fraction::Set_Num() //set the numerator or denominator
{
    cout << "\nEnter the numerator: ";
	cin >> num;
    
}
void Fraction::Set_Den() 
{
    cout << "Enter the denominator:";
	cin >> den;
}
void Fraction::prints() //prints fraction and sets to 1 if num = den, option 7
{   
    if (den <= 0)
        cout << "Undefined" << endl;
    else if (num == 0)
        cout << "0" << endl;
    else if (den == 1)
        cout << " " << num << endl;
	else if (num == den)
		cout << "1\n";
	else
		cout << num << "/" << den << endl;
}   
void Fraction::To_Dec() //Decimal Equivalent
{
    double To_Dec;
    To_Dec = (double)num / (double) den; 
    cout << "Your decimal equivalent is: \n " << To_Dec << endl;
}
void Fraction::add_frac() //Option 1
{
    int n;
    int d;
    cout << "\nEnter a numerator to add: ";
    cin >> n;
    cout << "Enter a denominator to add: ";
    cin >> d;
    if (den == d)
    {
        num = num + n;
    }
    else
    {
        num = (d * num + den * n);
        den = (den * d);
    }
   
}
void Fraction::sub_frac() //Option 2
{
    int n;
    int d;
    cout << "\nEnter a numerator to subtract: ";
    cin >> n;
    cout << "Enter a denominator to subtract: ";
    cin >> d;
     if (den == d)
    {
        num = num + n;
    }
    else
    {
        num = (d * num - den * n);
        den = (den * d);
    }
}
void Fraction::mult_frac() //Option 3
{
    int n;
    int d;
    cout << "\nEnter a numerator to multiply: ";
    cin >> n;
    cout << "Enter a denominator to multiply: ";
    cin >> d;
    num = num * n;
    den = den * d;
}
void Fraction::div_frac() //Option 4
{
    int n;
    int d;
    cout << "\nEnter a numerator to divide: ";
    cin >> n;
    cout << "Enter a denominator to divide: ";
    cin >> d;
    num = num / n;
    den = den / d;
}
void Fraction::Get_GCD() //Greatest Common Denominator
{
    double gcd;
    for(int i=1; i<=num && i<= den; i++)
    {
        if (num % i == 0 && den % i ==0)
        {
            gcd = i;
        }
    }
    num = num / gcd;
    den = den / gcd;
}