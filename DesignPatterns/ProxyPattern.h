//
// Created by zhaowei on 2020-05-19.
//

#ifndef ALGORITHMPRATICE_PROXYPATTERN_H
#define ALGORITHMPRATICE_PROXYPATTERN_H

#include <iostream>
#include <memory>

using namespace std;

class PProxy;

class ProxyPattern
{
public:
    static void ProxyTest();
};

class PInterface
{
public:
    virtual void func() = 0;
};

class PInstance : public PInterface
{
public:
    void func() {cout<<"class PInstance func()"<<endl; }
    ~PInstance()
    {
        cout<<"~PInstance()"<<endl;
    }
};


class PProxy : public PInterface
{
private:
    unique_ptr<PInstance> instance;
public:
    PProxy()
    {
        instance = make_unique<PInstance>();
    }

    ~PProxy()
    {
        cout<<"~PProxy()"<<endl;
//        instance.reset();
    }

    void func()
    {
        if(instance)
        {
            instance->func();
        }
    }
};


#endif //ALGORITHMPRATICE_PROXYPATTERN_H
