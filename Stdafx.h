/*Все используемые библиотеки и функции для коректной(возможно) работы программы(баги неизбежны)*/
#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include"Students.h"
static int _CountStudents;
 Students* CheckCorectFillMasStudents(Students* , int& );
Students Fill_Fields_Mas_Struct_Students();
Students* FillMasStructStudents(int);
void ShowMasStruct(Students*, int);
void DisplayDataStudent(Students);
Students* SortMasNameStudent(Students*, int);
Students* AveStudMarksIsGreatOveralAverMarks(Students* , int _CountStudents, int average);
int Search_Overall_Grade_Point_Average(Students*, int);/*Функция нахождения общего среднего бала всех студентов */
void BaseLevel();
void MiddleLevel();

