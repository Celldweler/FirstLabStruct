#include"stdafx.h"
using namespace std;

int main(int argc,char* argv)
{
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "");

	 int _CountStudents;
	 Students* MassiveStudents = nullptr;
	 Students st;
	
	MassiveStudents=CheckCorectFillMasStudents(MassiveStudents, _CountStudents);


	delete MassiveStudents;

}

