//hw5-12.cpp - displays the total owed
//Created/revised by <Mathias Stock> on <7-23-2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double ITEM1 = 0.0;
	double ITEM2 = 0.0;
	const double DISC = 0.5 ;
	double TOTAL = 0.0 ;
	
	//input
	cout << "Item 1 price: ";
	cin >> ITEM1;
	cout << "Item 2 price: ";
	cin >> ITEM2;
	//end if

	//discount
	if (ITEM1 >= ITEM2)
		TOTAL = ITEM1 + (ITEM2 * DISC);
	else
		TOTAL = ITEM2 + (ITEM1 * DISC);
	//end if

	cout << fixed << setprecision(2);
	cout << "Total: " << TOTAL << endl;

	return 0;
}	//end of main function