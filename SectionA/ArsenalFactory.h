#ifndef ARSENALFACTORY_H
#define ARSENALFACTORY_H

#include <string>
#include "MerchandiseFactory.h"

using namespace std;

  class ArsenalFactory : public MerchandiseFactory {
		
	    public:
            ArsenalFactory();
            ~ArsenalFactory();
            Merchandise* createShirt(string);
            Merchandise* createSoccerBall(bool);
	};

#endif