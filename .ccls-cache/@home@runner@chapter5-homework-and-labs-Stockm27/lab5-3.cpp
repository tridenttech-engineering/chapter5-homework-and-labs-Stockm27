//lab5-3.cpp - displays the total amount due
//Created/revised by <Mathias Stock> on <7-23-2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double MEM_DISC_RATE = 0.1;
	const double NONMEM_DISC_RATE = 0.05;
	const double SHIPPING1 = 0.99;
	const double SHIPPING2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ' ;
	double discount = 0.0;

	//input
	cout << "Amount owed before any discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier member (Y/N)? ";
	cin >> member ;

	//apply discount
	if (toupper(member) == 'Y')
		discount = amtOwed * MEM_DISC_RATE;
	else
		discount = amtOwed * NONMEM_DISC_RATE;
	//end if
	amtOwed -=discount;

	//shipping cost
	if (amtOwed >= 100.0)
		amtOwed += SHIPPING1;
	else
		amtOwed += SHIPPING2;
	//end if

	//display total
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: " << amtOwed << endl;

	return 0;
}	//end of main function