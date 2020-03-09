#include"stdafx.h"
using namespace std;

void CheckCorectFillMasStudents(Students* MassiveStudents, int _CountStudents)
{
	bool begin = true;
tryagain:
	do
	{
		cout << "Enter the number of persons]$~ ";
		do {
			cin >> _CountStudents;
			if (cin.fail())
			{
				cout << "~$]Previous input failed, please re-enter !!!" << endl;
				cin.clear();
				cin.ignore(32222, '\n');
			}
			else
				break;
		} while (true);
		//MassiveStudents = InitArray(_CountStudents);
		if (MassiveStudents == nullptr)
		{
			cout << "\n~$]Dynamic array don't exist!\n";

			do {
				cout << "~$]¬ведите '+' дл€ того чтобы повторить попытку или нажмите '-' чтобы выйти из програмы... ";
				char symbol;
				symbol = getchar();
				(symbol == '+') ? begin == true : begin == false;
				if (symbol == '+')
					goto tryagain;
				exit(777);

			} while (!begin);
		}


	} while (begin != true);
}