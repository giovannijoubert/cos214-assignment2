#ifndef SOCCERPLAYER_H
#define SOCCERPLAYER_H

#include <string>
#include "CardState.h"
#include "PlayStyle.h"

using namespace std;

  class SoccerPlayer {
		
	    public:
            SoccerPlayer(string, PlayStyle*);
            void play();
            ~SoccerPlayer();
            void commitFoul();
            void setPlayStyle(PlayStyle*);
        private:
            string name;
            CardState* state;
            PlayStyle* style;

	};

#endif