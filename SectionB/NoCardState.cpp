#include "YellowCardState.h"
#include "NoCardState.h"
#include <iostream>


NoCardState::NoCardState(){
    cardColour = "none";
}

void NoCardState::handle(){
    cout << "The player hasn’t committed any previous fouls, and will now be given a yellow card." << endl;
}

CardState* NoCardState::changeCardState(){
    return new YellowCardState();
}