#include<iostream>

class point{
    private:
    int x;
    int y;
    public:
    point(){}
    point(int x,int y):x(x),y(y){}

    friend std::ostream& operator<<(std::ostream &os,const point& p);
    friend std::istream& operator>>(std::istream &os, point& p);
    

};

std::ostream& operator<<(std::ostream &os,const point& p){
    return os<<"("<<p.x<<","<<p.y<<")";
}

std::istream& operator>>(std::istream &is, point& p) {
    return is >> p.x >> p.y;
}

int main(){
    point p(2,3);
    std::cout<<p;
}