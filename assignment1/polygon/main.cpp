#include <solution.h>
using namespace std;
#include <iostream>
#include <memory>

int main() {
    std::cout << "Which polygon you want to create? (1 - Rectangle, 2 - RightTriangle)\n";
    int n;
    std::cin >> n;
    std::cout << "Enter sides lengths:\n";
    double a, b;
    std::cin >> a >> b;
    Polygon *poly;
    if (n == 1) { // Provide a support for creating RightTriangle as well
        poly = new Rectangle(a, b);
    }
    else if(n==2)
    {
        poly=new RightTriangle(a,b);
    }
    else {
        std::cerr << "Invalid choice\n";
        return 1;
    }
    cout<<"Area of polygon:"<<poly->getArea()<<endl;
    return 0;
}

