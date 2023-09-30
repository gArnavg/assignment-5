/*Write a program to print all the ASCII values and their
equivalent characters of 26 alphabets using a while loop.*/
#include<iostream>
using namespace std;
int main()
{
    for(int i =97;i<=122;i++)
    {
        cout<<(char)i<<" "<<i<<endl;
    }
}