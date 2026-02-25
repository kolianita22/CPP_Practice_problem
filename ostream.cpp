#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream ofile; // decide and declare stream object
ofile.open("Integer.txt",ios::out); // link file
int x,y,z;
// processing
cout<<"Enter any three integer\n";
cin>>x>>y>>z;
ofile<<x<<" "<<y<<" "<<z;
ofile.close();
// read and display
ifstream ifile;
ifile.open("Integer.txt",ios::in);
cout<<"the three integer are:\n";
ifile>>x>>y>>z;//read from file
cout<<"the values are\n";
cout<<x<<endl<<y<<endl<<z;
ifile.close();
}