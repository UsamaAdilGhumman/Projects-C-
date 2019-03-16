#include<iostream>
#include<string.h>
#include"Student.h"
using namespace std;
Student::Student()
{
	this->name = "";
	this->ID = 0;
	this->Sem = 0;
	this->GPA = 0.0f;
}
Student::Student(string name, int ID, int Sem, Date DOB, float GPA)
{
	this->name = name;
	this->ID = ID;
	this->Sem = Sem;
	this->GPA = GPA;
	this->DOB = DOB;
}
void Student::setName(string name)
{
	this->name = name;
}
void Student::setID(int ID)
{
	this->ID = ID;
}
void Student::setSem(int Sem)
{
	while (Sem <= 0 || Sem > 8)
	{
		cin >> Sem;
	}
	this->Sem = Sem;
}
void Student::setDate(Date DOB)
{
	this->DOB = DOB;
}
void  Student::setGPA(float GPA)
{
	this->GPA = GPA;
}
string Student::getName() const
{
	return this->name;
}
int Student::getID() const
{
	return this->ID;
}
int Student::getSem() const
{
	return this->Sem;
}
Date Student::getDate() const
{
	return this->DOB;
}
float Student::getGPA() const
{
	return this->GPA;
}
void Student::Display() const
{
	cout << "ID : " << getID();
	cout << "Student Name : " << getName();
	cout << "Semester : " << getSem();
	cout << "Date of Birth : ";
	 DOB.display();
	cout << "GPA : " << getGPA();
}
