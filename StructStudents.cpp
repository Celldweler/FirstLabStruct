

struct Students
{
	struct Date
	{
		int day;
		int month;
		int year;
	};
	char FirstName[50];
	char SecondName[50];
	char LastName[50];
	Date dateborn;
	unsigned short Kurs;
	static const unsigned short int  _countsubjects = 5;
	int MassiveMarks[_countsubjects];
};



