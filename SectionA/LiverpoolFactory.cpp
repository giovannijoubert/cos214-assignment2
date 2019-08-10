#include "LiverpoolFactory.h"
#include "LiverpoolShirt.h"
#include "LiverpoolSoccerBall.h"
#include <iostream>

Merchandise* LiverpoolFactory::createShirt(string size){
    Merchandise* out = new LiverpoolShirt(size);
    cout << "Creating - " << out->getDescription() << endl;
    return out;
}

Merchandise* LiverpoolFactory::createSoccerBall(bool inflated){
    Merchandise* out = new LiverpoolSoccerBall(inflated);
    cout << "Creating - " << out->getDescription() << endl;
    return out;
}

LiverpoolFactory::LiverpoolFactory() {}
LiverpoolFactory::~LiverpoolFactory(){}