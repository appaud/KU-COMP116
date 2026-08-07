//A class “master” derives information from “account” and “admin” classes which in
// turn are derived from the class “person”. Define all the four classes and write a program
// to create, update and display the information contained in master objects using concept of
// virtual base class.
// person has data members: name and code
// account has data member: pay
// admin has data member: experience
// master has derived data members: name, code, experience and pay

#include<iostream>

class person{
    protected:
    std::string name;
    double code;

    public:
    person(){}
    person(std::string name,double code):name(name),code(code){}


};

class account:public virtual person{
    protected:
    double pay;

    public:
    account(){}
    account(std::string name,double code,double pay):person(name,code),pay(pay){}

};

class admin:public virtual person{
    protected:
    double experience;

    public:
    admin(){}
    admin(std::string name,double code,double experience):person(name,code),experience(experience){}

};

class master:public account,public admin{
    public:
    master(){
    }
    master(std::string name,double code,double pay,double experience):account(name,code,pay),admin(name,code,experience){std::cout<<"master initialized";}
    
};

int main(){
    master m1("ayush",1122,23000,3);

}

