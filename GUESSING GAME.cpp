#include<iostream>
#include<conio.h>
using namespace std;
string str;

string toLowerCase(string str)
{
	for (int index = 0; index < str.length(); index++)
	{   	
	   	if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
	}	
}

int getScore (string word, string input, int lowerLimit)
{
	int score = 0;
	for (int i = 0; i< input.length(); i++)
	{
		for ( int j = 0; j < word.length(); j++)
		{
			if (word[j] == input[i])   
			{	
				if (i+lowerLimit==j)
				{
					score = score + 100;
				}
				else
				{
					score = score + 20;
			    }
			}
		}
   }
   return score;
}


int main()
{
	string word, input;
	cout<<"Enter the word (in alphabets only): ";
	cin >> word;
	cout << "\n";
	int finalScore = 0;
	system("cls");
	
	for(int i = 0; i < word.length() - 3; i++)
	{
		
		int upperlimit=2+i;
		int lowerlimit=i;
		cout<<"Enter your answer in 3 letter words:   ";
		cin>>input;
		cout << "\n";
		
		if(input.length()>3) 
			{
				cout<<"ERROR!!!!\n";
				break;
		    }
		
		cout << "Score: " << getScore(word,input,lowerlimit) << "\n";
		finalScore = finalScore + getScore(word,input,lowerlimit);
	}
	
	
cout<<"YOUR FINAL SCORE IS:       "<<finalScore;
getch();
return 0;
	
}
				
	

	
	

