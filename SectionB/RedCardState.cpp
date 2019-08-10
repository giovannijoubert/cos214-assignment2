#include "RedCardState.h"
#include <iostream>


RedCardState::RedCardState(){
    cardColour = "red";
}

void RedCardState::handle(){
    cout << "The player has already been sent off with a red card." << endl;
}

CardState* RedCardState::changeCardState(){
    return NULL;
}