#include<iostream>
#include<cmath>

class point{
    private:
    int x;
    int y;

    public:
    point(){}
    point(int x,int y):x(x),y(y){}

    float getdistance(point& p){
        int xd=x-p.x;
        int yd=y-p.y;

        return sqrt(pow(xd,2)+pow(yd,2));

    }

};

int main(){
    point p1(2,3);
    point p2(3,4);
    std::cout<<"distance between points is"<<p1.getdistance(p2);

}