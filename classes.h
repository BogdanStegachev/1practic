#include <iostream>
#include "pch.h"
using namespace std;

class Club {
public:
	int chairs, tables;
private:
	int staff;
protected:
	int balance;

public:
	void setClub(int chairs, int tables, int staff, int balance) {
		this->chairs = chairs;
		this->tables = tables;
		this->staff = staff;
		this->balance = balance;
	}
	int getC() {
		return chairs;
	}
	int getT() {
		return tables;
	}
	int getS() {
		return staff;
	}
	int getB() {
		return balance;
	}

};
