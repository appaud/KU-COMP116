//hello this is 2nd question//

#include<iostream>

class circle{
    private:
    double radius;

    public:
    circle(){}
    circle(double radius):radius(radius){}
    double getarea(){
        return 3.14*radius*radius;
    }
        
    
    double getperi(){
        return 2*3.14*radius;
    }
};