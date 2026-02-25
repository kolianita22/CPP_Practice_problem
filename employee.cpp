#include<iostream>
using namespace std;
class Employee
{
    // This is the access modifier.
    private:
      int  EmpID;
      string EmpName;
    public:
      //This is the default Constructor.
	Employee()
	{
		cout << "This is the default constructor" << endl;
        EmpID=110;
        EmpName="Anita ";
	}

	//Parameterized constructor.
	Employee(int id, string name)
	{
	    cout<<"Parameterized Constructor"<<endl;
		EmpID =id;
		EmpName = name;
	}
    //This is the destructor. 
	~Employee()
	{
		cout << "Releasing Empolyee Data" << endl;
	}

	void Display()
	{
		cout << "Employee ID is   : " << EmpID<< endl;
		cout << "Employee Name is :" << EmpName<<endl;
	}
};
int main()
{
    cout<<"Employee Class"<<endl;
    cout<<"------------------------------------"<<endl;
    
    Employee e;
    e.Display();

    Employee e1(111,"chetan koli");
    e1.Display();
    return 0;
}