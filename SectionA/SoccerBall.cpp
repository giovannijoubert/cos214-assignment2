#include "SoccerBall.h"
#include <iostream>

SoccerBall::SoccerBall(string cClub, double cPrice, bool cInflated) 
    : Merchandise(cClub, cPrice, "Ball"){
        inflated = cInflated;
    }

string SoccerBall::getDescription(){
    if (inflated)
        return (Merchandise::getDescription() + ", Inflated: True");
    else 
        return (Merchandise::getDescription() + ", Inflated: False"); 
}

//TODO:
//Make sure the SoccerBall’s description function is 
//called even when you store one of your soccer- balls in a Merchandise*

