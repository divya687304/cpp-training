#pragma once

class Polygon
{
    public:
    virtual double getArea()=0;
};

class Rectangle:public Polygon 
{
    private:
    double base,height;

    public:
    Rectangle(double b,double h)
    {
        base=b;
        height=h;
    }

    double getArea()
    {
        return base*height;
    }
};

class RightTriangle:public Polygon 
{
    private:
    double base,height;

    public:
    RightTriangle(double b,double h)
    {
        base=b;
        height=h;
    }

    double getArea()
    {
        return 0.5*base*height;
    }
};