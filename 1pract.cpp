#include <iostream>
#include "pch.h"
#include "classes.h"
using namespace std;

int main()
{
	Club club, club1, club2;
	club.setClub(2, 1, 2, 100);
	cout << "Club";
	cout << "\tChairs: " << club.getC();
	cout << "\tTables: " << club.getT();
	cout << "\tStaff: " << club.getS();
	cout << "\tBalance: " << club.getB();
	cout << endl;
	club1.setClub(4, 2, 4, 40);
	cout << "Club 1";
	cout << "\tChairs: " << club1.getC();
	cout << "\tTables: " << club1.getT();
	cout << "\tStaff: " << club1.getS();
	cout << "\tBalance: " << club1.getB();
	cout << endl;
	club2.setClub(1, 1, 1, 24);
	cout << "Club 2";
	cout << "\tChairs: " << club2.getC();
	cout << "\tTables: " << club2.getT();
	cout << "\tStaff: " << club2.getS();
	cout << "\tBalance: " << club2.getB();
	return 0;
}


