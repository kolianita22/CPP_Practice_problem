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
        cout<<"Student Name: " << name <<endl;
        cout<<"Student  Grade: " << grade << endl;
    }
};
// Function pointer to display student details
void displayStudentDetails(Student* S) 
{
    S->displayInfo();
}
void calculateAverageGrade(Student S[], int n, double& averageGrade)
 {
    cout<<"---------Studnet Average--------------------"<<endl;
    int total = 0;
    for (int i = 0; i < n; i++) {
        total +=S[i].grade;
    }
    averageGrade = total / n;
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
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >>S[i].grade;
    }
    
  void (*ptr)(Student*) =displayStudentDetails;
   cout << "\nStudent Details: \n";
   for(int i=0;i<n;i++)
   {
       ptr(&S[i]);
   }
   
   double averageGrade;
   calculateAverageGrade(S, n, averageGrade);

    cout << "\nAverage grade of students: " << averageGrade << endl;

   

    return 0;
}