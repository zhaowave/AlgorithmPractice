//
// Created by zhaowei on 2020-03-09.
//

#ifndef ALGORITHMPRATICE_HANOI_H
#define ALGORITHMPRATICE_HANOI_H

#include <iostream>

class Hanoi {
public:
    Hanoi() = default;
    ~Hanoi() {}
    void processHanoi(int n, char src, char mid, char dest)
    {
        if(n == 1)
        {
            std::cout << src <<"->" << dest <<std::endl;
            return;
        }
        processHanoi(n-1,src,dest,mid);
        std::cout << src <<"->" << dest <<std::endl;
        processHanoi(n-1,mid,src,dest);
    }
};


#endif //ALGORITHMPRATICE_HANOI_H
