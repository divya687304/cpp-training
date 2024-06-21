#pragma once
#include<iostream>
using namespace std;
void solution() {
    double a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    if(!cin.fail())
    {
        cout<<"Enter the second number: ";
        cin>>b;
        if(!cin.fail())
        {
            cout<<"Sum: "<<a+b<<endl;
            cout<<"Difference: "<<a-b<<endl;
            cout<<"Product: "<<a*b<<endl; 
            if(b!=0) 
            {
                double c; 
                c=double(a)/double(b); 
                cout<<"Quotient: "<<c<<endl;
            }
            else
            {
                cout<<"Division by zero error!"<<endl;
            }
        }
        else{
            cout<<"Enter the valid integer"<<endl;
        }
    }
    else
    {
        cout<<"Invalid input. Please enter a valid number."<<endl;
    }
}
