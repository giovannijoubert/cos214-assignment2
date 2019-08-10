#ifndef NOCARDSTATE_H
#define NOCARDSTATE_H

#include <string>
#include "CardState.h"

using namespace std;

  class NoCardState : public CardState {
		
        public:
           NoCardState();
           void handle();
           CardState* changeCardState();
	};

#endif