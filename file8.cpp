#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char name[60];
    ofstream outf("myfile.txt",ios::out);
    outf<<"this is my new file"<<endl;
    cout<<"enter your name:"<<endl;
    cin.getline(name,60);
    outf<<name;
    outf.close();

    ifstream inf("myfile.txt");
    string content;
    while(getline(inf,content)){
        cout<<"displaying content from file"<<endl;
        cout<<content<<endl;
    }
    inf.close();
    return 0;

}