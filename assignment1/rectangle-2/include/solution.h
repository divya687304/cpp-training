#pragma once
#include<iostream>
using namespace std;
class Rectangle {
    private:
    double height,width; 

    public:

    Rectangle()
    {
        height=0.0;
        width=0.0;
        cout << "Rectangle created with default dimensions." << endl;
    }
    Rectangle(double w,double h)
    {
        height=h;
        width=w;
        cout << "Rectangle created with custom dimensions." << endl;
    }
    void printDimensions() 
    {
          cout << "Width: " << width << ", Height: " << height << endl;
    }
    void setHeight(double h) 
    {
        height=h;
    }

    void setWidth(double w) 
    {
        width=w;
    }
    double getArea()
    {
        if(height<0 || width<0)
        {
            return 0;
        }
        return height*width;
    }

    double getPerimeter()
    {
        if(height<0 || width<0)
        {
            return 0;
        }
        return 2*(height+width);
    }
    ~Rectangle()
    {
        cout<<"Deleting rectangle."<<endl;
    }
};
