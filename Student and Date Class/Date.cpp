#include<iostream>
#include<string.h>
#include"Date.h"
using namespace std;
Date::Date() //:: scope resoulation operater //constructer
{
	day=0;
	month=0;
	year=0;
}
Date::Date(int day, int month, int year) //overloaded constructer
{
	setDay(day);
	setMonth(month);
	setYear(year);
}
//setter
void Date::setDay(int day)
{
	while (day <= 0 || day > 31)
	{
		cout << "Invalid Date \n Enter Again : ";
		cin >> day;
	}
	this->day = day;
}
void Date::setMonth(int month)
{
	while (month <= 0 || month > 12)
	{
		cout << "Invalid Month \n Enter Again : ";
		cin >> month;
	}
	this->month = month;
}
void Date::setYear(int year)
{
	while (year <= 999 || year > 9999)
	{
		cout << "Invalid Year \n Enter Again : ";
		cin >> year;
	}
	this->year = year;
}
//getter
int Date::getDay() const
{
	return this->day;
}
int Date::getMonth() const
{
	return this->month;
}
int Date::getYear() const
{
	return this->year;
}
void Date::display() const
{
	cout << "Date : " << getDay();
	cout << "Month : " << getMonth();
	cout << "Year : " << getYear();
}
