//
// Created by wei zhao on 2019-11-10.
//

#ifndef ALGORITHMPRATICE_FLYWEIGHTPATTERN_H
#define ALGORITHMPRATICE_FLYWEIGHTPATTERN_H

#include <string>
#include <iostream>
#include <map>

//享元模式

class FlyweightInterface;

class FlyweightFactory {
public:
    static FlyweightInterface* getEffect(std::string name);
    static void FlyweightTest();

private:
    static std::map<std::string,FlyweightInterface*> m_effectMap;
};

class FlyweightInterface{
public:
    virtual void update() = 0;
    virtual void render() = 0;

protected:
    std::string m_name;
};

class FlyweightEffectOne : public FlyweightInterface{
public:
    explicit FlyweightEffectOne(std::string name);
    void update();
    void render();

private:
};
class FlyweightEffectTwo : public FlyweightInterface{
public:
    explicit FlyweightEffectTwo(std::string name);
    void update();
    void render();
};




#endif //ALGORITHMPRATICE_FLYWEIGHTPATTERN_H
