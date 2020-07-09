//Mono alphabetic cipher
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

string plainText;

static string Encrypt(string plainText, string key)  
{  
    string chars;  
    for (int i = 0; i < plainText.length(); i++)  
    {  
        if (plainText[i] == ' ')  
        {  
            chars[i] = ' ';  
        }  

        else  
        {  
            int j = plainText[i] - 97;  
            chars[i] = key[j];  
        }                
    }  

     return chars;  
}  


string reverse(string cipherText)  
{  
    string chars= cipherText;  
    string.strrev(chars);  

    return chars;  
}  


static string Decrypt(string cipherText, string key)  
{  
    char[] chars = new char[cipherText.Length];  
    for (int i = 0; i < cipherText.Length; i++)  
    {  
        if (cipherText[i] == ' ')  
        {  
            chars[i] = ' ';  
        }  
        else  
        {  
            int j = key.IndexOf(cipherText[i]) + 97;  
            chars[i] = (char)j;  
        }  
    }  
    return new string(chars);  
 }  





void main (){
{  
    string key = "zyxwvutsrqponmlkjihgfedcbaABCDEFGHIJKLMNOPQRSTUVWXYZ";  


    cout<<("Enter your String:\n");  
    cout<<("\n");  
	cin>>plainText  
    cout<<("\n");  
    int lengthPlain = plainText.length;

    string cipherText = Encrypt(plainText, key);  
    cout<<("Your Encrypted Data:\t"+cipherText);  

    cout<<("\n");  

    string decryptedText = Decrypt(cipherText, key);  
    cout<<("Your Decrypted Data:\t"+decryptedText);  
    Console.ReadKey();  

}  


