//hello this is 2nd question//

#include<iostream>

class circle{
    private:
    double radius;

    public:
    circle(){}
    circle(double radius):radius(radius){}

    void setsize(double radius);
    double getarea();
    double getperi();
};