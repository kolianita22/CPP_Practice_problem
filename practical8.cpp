/*Write a program that performs file handling operations, including creating a file,
writing data to it, reading data from it, and displaying the content on the console.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];  
    ofstream ofile;

    ofile.open("myfile.txt");
    cout << "File created successfully." << endl;
    cout <<"Writing to a text file:" << endl;  
    cout << "Please Enter your name: ";   
    cin.getline(input, 100);  
    ofile<< input << endl;  
    cout << "Please Enter your age: ";   
    cin >> input;  
   
    ofile<< input << endl;  
    ofile.close();

    ifstream ifile;
    ifile.open("myfile.txt");
    string text;
    cout<<"Reading A file:"<<endl;
    while(getline(ifile,text))
    {
        cout<<text<<endl;
    }
    
        
    ifile.close();
    

}