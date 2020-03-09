#include"stdafx.h"

Students* FillMasStructStudents(int _CountStudents)
{
	Students* Massive = new Students[_CountStudents];
	if (Massive == nullptr)
		return nullptr;
	for (size_t i = 0; i < _CountStudents; i++)
	{
		printf("\n]$~Enter the information about %d person ", i + 1);
		Massive[i] = Fill_Fields_Mas_Struct_Students();
	}
	return Massive;
}