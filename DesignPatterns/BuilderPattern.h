//
// Created by zhaowei on 2020-06-09.
//

#ifndef ALGORITHMPRATICE_BUILDERPATTERN_H
#define ALGORITHMPRATICE_BUILDERPATTERN_H

#include <string>
#include <iostream>
#include <memory>

using  namespace std;



class Car{
public:
    Car() = default;
    virtual ~Car(){}
    virtual void setEngine(const string& engine) {cout<<"engine:"<<engine<<endl;}
    virtual void setDipan(const string& dipan) {cout<<"dipan:"<<dipan<<endl;}

};

class CarBuilder
{
public:
    virtual ~CarBuilder(){}
    virtual void buildEngine(){}
    virtual void buildDipan(){}
    virtual shared_ptr<Car> getCar() = 0;
};

class BMWCarBuilder : public CarBuilder{
private:
    shared_ptr<Car> m_car;
public:
    BMWCarBuilder()
    {
        m_car = make_shared<Car>();
    }
    void buildEngine() override
    {
        m_car->setEngine("BMW");
    }
    void buildDipan() override
    {
        m_car->setDipan("BMW");
    }
    shared_ptr<Car> getCar() override
    {
        return m_car;
    }
};

class AUDICarBuilder : public  CarBuilder{
private:
    shared_ptr<Car> m_car;
public:
    AUDICarBuilder()
    {
        m_car = make_shared<Car>();
    }
    void buildEngine() override
    {
        m_car->setEngine("AUDI");
    }
    void buildDipan() override
    {
        m_car->setDipan("AUDI");
    }
    shared_ptr<Car> getCar() override
    {
        cout<<"Congratulation ! you get a AUDI!"<<endl;
        return m_car;
    }
};

class BENZCarBuilder : public  CarBuilder{
private:
    shared_ptr<Car> m_car;
public:
    BENZCarBuilder()
    {
        m_car = make_shared<Car>();
    }
    void buildEngine() override
    {
        m_car->setEngine("BENZ");
    }
    void buildDipan() override
    {
        m_car->setDipan("BENZ");
    }
    shared_ptr<Car> getCar() override
    {
        cout<<"Congratulation ! you get a BENZ!"<<endl;
        return m_car;
    }
};


class CarDirector
{
private:
    shared_ptr<CarBuilder> m_builder;
public:
    void setBuilder(const shared_ptr<CarBuilder>& builder) {
        cout<<"setBuilder() called!"<<endl;
        m_builder = builder;
    }

    shared_ptr<Car> getCar()
    {
        m_builder->getCar();
    }
    void buildCar(){
        m_builder->buildEngine();
        m_builder->buildDipan();
    }

};

class BuilderPattern
{
public:
    static void test()
    {

//        car->
    }
};


#endif //ALGORITHMPRATICE_BUILDERPATTERN_H
