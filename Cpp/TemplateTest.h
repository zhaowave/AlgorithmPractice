//
// Created by zhaowei on 2020-06-19.
//

#ifndef ALGORITHMPRATICE_TEMPLATETEST_H
#define ALGORITHMPRATICE_TEMPLATETEST_H

#include <string>
#include <iostream>
#include <vector>
template <class type>
class TempTest{
private:
    type m_t;
public:
    TempTest(type t) : m_t(t){}
    template <class t2> void print(std::string& s, std::vector<t2>& v)
    {
        v.push_back(1.0);
        std::cout<<"template <class t2> void print(std::string& s, std::vector<t2>& v)"<<std::endl;
    }
};
#endif //ALGORITHMPRATICE_TEMPLATETEST_H
