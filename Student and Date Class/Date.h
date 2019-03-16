#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Date
{
	//private attribute
	int day;
	int month;
	int year;
public:
	//prototypes of function
	Date(); //constructer
	Date(int,int,int); //overloaded constructer
	//setter
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	//getter
	int getDay() const; //const is use for constant the values
	int getMonth() const;
	int getYear() const;
	//display function
	void display() const;
};
