//
// Created by zhaowei on 2020-02-09.
//

#ifndef ALGORITHMPRATICE_CPPCLASS_H
#define ALGORITHMPRATICE_CPPCLASS_H

#include <string>
#include <iostream>

class CppClass {
public:
    std::string name;

};

class A {
public:
    std::string name;
    A() = delete;
    virtual  ~A(){
        std::cout<<"class A:"<<"destructor!\n";
    }
    A(std::string name) {
        std::cout<<"class A:"<<name<<" constructor!\n";
        this->name = name;
    }
    inline virtual void print() {
        std::cout<<"class A:"<<name;
    }
};
class B : public A {
public:
    B() = delete;
    B(std::string name):A(name){
        std::cout<<"class B:"<<name<<" constructor!\n";
    }
    ~B(){
        std::cout<<"class B:"<<"destructor!\n";
    }
};
class C :public  B {
public:
    C() = delete;
    C(std::string name):B(name){
        std::cout<<"class C:"<<name<<" constructor!\n";
    }
    ~C(){
        std::cout<<"class C:"<<"destructor!\n";
    }
};


#endif //ALGORITHMPRATICE_CPPCLASS_H
