#include "stdafx.h"

Students* FillMasStructStudents(int _CountStudents)
{
	//Students* Massive = new Students[_CountStudents]; 
	Students* Massive = (Students*)malloc(_CountStudents*sizeof(Students));
	if (Massive == nullptr)
		return nullptr;
	for (int i = 0; i < _CountStudents; i++)
	{
		printf("\n]$~Enter the information about %d person ", i + 1);

		Massive[i] = Fill_Fields_Mas_Struct_Students();
	}
	return Massive;
}