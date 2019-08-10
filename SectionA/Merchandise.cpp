#include "Merchandise.h"
#include <iostream>
#include <iomanip>
#include <sstream>

Merchandise::Merchandise(string cClub, double cPrice, string cType) : currentID(id++){
    club = cClub;
    price = cPrice;
    type = cType;
}

string Merchandise::getDescription(){
    ostringstream sPrice;
    sPrice << fixed << setprecision(2) << price;
    return ("Item #" + currentID + ": " + club + " " + type + " , Price: " + sPrice.str());
}


