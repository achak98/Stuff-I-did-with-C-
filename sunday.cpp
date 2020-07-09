#include<iostream>
using namespace std;
void determineSunday(int, int *, int *);
int main()
{
    int days = 0, month = 0, sunDays = 0, dateSun = 6, leap, total = 0;


    for(int yearNo=1901; yearNo<2001; yearNo++) {
        leap = ((yearNo % 4 == 0 && yearNo % 100 != 0) || yearNo % 400 == 0) ? true : false;
        if(leap)
            for(month = 1; month < 13; month++) {
                cout << "For month " << month << " of year " << yearNo <<  ", Date of Sundays: " ;
                if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                    determineSunday(31, &dateSun, &sunDays);
                if(month == 9 || month == 4 || month == 6 || month == 11)
                    determineSunday(30, &dateSun, &sunDays);
                if(month == 2)
                    determineSunday(29, &dateSun, &sunDays);
            }
        else
            for(month = 1; month < 13; month++) {
               cout << "For month " << month << " of year " << yearNo <<  ", Date of Sundays: " ;
                if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                    determineSunday(31, &dateSun, &sunDays);
                if(month == 9 || month == 4 || month ==6 || month == 11)
                    determineSunday(30, &dateSun, &sunDays);
                if(month == 2)
                    determineSunday(28, &dateSun, &sunDays);
            }
    }

    cout << sunDays;
    return 0;
}

void determineSunday(int days, int *dateSun, int *sunDays) {

    for( ; *dateSun <= days; *dateSun += 7)
        *sunDays += (*dateSun == 1) ? 1 : 0 ,
       cout << *dateSun << ",";
    *dateSun -= days;
     cout << "\n" ;
     cout << " " << *dateSun << "\n"; 
}

