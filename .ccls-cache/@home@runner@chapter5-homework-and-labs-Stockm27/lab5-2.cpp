//lab5-2.cpp - displays the total amount due
//Created/revised by <Mathias Stock> on <7-23-2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double DISC_RATE = 0.1;
	const double SHIPPING1 = 0.99;
	const double SHIPPING2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ' ;

	//input
	cout << "Amount owed before any discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier member (Y/N)? ";
	cin >> member ;

	//apply discount
	if (toupper(member) == 'Y')
		amtOwed -= amtOwed * DISC_RATE;
	//end if

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