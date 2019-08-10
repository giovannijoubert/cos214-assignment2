#include "Merchandise.h"
#include <iostream>
#include <iomanip>
#include <sstream>

Merchandise::Merchandise(string cClub, double cPrice, string cType){
    club = cClub;
    price = cPrice;
    type = cType;
}

Merchandise::~Merchandise(){}

string Merchandise::getDescription(){
    ostringstream sPrice;
    sPrice << fixed << setprecision(2) << price;

    ostringstream sID;
    sID << 12;

    return ("Item #" + sID.str() + ": " + club + " " + type + ", Price: " + sPrice.str());
}


