//Write a program to compute cube of a number using inline function.
//Nihal kiran shetty
//230970065
//31-08-2023
#include<iostream>
using namespace std;
inline int cube(int a){ return a* a* a;}
int main()
{
        int n;
        //system("clear");
        cout<<"Enter a number to find cube:";
        cin>>n;
        cout<<"Cube ="<<cube(n)<<endl;
        return 0;
}
