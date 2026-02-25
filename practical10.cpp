/*Write a program that illustrates a friend class in C++ using following
specifications
• Class Employee: Contains private attributes: name, salary, and department.
• The Department class is declared as a friend, allowing it access to the private
members of Employee.
• Class Department: Contains a method displayEmployeeDetails(Employee emp)
which takes an Employee object as a parameter. This method accesses the
private attributes of Employee and displays them.
• Main Function: contains
An Employee object is created with a name, salary, and department.*/
#include<iostream>
using namespace std;
class Department;
class Employee
{
    string name;
    int salary;
    string Dname;
    public:
    Employee(string n,int s,string Dnm)
    {
        name=n;
        salary=s;
        Dname=Dnm;
    }
    friend class Department;
};
class Department
{
    public:
    void displayEmployeeDetails(Employee emp) {
        // Accessing private members of Employee class because Department is a friend class
        cout << "Employee Name: " << emp.name << endl;
        cout << "Employee Salary: " << emp.salary << endl;
        cout << "Employee Department: " << emp.Dname << endl;
    }
};
int main()
{
    Employee emp("Anita koli",25000,"Computer Science");
    Department d;
    d.displayEmployeeDetails(emp);
    return 0; 
}