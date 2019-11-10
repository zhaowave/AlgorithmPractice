//
// Created by wei zhao on 2019-11-10.
//

#include "StrategyPattern.h"


StrategyContex::StrategyContex(StrategyInterface *stragety, std::string name)
{
    m_stragety = stragety;
    m_name = name;
}
void StrategyContex::doSomething()
{
    std::cout<<"I am "<<m_name<<"!\n";
    m_stragety->doSomething();
}

void StrategyContex::stratetyTest()
{
StrategyInterface *one = new StrategyOne();
StrategyInterface *two = new StrategyTwo();
StrategyContex *strategyContex = new StrategyContex(two ,"StrategyTwo");
strategyContex->doSomething();
}