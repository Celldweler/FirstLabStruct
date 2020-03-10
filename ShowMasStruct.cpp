#include"stdafx.h"

void ShowMasStruct(Students* Massive, int _CountStudents)
{
	for (size_t i = 0; i < _CountStudents; i++) { DisplayDataStudent(Massive[i]); }
}

void DisplayDataStudent(Students Student)
{
	printf("\n%s %s %s %d kurs {", Student.FirstName, Student.SecondName, Student.LastName, Student.Kurs);
	for (size_t i = 0; i < Students::countsubjects; i++)
	{
		printf("%d ",Student.MasMarksOfStudents[i]);
	}
	printf("}");
}