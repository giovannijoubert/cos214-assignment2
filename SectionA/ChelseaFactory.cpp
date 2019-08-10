#include "ChelseaFactory.h"
#include "ChelseaShirt.h"
#include "ChelseaSoccerBall.h"
#include <iostream>

Merchandise* ChelseaFactory::createShirt(string size){
    Merchandise* out = new ChelseaShirt(size);
    cout << "Creating - " << out->getDescription() << endl;
    return out;
}

Merchandise* ChelseaFactory::createSoccerBall(bool inflated){
    Merchandise* out = new ChelseaSoccerBall(inflated);
    cout << "Creating - " << out->getDescription() << endl;
    return out;
}

ChelseaFactory::ChelseaFactory() {}
ChelseaFactory::~ChelseaFactory(){}