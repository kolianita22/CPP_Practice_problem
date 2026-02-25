/*Write a program that takes two numbers as command line arguments, adds
them, and displays the result.*/
#include<iostream>
#include<cstdlib> 
using namespace std;
int main(int argc,char *argv[])
{
    int num1 = atoi(argv[1]); // Convert the first argument to an integer
    int num2 = atoi(argv[2]); // Convert the second argument to an integer
    
    // Add the numbers
    int sum = num1 + num2;
    
    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    
    return 0;

}
/*
abcd@anitaubuntu-inspiron-15-3520:~/Documents/cpp$ g++ practical14.cpp -o practical14
abcd@anitaubuntu-inspiron-15-3520:~/Documents/cpp$ ./practical14 65 43
The sum of 65 and 43 is: 108
abcd@anitaubuntu-inspiron-15-3520:~/Documents/cpp$ 

*/