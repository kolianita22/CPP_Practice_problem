#include <iostream>
#include<string>
using namespace std;
class department;   //forward declaration of friend class
class employee
{
    string name;
    double salary;
    string dept;
    public:
    employee(string ename,double esalary,string edept):name(ename),salary(esalary),dept(edept){}    //constructor
    friend class department;    //friend class
};
class department{
    public:
    void disp_emp_details(const employee& e){
        cout<<"name of employee is:"<<e.name<<endl;
        cout<<"salary is:"<<e.salary<<endl;
        cout<<"from department:"<<e.dept<<endl;
    }


};
int main()
{
    employee e("sana shaikh",78000,"IT");
    department d;
    d.disp_emp_details(e);
    return 0;
}