//
// Created by zhaowei on 2020-05-19.
//

#ifndef ALGORITHMPRATICE_VIRTUALDESTRUCTOR_H
#define ALGORITHMPRATICE_VIRTUALDESTRUCTOR_H

#include <iostream>
/**
 *
 * */
class VirtualDestructor
{

};

using namespace std;
class ABase
{
private:
    int* buffer;
public:
    ABase()
    {
        cout<<"ABase()"<<endl;
        buffer = new int(100);
    }
    virtual ~ABase(){cout<<"~ABase()"<<endl;}
};

class ADerived : public ABase
{
private:
    int* data;
public:
    ADerived()
    {
        cout<<"ADerived()"<<endl;
        data = new int(100);
    }
    ~ADerived(){cout<<"~ADerived()"<<endl;}
};

class BBase
{
private:
    shared_ptr<ABase> m_a = nullptr;
public:
    BBase()
    {
        cout<<"我的天呢"<<endl;
        this->m_a = make_shared<ADerived>();
    }
    void desc() {
        cout<<"hello,I'm A BBase "<<m_a.get()<<endl;
    }
    ~BBase()
    {
        cout<<"~BBase()"<<endl;
    }
};



#endif //ALGORITHMPRATICE_VIRTUALDESTRUCTOR_H
