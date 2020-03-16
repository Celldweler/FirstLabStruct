#include"Stdafx.h"
using std::cout;
using std::cin;
/*
�������:
    ������� ��� �������� � �������, ����� ���������� � ���� ������� ��������� 7 ����� 20 �����.
���� ���������:
     �������; ����� � ����� ��������; ����� � �����  �������. 
*/
struct DataTrain
{
    struct time
    {
        int hour;
        int minute;
    };
    int �train;
    /*<����� � ����� ��������>*/
    time* time_Arrival;
    char point_Arrival[50];
    //</����� � ����� ��������>

        //<����� � �����  �������>
    time* time_Departure;
    char point_Departure[50];
    //</����� � �����  �������>
};

bool CheckTravelTime(DataTrain train);

void MiddleLevel()
{
    

	cout << "\nMiddle level: \n";
    DataTrain* traindatamas = new DataTrain[2];
    for (size_t i = 0; i < 2; i++)
    {
        cin >> traindatamas[i].time_Departure->hour >> traindatamas[i].time_Departure->minute;
        cin >> traindatamas[i].time_Arrival->hour; traindatamas[i].time_Arrival->minute;

    }
    for (size_t i = 0; i < 2; i++)
    {
        if (CheckTravelTime(traindatamas[i]))
        {
            cout<<i<<" "<< traindatamas[i].time_Departure->hour<<"."<< traindatamas[i].time_Departure->minute;
        }
    }

}

bool CheckTravelTime(DataTrain train)
{
    //��������
    int timetravelhour = 7,
        timetravelminute = 20;
    if (train.time_Arrival->hour > train.time_Departure->hour)
    {
        if ((train.time_Arrival->hour - train.time_Departure->hour) > timetravelhour)
        {
            if (train.time_Arrival->minute > train.time_Departure->minute)
            {
                if (train.time_Arrival->minute - train.time_Departure->minute > timetravelminute)
                    return true;
            }
            else
                if (train.time_Arrival->minute - train.time_Departure->minute > timetravelminute)
                    return true;
        }
    }
    //��������
 else
{
        if (train.time_Departure->hour - train.time_Arrival->hour > timetravelhour)
        {
            if (train.time_Arrival->minute > train.time_Departure->minute)
            {
                if (train.time_Arrival->minute - train.time_Departure->minute > timetravelminute)
                    return true;
            }
            else
            {
                if (train.time_Departure->minute - train.time_Arrival->minute > timetravelminute)
                    return true;
            }
        }
}
   
    return false;
}

