#include"stdafx.h"
using namespace std;

int main(int argc,char* argv)
{
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "");
	int _CountStudents{0};
	Students* MassiveStudents = nullptr;
	CheckCorectFillMasStudents(MassiveStudents, _CountStudents);


}

