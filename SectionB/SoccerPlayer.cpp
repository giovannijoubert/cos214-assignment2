#include "SoccerPlayer.h"
#include "AttackPlayStyle.h"
#include "DefendPlayStyle.h"
#include "PossessionPlayStyle.h"
#include "NoCardState.h"
#include "CardState.h"
#include <iostream>

SoccerPlayer::SoccerPlayer(string cName, PlayStyle* cPlayStyle) {
    name = cName;
    style = cPlayStyle;
    state = new NoCardState();
}

SoccerPlayer::~SoccerPlayer(){}

void SoccerPlayer::setPlayStyle(PlayStyle* sPlayStyle){
    style = sPlayStyle;
}

void SoccerPlayer::play(){
    if(state == NULL)
        cout << name << " - The player cannot demonstrate their play-style, as they have been sent off." << endl; 
    else
        cout << name << " " << style->play() << endl; 
    
}

void SoccerPlayer::commitFoul(){
    if(state != NULL){
        state->handle();
        state = state->changeCardState();
    } else {
        cout << "Player has already been sent off with a red card." << endl;
    }
}
