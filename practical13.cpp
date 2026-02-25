//Exception Handling
#include<iostream>
using namespace std;
double divide(double numerator, double denominator) {
    
    if (denominator == 0) 
    {
        throw invalid_argument(" Division by zero is not allowed.");
    }

    return numerator / denominator;
}

int main()
{
    double numerator, denominator;

    // the user to enter numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try 
    {
        
        double result = divide(numerator, denominator);
        cout << "Result: " << result << endl;
    }
    catch (invalid_argument& e) 
    {
        
        cout<<e.what()<<endl;
    } 
    catch (...) 
    {
        
        cout << "An unexpected exceptions" << endl;
    }

    return 0;
}