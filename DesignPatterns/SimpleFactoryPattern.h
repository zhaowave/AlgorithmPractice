//
// Created by zhaowei on 2019-11-11.
//

#ifndef ALGORITHMPRATICE_SIMPLEFACTORYPATTERN_H
#define ALGORITHMPRATICE_SIMPLEFACTORYPATTERN_H

#include <iostream>
#include <string>

class ProductInterface;

class SimpleFactory {
public:
    static ProductInterface* getProduct(std::string name);
    static void simpleFactoryTest();
};

class ProductInterface {
public:
    virtual void doSomthing() = 0;
};

class ProductOne : public ProductInterface{
public:
    void doSomthing() override;
};

class ProductTwo : public ProductInterface{
public:
    void doSomthing() override;
};


#endif //ALGORITHMPRATICE_SIMPLEFACTORYPATTERN_H
