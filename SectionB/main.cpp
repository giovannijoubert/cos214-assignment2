/*
Create a main function that can create a soccer player with a specific name
 and play-style, and then demon- strate your 
 implementation of the state and strategy design patterns
  by using the soccer player’s functions to show how a player’s
   play-style can be changed, and what happens when a player continues making fouls.

 */

#include "AttackPlayStyle.h"
#include "DefendPlayStyle.h"
#include "PossessionPlayStyle.h"
#include "SoccerPlayer.h"
#include "PlayStyle.h"
#include <iostream>

using namespace std;

int main() {

    string name;
    int iStyle;
    PlayStyle* style;

    cout << "Enter the name of your new player: ";
    cin >> name;

    cout << "Choose a Play Style for " << name << ": 1 Attack, 2 Defend, 3 Possesion >";
    cin >> iStyle;

    if(iStyle == 1)
        style = new AttackPlayStyle();
    else if(iStyle == 2)
        style = new DefendPlayStyle();
    else if(iStyle == 3)
        style = new PossessionPlayStyle();

    SoccerPlayer * myDude = new SoccerPlayer(name, style);

    bool done = 0;
    int option;
    while(!done){
        cout << "Choose an option: 1 Play, 2 Commit Foul, 3 Switch Play Style, 4 Finish" << endl;
        cin >> option;

        if(option == 1){
            myDude->play();
        } else if(option == 2){
            myDude->commitFoul();
        } else if(option == 3){
            cout << "Choose a Play Style for " << name << ": 1 Attack, 2 Defend, 3 Possesion >";
            cin >> iStyle;

            if(iStyle == 1)
                style = new AttackPlayStyle();
            else if(iStyle == 2)
                style = new DefendPlayStyle();
            else if(iStyle == 3)
                style = new PossessionPlayStyle();

            myDude->setPlayStyle(style);
            cout << "Changed!" << endl; 
        } else {
            done = 1;
        }

    }


}