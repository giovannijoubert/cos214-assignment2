#ifndef LIVERPOOLFACTORY_H
#define LIVERPOOLFACTORY_H

#include <string>
#include "MerchandiseFactory.h"

using namespace std;

  class LiverpoolFactory : public MerchandiseFactory {
		
	    public:
            LiverpoolFactory();
            ~LiverpoolFactory();
            Merchandise* createShirt(string);
            Merchandise* createSoccerBall(bool);
	};

#endif