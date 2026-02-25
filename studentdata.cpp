#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int MAX=10;
void InputData(string name[],int Grade[],int &count);
void DisplayStudentData(string* name,int *Grade,int count);
double CaculateAverage(const int Grade[],int count);
void HighestGrade( const std::string name[],const int  Grade[],int count,string Hname,int &Hgrade);
void ModifyData(string& name,int& Grade);
void DisplayArray(const string* name,int* Grade,int size);

int main()
{
    string StudentName[MAX];
    int StudentGrade[MAX];
    int count=0;

    InputData(StudentName,StudentGrade,count);
    DisplayStudentData(StudentName,StudentGrade,count);

   
    double average= CaculateAverage(StudentGrade,count);
    cout<<"Avereage Grade:"<<fixed<<setprecision(2)<<average<<endl;
    
    string Hname;
    int Hgrade;
    
    HighestGrade(StudentName,StudentGrade,count,Hname,Hgrade);
    cout<<"Highest Grade "<<Hname<<"with"<<Hgrade<<endl;

    int indextomodify;
    cout<<"Enter the Index of stundent to modify(0 to"<<(count-1)<<")";
    cin>>indextomodify;

    if(indextomodify>=0 && indextomodify<count)
    {
        ModifyData(StudentName[indextomodify],StudentGrade[indextomodify]);
    }
    else{
        cout<<"Invalid index"<<endl;
    }
    cout<<"update Student Data:"; 
    DisplayStudentData(StudentName,StudentGrade,count);

    DisplayArray(StudentName,StudentGrade,count);
    
     
    return 0;
    
}
void InputData(string name[],int Grade[],int &count)
{
    cout<<"----------Input Student Data---------------"<<endl;
    cout<<"Enter the Number of Student MAX:";
    cin>>count;

    for(int i=0;i<count;i++)
    {
        cout<<"Enter the Student Name=>";
        cin>>name[i];

        cout<<"Enter the Student Grade=>";
        cin>>Grade[i];

        
    }
}
void DisplayStudentData( string* names, int* Grade, int count)
 {
    cout<<"---------------Display Student Data--------"<<endl;
    for (int i = 0; i < count; ++i) {
        cout << "Student " << (i + 1) << ": " << *(names + i) << ", Grade: " << *(Grade+ i) << endl;
    }

}
double CaculateAverage(const int Grade[],int count)
{
    cout<<"---------Studnet Average--------------------"<<endl;
    int total=0;
    for(int i=0;i<count;i++)
    {
       total+=Grade[i];
    }
    return total;
}
void HighestGrade( const std::string name[],const int  Grade[],int count,string Hname,int &Hgrade)
{
    cout<<"-----------Highest Great Student-------------"<<endl;

    Hgrade=*Grade;
    Hname=*name;
    for(int i=0;i<count;i++)
    {
        if(Grade[i]>Hgrade)
        {
          Hgrade=*(Grade+i);
          Hname=*(name+i);  
        }
    }
}
void ModifyData(string& name,int& Grade)
{
    cout<<"---------Modified Syudent---------"<<endl;
    cout<<"Enter new name:";
    cin>>name;
    cout<<"Enter grade:";
    cin>>Grade;

}
void DisplayArray(const string* name,int* Grade,int size)
{
    cout<<"---------Student Array---------"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<name[i]<<endl;
    }
}



