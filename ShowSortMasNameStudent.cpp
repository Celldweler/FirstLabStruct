#include "Stdafx.h"

void ShowSortMasNameStudent(Students* Massive, int _CountStudents,int average)
{
	Students Temp;
	int temp = 0;
	int countsubj = Students::countsubjects;
	for (size_t i = 0; i < _CountStudents; i++)
	{
		for (size_t e = 0; e < countsubj; e++)
		{
			temp+=Massive[i].MasMarksOfStudents[e];

		}
		if ((temp / countsubj) > average)
		{
			for (size_t j = 0; j <= _CountStudents; j++)
			{
				for (size_t q = _CountStudents - 1; q > i; q--)
				{
					if (strcmp(Massive[q].FirstName, Massive[q - 1].FirstName) < 0)

						Temp = Massive[q];
					Massive[q] = Massive[q - 1];
					Massive[q - 1] = Temp;

				}
			}
		}
		
			
	}
	
}