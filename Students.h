
#pragma once
#ifndef _Students
#define _Students


struct Students 
{
	
	char FirstName[20];
	char SecondName[20];
	char LastName[20];
	int Kurs;
	static const short countsubjects = 5;
	int MasMarksOfStudents[countsubjects];


};

#endif // _Students