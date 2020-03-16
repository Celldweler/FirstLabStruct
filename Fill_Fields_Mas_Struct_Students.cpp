//#include"stdafx.h"

#include<iostream>
#include"Students.h"

Students Fill_Fields_Mas_Struct_Students()
{
	 Students student;
	 
	 std::cout << "\nEnter first name:";
	 std::cin.ignore(std::cin.rdbuf()->in_avail());
		 std::cin.getline(student.FirstName,10);
	 std::cout << "Enter second name:";
	 std::cin.ignore(std::cin.rdbuf()->in_avail());
	 std::cin.getline(student.SecondName,10);
	 std::cout << "Enter last name:";
	 std::cin.ignore(std::cin.rdbuf()->in_avail());
	 std::cin.getline(student.LastName, 10);
	 std::cin.ignore(std::cin.rdbuf()->in_avail());
	 std::cout << "Enter kurs student: ";
	 std::cin >> student.Kurs;
	
	 for (size_t i = 0; i < 5; i++)
	 {
		 student.MasMarksOfStudents[i] = rand() % 101;
	 }
	
	return student;

}
