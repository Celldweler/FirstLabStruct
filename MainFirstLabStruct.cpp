#include"stdafx.h"
int Search_Overall_Grade_Point_Average(Students* Massive,int countstudents)/*Функция нахождения общего среднего бала всех студентов */
{
	unsigned int _Overall_Grade_Point_Average = 0;
	for (size_t i = 0; i < countstudents; i++)
	{
		for (size_t q = 0; q < Students::countsubjects; q++)
		{
			_Overall_Grade_Point_Average += Massive[i].MasMarksOfStudents[q];
		}
		_Overall_Grade_Point_Average /= Students::countsubjects;

	}
	return (int)(_Overall_Grade_Point_Average/ countstudents);
}
int main(int argc,char* argv[])
{
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "");

	 Students* MassiveStudents = nullptr;
	
	 MassiveStudents=CheckCorectFillMasStudents(MassiveStudents, _CountStudents);
	std::cout << "\nThe list of students: ";
	ShowMasStruct(MassiveStudents, _CountStudents);
	
	
	 int _Overall_Grade_Point_Average = Search_Overall_Grade_Point_Average(MassiveStudents, _CountStudents);
	ShowSortMasNameStudent(MassiveStudents,  _CountStudents, _Overall_Grade_Point_Average);
	std::cout << "\nThe sorting list of students: ";
	ShowMasStruct(MassiveStudents, _CountStudents);
	

//	delete MassiveStudents;

}

