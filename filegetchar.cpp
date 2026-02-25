#include<iostream>
#include<fstream> //header file for file operations
using namespace std;
int main()
{
char ch;
ofstream file("myfile.txt"); //open myfile.txt in default output mode
ch=getchar();
file<<ch; // write a character in text file ‘myfile.txt ‘
file.close();
} //end of main