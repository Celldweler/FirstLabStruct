#include"stdafx.h"

Students* CheckCorectFillMasStudents(Students* MassiveStudents, int& _CountStudents)
{
	bool begin = true;
tryagain:
	do
	{
		std::cout << "Enter the number of persons]$~ ";
		do {
			std::cin >> _CountStudents;
			if (std::cin.fail())
			{
				std::cout << "~$]Previous input failed, please re-enter !!!" << std::endl;
				std::cin.clear();
				std::cin.ignore(32222, '\n');
			}
			else
				break;
		} while (true);
		MassiveStudents = FillMasStructStudents(_CountStudents);
		if (MassiveStudents == nullptr)
		{
			std::cout << "\n~$]Dynamic array don't exist!\n";

			do {
				std::cout << "~$]¬ведите '+' дл€ того чтобы повторить попытку или нажмите '-' чтобы выйти из програмы... ";
				char symbol;
				symbol = getchar();
				(symbol == '+') ? begin == true : begin == false;
				if (symbol == '+')
					goto tryagain;
				exit(777);

			} while (!begin);
		}


	} while (begin != true);
	return MassiveStudents;
}
