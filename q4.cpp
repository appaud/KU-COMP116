//this is q4

#include<iostream>

template<typename t> void area(t a,t b){
    t area =a*b;
    std::cout<<"area of reactangle is"<<area;
}

int main(){
    std::cout<<"enter length and breadth of rectangle in integer"<<std::endl;
    int a,b;
    float c,d;
    std::cin>>a>>b;
    area(a,b);

    std::cout<<"enter length and breadth of rectangle in float"<<std::endl;
    std::cin>>c>>d;
    area(c,d);


}