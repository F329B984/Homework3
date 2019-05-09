#include <iostream>
#include "fraction.hpp"
using namespace std;

int main (void)
{
	Fraction frac;
	int choice;

	while (choice != 8)
	{	
		cout << "\nSelect an Option: \n ";
        cout << "1. Enter Numbers: \n ";
        cout << "2. Add Fractions: \n ";
		cout << "3. Subtract Fractions: \n ";
		cout << "4. Multiply Fractions: \n ";
		cout << "5. Divide Fractions: \n ";
		cout << "6. Decimal Equivalent: \n ";
		cout << "7. Reduce the Fraction: \n ";
		cout << "8. Exit Program: \n ";
        cout << "9. Print Numbers: \n ";
		cin >> choice;
        
	switch (choice)
		{
            case 1:
                frac.Set_Num();
                frac.Set_Den();
                break;
			case 2:
                frac.add_frac();
				break;
			case 3:
                frac.sub_frac();
				break;
			case 4:
                frac.mult_frac();
				break;
			case 5:
                frac.div_frac();
				break;
			case 6:
                frac.To_Dec();
				break;
			case 7: 
                frac.Get_GCD();
				break;
			case 8:
                cout << "\nProgram Terminated. \n ";
				break;
			case 9:
                frac.prints();			
                break;
		}
	}
	
	return 0;
}