#include<iostream>
#include"Student.h"
#include"Date.h"
using namespace std;
int main()
{
	Student S1;
	Date temp1(23, 9, 1999);
	S1.setName("Adil Tariq");
	S1.setID(2018);
	S1.setSem(2);
	S1.setDate(temp1);
	S1.setGPA(3.54);
	Date temp2(2,2,2011);
	Student S2("Osama Tariq",2018,2,temp2,3.63);
	if (S1.getGPA() < S2.getGPA())
	{
		S1.Display();
		S2.Display();
	}
	else
	{
		S2.Display();
		S1.Display();
	}
}
