#ifndef SOCCERBALL_H
#define SOCCERBALL_H

#include <string>
#include "Merchandise.h"

using namespace std;

  class SoccerBall : public Merchandise {
		
	    public:
            SoccerBall(string, double, bool);
            string getDescription();
        private:
            bool inflated;  
	};

#endif