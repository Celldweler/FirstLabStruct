#include"Stdafx.h"
using std::cout;
using std::cin;
#define clear() cin.ignore(cin.rdbuf()->in_avail())
struct Student
{
	char LastName[255];
	int _group;
	float _markPhisiks,
		_markIT,
		_markHistory;
	float avaragemark;
	static const int countsubjects = 3;
};
/*Условие:
    Определить  средний бал оценок по всем предметам, и вывести сведения о студентах, средний балл которых больше 4.
Поля структуры:
     Фамилия;   Группа;   Физика   Информ   История(быллы)
*/
void BaseLevel()
{
	cout << "Base level\n";
		const int countstud = 2;
	Student stud[countstud];
	for (size_t i = 0; i < countstud; i++)
	{
		printf("\n]$~Enter the information about %d student \n", i + 1);
		clear();
		cout << "Enter lastname student: ";
				cin.getline(stud[i].LastName, 255);
				clear();
				cout << "Enter group: ";
		cin >> stud[i]._group;
		clear();
		cout << "Enter marks phisiks, it, history: ";
		cin >> stud[i]._markPhisiks >> stud[i]._markIT >> stud[i]._markHistory;
		stud[i].avaragemark = (stud[i]._markPhisiks+ stud[i]._markIT+ stud[i]._markHistory)/Student::countsubjects;
	}
	cout << "List students with a GPA of above 4: \n";
	for (size_t i = 0; i < countstud; i++)
	{
		if (stud[i].avaragemark > 4)
		{
			printf("%s  %d-group %f average mark;", stud[i].LastName, stud[i]._group, stud[i].avaragemark);
		}
		
	}
}