/*The user to input information for several students. The program should store
this data in arrays and displays the details. Use pointers to a function to display
the student names and grades.*/
#include<iostream>
#include<string>

using namespace std;

class Student
{
  public:
    string name;
    int grade;

    // Function to display student information
    void displayInfo() 
    {
        cout << "Student Name: " << name <<endl;
        cout<<"Student  Grade: " << grade << endl;
    }
};
// Function pointer to display student details
void displayStudentDetails(Student* S) 
{
    S->displayInfo();
}
int main()
{
    int n;

    cout<<"Enter the number of student :";
    cin>>n;

    Student S[n];

      for (int i = 0; i < n; i++)
     {
        
        cout << "\nEnter name for student " << i + 1 << ": ";
        cin>>S[i].name;  
        //getline(cin, S[i].name);  // Use getline to allow full names with spaces
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >>S[i].grade;
    }
    
  void (*ptr)(Student*) =displayStudentDetails;
   cout << "\nStudent Details: \n";
   for(int i=0;i<n;i++)
   {
       ptr(&S[i]);
   }
    return 0;
}