#ifndef MERCHANDISEFACTORY_H
#define MERCHANDISEFACTORY_H

#include <string>
#include "Merchandise.h"

using namespace std;

  class MerchandiseFactory {
		
	    public:
            MerchandiseFactory();
            virtual ~MerchandiseFactory();
            virtual Merchandise* createShirt(string) = 0;
            virtual Merchandise* createSoccerBall(bool) = 0;
	};

#endif