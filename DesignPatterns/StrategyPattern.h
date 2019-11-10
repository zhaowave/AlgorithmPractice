//
// Created by wei zhao on 2019-11-10.
//

#ifndef ALGORITHMPRATICE_STRATEGYPATTERN_H
#define ALGORITHMPRATICE_STRATEGYPATTERN_H

#include <iostream>
#include <string>

class StrategyInterface;

class StrategyContex {
public:
    StrategyContex(StrategyInterface *stragety, std::string name);
    void doSomething();
    static void stratetyTest();
private:
    StrategyInterface *m_stragety;
    std::string m_name;
};


class StrategyInterface {
public:
    virtual void doSomething() = 0;
};

class StrategyOne: public StrategyInterface {
    void doSomething() {
        std::cout<<"StratgyOne doSomething"<<std::endl;
    }
};

class StrategyTwo: public StrategyInterface {
    void doSomething() {
        std::cout<<"StratgyTwo doSomething"<<std::endl;
    }
};




#endif //ALGORITHMPRATICE_STRATEGYPATTERN_H
