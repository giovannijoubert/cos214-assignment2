#include "YellowCardState.h"
#include "RedCardState.h"
#include <iostream>


YellowCardState::YellowCardState(){
    cardColour = "yellow";
}

void YellowCardState::handle(){
    cout << "The player has already received a yellow card, and will now be given a red card." << endl;
}

CardState* YellowCardState::changeCardState(){
    return new RedCardState();
}