/*Write a program that demonstrates the use of inheritance in C++. (Make use of
following classes: Person: name and age, Student: Student that inherits from
Person (roll number and course),*/
#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;

    public:
     void getPersondata()
     {
        cout<<"Person Name:"<<endl;
        cin>>name;
        cout<<"Person Age:"<<endl;
        cin>>age;

     }
     void showPerson()
     {
        cout<<"In Person Name:"<<name<<endl;
        cout<<"In Person Age:"<<age<<endl;
     }
};
class Student:public Person
{
     int rollno;
     string course;
     public:
      void getStudentData()
      {
        cout<<"Student Roll No:";
        cin>>rollno;
        cout<<"Student Course:";
        cin>>course;

      }
      void showstudent()
      {
        cout<<"------------Details-----------"<<endl;
        showPerson();
        cout<<"In student Roll NO:"<<rollno<<endl;
        cout<<"In Student Course :"<<course<<endl;
      }
};
int main()
{
    Student s1;
    s1.getPersondata();
    s1.getStudentData();
    s1.showstudent();
}