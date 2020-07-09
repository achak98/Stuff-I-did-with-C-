#include<iostream>
using namespace std;



int main()
{
    int sundayCount = 0, day = 2;
    bool isLeap;
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        
    
    for(int year = 1901; year <= 2000; year++)
    {
    	isLeap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? true : false;
    	if(isLeap)
	    {
	    	arr[1] = 29;
	    }
	    else
	    {
	    	arr[1] = 28;
	    }
	    
	    for(int month = 1; month <= 12; month++)
	    {
	    	for(int date = 1; date<= arr[month-1]; date++)
	    	{
	    		if(day == 7)
				{
					if(date == 1)
					{
						sundayCount++;
					}
					day = 1;
				}
				else
				{
					day++;
				}
	    	}
	    }
	    	
	}
	cout << sundayCount;   
}


