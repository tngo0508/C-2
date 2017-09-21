"#include "Pair.h"
#include "Pair.cpp" //need to add cpp if template

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "PAIRS OF INTEGERS" << endl;
	
	Pair<int> pInt1(1, 2), pInt2(4, 7);

	cout << "\nFirst pair: ";
	//pInt1.print();
	cout << pInt1;
	cout << "\nSecond pair: ";
	//pInt2.print();
	cout << pInt2;

	cout << "\nThird pair (sum of first and second): ";
	//Pair<int> pInt3 = pInt1.add(pInt2);
	//pInt3.print();
	Pair<int> pInt3 = pInt1 + pInt2;
	cout << pInt3;
	

	cout << "\n\n---------------------------------------------\n\n";

	cout << "PAIRS OF DOUBLES" << endl; 
	
	Pair<double> pDouble1(4.5, 2.3), pDouble2(6.2, 7.8);

	cout << "\nFirst pair: ";
	//pDouble1.print();
	cout << pDouble1;
	cout << "\nSecond pair: ";
	//pDouble2.print();
	cout << pDouble2;

	cout << "\nThird pair (sum of first and second): ";
	//Pair<double> pDouble3 = pDouble1.add(pDouble2);
	//pDouble3.print();
	Pair<double> pDouble3 = pDouble1 + pDouble2;
	cout << pDouble3;

	cout << "\n\n---------------------------------------------\n\n";

	cout << "PAIRS OF STRINGS" << endl;

	Pair<string> pString1("what", "how"), pString2("else", "ever");

	cout << "\nFirst pair: ";
	//pString1.print();
	cout << pString1;
	cout << "\nSecond pair: ";
	//pString2.print();
	cout << pString2;

	cout << "\nThird pair (sum of first and second): ";
	//Pair<string> pString3 = pString1.add(pString2);
	//pString3.print();
	Pair<string> pString3 = pString1 + pString2;
	cout << pString3;

	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}

