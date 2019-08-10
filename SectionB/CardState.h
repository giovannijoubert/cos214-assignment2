#ifndef CARDSTATE_H
#define CARDSTATE_H

#include <string>

using namespace std;

  class CardState {
		
        public:
            virtual void handle()=0;
            virtual CardState* changeCardState()=0;
            string getCardColour();
	    protected:
            string cardColour; //red, yellow, none
            
	};

#endif