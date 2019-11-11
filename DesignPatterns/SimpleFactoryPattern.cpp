//
// Created by zhaowei on 2019-11-11.
//

#include "SimpleFactoryPattern.h"


ProductInterface* SimpleFactory::getProduct(std::string name)
{
    ProductInterface *ret  = nullptr;
    if(name == "one")
    {
        ret = new ProductOne();
    }
    else if(name == "two")
    {
        ret = new ProductTwo();
    }
    else
    {
        std::cout<<"Invalid product name!"<<std::endl;
    }
    return ret;
}
void SimpleFactory::simpleFactoryTest()
{
    ProductInterface *one = SimpleFactory::getProduct("one");
    one->doSomthing();
    ProductInterface *two = SimpleFactory::getProduct("two");
    two->doSomthing();
    ProductInterface *three = SimpleFactory::getProduct("three");
}

void ProductOne::doSomthing()
{
    std::cout<<"ProductOne::doSomthing()"<<std::endl;
}

void ProductTwo::doSomthing()
{
    std::cout<<"ProductTwo::doSomthing()"<<std::endl;
}