#include<iostream>
#include <conio.h>
using namespace std;
 
int main()
{
    int a;
    cout << "Enter the number of rows : ";
    cin >> a;
    cout << endl;
    system("cls");
	for(int i=0; i < a; i++)
    {
        int b = 1;
	    for (int j = 1; j < (a - i); j++)
	    {
	    
		   cout << "\t";
	    }
        for (int k = 0; k <= i; k++)
        {
            cout << "\t\t" << b;
            b = b * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}
