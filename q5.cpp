#include<iostream>

void check(int n){
    if(n%2==0){
        std::cout<<"even";
    }
    else{
        std::cout<<"odd";
    }
}

int main(){
    int n;
    std::cout<<"enter a number to check odd or even"<<std::endl;
    std::cin>>n;
    check(n);
    return 0;
}