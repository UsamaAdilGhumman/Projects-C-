#include<iostream>
#include<string.h>
#include"Date.h"
using namespace std;
class Student
{
	//private attribute
	string name;
	int ID;
	int Sem;
	Date DOB;
	float GPA;
public:
	//prototypes of function
	Student(); //constructer
	Student(string,int,int,Date,float); //overloaded constructe
	//setter
	void setName(string);
	void setID(int);
	void setSem(int);
	void setDate(Date);
	void setGPA(float);
	//getter
	string getName() const; //const is use for constant the values
	int getID() const;
	int getSem() const;
	Date getDate() const;
	float getGPA() const;
	//display function
	void Display() const;
};