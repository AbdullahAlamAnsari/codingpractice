#include <iostream>
using namespace std;
float calculations(float num1,float num2,char op)
{
    switch(op)
    {
        case '+':
        {
            return num1 + num2;
        }
        case '-':
        {
            return num1 - num2;
        }
        case '*':
        {
            return num1 * num2;
        }
        case '/':
        {
            if(num2!=0)
            {
                return num1 / num2;
            }
            else if(num2==0)
            {
                cout<<"Invalid answer";
            }
        }
    }
}


int main()
{
    char symbol;
    cout<<"Enter the operation you want to perform\n1. '+'\n2. '-'\n3. '*'\n4. '/'";
    cin>>symbol;
    float num1,num2;
    cout<<"Enter the 1st number you want to perform operation on: ";
    cin>>num1;
    cout<<"Enter the 2nd number you want to perform operation on: ";
    cin>>num2;

    cout<<calculations(num1,num2,symbol);
}