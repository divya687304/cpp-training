#pragma once

class Rectangle {
    private:
    double height,width; 

    public:
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
};
