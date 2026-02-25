#include<fstream> //header file for file operations
#include<iostream>
using namespace std;
int main()
{
char ch;
ofstream file("myfile2.txt"); //open myfile.txt in default output mode
ch=getchar();
file<<ch; // write a character in text file ‘myfile.txt ‘
file.close();
} //end of main