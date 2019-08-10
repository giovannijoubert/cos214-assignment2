#include "ArsenalFactory.h"
#include "ArsenalShirt.h"
#include "ArsenalSoccerBall.h"
#include <iostream>

Merchandise* ArsenalFactory::createShirt(string size){
    Merchandise* out = new ArsenalShirt(size);
    cout << "Creating - " << out->getDescription() << endl;
    return out;
}

Merchandise* ArsenalFactory::createSoccerBall(bool inflated){
    Merchandise* out = new ArsenalSoccerBall(inflated);
    cout << "Creating - " << out->getDescription() << endl;
    return out;
}

ArsenalFactory::ArsenalFactory() {}
ArsenalFactory::~ArsenalFactory(){}