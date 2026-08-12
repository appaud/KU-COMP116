#include<iostream>

class point{
    private:
    int x;
    int y;
    public:
    point(){}
    point(int x,int y):x(x),y(y){}

    friend std::ostream& operator<<(std::ostream &os,const point& p);
};

std::ostream& operator<<(std::ostream &os,const point& p){
    return os<<"("<<p.x<<","<<p.y<<")";
}

int main(){
    point p(2,3);
    std::cout<<p;
}