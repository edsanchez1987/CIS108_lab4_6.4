// LAB4_6.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

float payment,
rate,
down_payment,
principal,
top,
bottom,
power;

int months;

int main()
{
	cout << fixed << setprecision(2);

	cout << "Enter Price of Car: ";
	cin >> principal;
	cout << "\nEnter Down payment: ";
	cin >> down_payment;
	cout << "\nEnter Interest Rate: ";
	cin >> rate;
	cout << "\nEnter number of monthly payments: ";
	cin >> months;
	rate = rate / 100;
	top = (principal - down_payment) * (rate / 12);
	power = (1 / (1 + (rate / 12)));
	bottom = 1 - (pow(power, months));
	payment = top / bottom;
	cout << "\nYour payment will be: $" << payment;
	

		
}

