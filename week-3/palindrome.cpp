//Write a function to determine if the given string is a palindrome or not.
//Nihal Kiran shetty
//230970065
//25-08-2023
#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(char str[]){
        int i=0,j;
        j=strlen(str)-1;
        while(i<j){
                if(str[i]!=str[j])
                        return false;
                i++;
                j--;
        }
        return true;
}
int main()
{
        char str[32];
        //system("clear");
        cout<<"Enter a string:";
        cin>>str;
        if(isPalindrome(str))
                cout<<"String is palindrome"<<endl;
        else
                cout<<"String is not palindrome"<<endl;

        return 0;
}