#include "Shirt.h"
#include <iostream>

Shirt::Shirt(string cClub, double cPrice, string cSize) 
    : Merchandise(cClub, cPrice, "Shirt"){
        size = cSize;
    }

string Shirt::getDescription(){
        return (Merchandise::getDescription() + ", Size: " + size);
}

//TODO:
//Make sure the SoccerBall’s description function is 
//called even when you store one of your soccer- balls in a Merchandise*

