#include"stdafx.h"
using namespace std;

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

	 int _CountStudents;
	 Students* MassiveStudents = nullptr;
	
	MassiveStudents=CheckCorectFillMasStudents(MassiveStudents, _CountStudents);
	cout << "\nThe list of students: ";
	ShowMasStruct(MassiveStudents, _CountStudents);
	static int _Overall_Grade_Point_Average = Search_Overall_Grade_Point_Average(MassiveStudents, _CountStudents);

	delete MassiveStudents;

}

