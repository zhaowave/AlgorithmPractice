//
// Created by wei zhao on 2019-11-10.
//

#include "FlyweightPattern.h"

std::map<std::string,FlyweightInterface*> FlyweightFactory::m_effectMap = std::map<std::string,FlyweightInterface*>();

FlyweightInterface* FlyweightFactory::getEffect(std::string name){
    FlyweightInterface *ret = nullptr;
    if(m_effectMap.find(name) != m_effectMap.end()){
        ret = m_effectMap.at(name);
    } else
        {
        if(name == "one"){
            std::cout<<"FlyweightEffectOne created!"<<std::endl;
            ret = new FlyweightEffectOne(name);
        }else if(name == "two"){
            std::cout<<"FlyweightEffectOne created!"<<std::endl;
            ret = new FlyweightEffectTwo(name);
        }else {
            std::cout<<"unsupport effect type!"<<std::endl;
        }
        m_effectMap.insert(std::make_pair(name, ret));
    }
    return ret;
}

void FlyweightFactory::FlyweightTest(){
    FlyweightInterface *effect = FlyweightFactory::getEffect("one");
    effect->update();
    effect->render();
    FlyweightInterface *effect1 = FlyweightFactory::getEffect("one");
    effect1->render();


}

FlyweightEffectOne::FlyweightEffectOne(std::string name)
{
    m_name = name;
}
void FlyweightEffectOne::update()
{
    std::cout<<"FlyweightEffectOne::update()"<<std::endl;
}
void FlyweightEffectOne::render()
{
    std::cout<<"FlyweightEffectOne::render()"<<std::endl;
}

FlyweightEffectTwo::FlyweightEffectTwo(std::string name)
{
    m_name = name;
}
void FlyweightEffectTwo::update()
{
    std::cout<<"FlyweightEffectOne::update()"<<std::endl;
}
void FlyweightEffectTwo::render()
{
    std::cout<<"FlyweightEffectOne::render()"<<std::endl;
}
