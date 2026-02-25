/*Write a program that defines a class template to implement a simple stack data
structure. The program will demonstrat*/
#include<iostream>
using namespace std;
template<class T>
class Stack
{
    private:
        int top;
        T st[10];
       
    public:
    Stack()
    {
        top = -1;
    }
    void push(T i)
    {
        st[++top] = i;
        cout << "\nInserted element "<<i<<" ";
        
    }
    T pop()
    {
        cout<<"\nRemoving Element:";
        return st[top--];
    }
    T peek()
     {
        
        return st[top];
    }
    
        
};

int main()
{
   Stack<int> int_stack;
   cout<<"---------------Integer Value--------------";
   int_stack.push(50);
   int_stack.push(60);
   int_stack.push(70);

   
               
   cout<<int_stack.pop() << endl;
   cout << "Top element after pop: " << int_stack.peek() << endl;

    Stack<string> stringStack;

   cout<<"------------String-----------------------";
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("C++ Programming");

    cout<<stringStack.pop()<<endl;
    cout << "Top element after pop: " <<stringStack.peek() << endl;

   
    return 0;         

}