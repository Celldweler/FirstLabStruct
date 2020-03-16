#include"stdafx.h"

Students* AveStudMarksIsGreatOveralAverMarks(Students* Massive,int _CountStudents,int average)
{
	int temp = 0;
	int counterisCorect = 0;
	int countsubj = Students::countsubjects;
	for (size_t i = 0; i < _CountStudents; i++)
	{
		for (size_t e = 0; e < countsubj; e++)
		{
			temp += Massive[i].MasMarksOfStudents[e];

		}
		if ((temp / countsubj) > average)
		{
			counterisCorect++;
			//DisplayDataStudent(Massive[i]);
		}

	}

	if (!counterisCorect)
	{
		std::cerr << "—тудентов средний бал которых превышает общий средний бал в базе данных не обнвруженно!!!";
		exit(777);
	}
	Students* isCorectStudents = new Students[counterisCorect];
	isCorectStudents = SortMasNameStudent(isCorectStudents, counterisCorect);
	return isCorectStudents;
}