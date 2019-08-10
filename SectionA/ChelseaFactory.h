#ifndef CHELSEAFACTORY_H
#define CHELSEAFACTORY_H

#include <string>
#include "MerchandiseFactory.h"

using namespace std;

  class ChelseaFactory : public MerchandiseFactory {
		
	    public:
            ChelseaFactory();
            ~ChelseaFactory();
            Merchandise* createShirt(string);
            Merchandise* createSoccerBall(bool);
	};

#endif