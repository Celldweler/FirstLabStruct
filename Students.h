#pragma once
#ifndef _Students
#define _Students
struct Students 
{
	
	char FirstName[50];
	char SecondName[50];
	char LastName[50];
	int Kurs;
	static const short countsubjects = 5;
	int MasMarksOfStudents[countsubjects];
};

#endif // _Students