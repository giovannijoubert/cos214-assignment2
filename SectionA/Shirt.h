#ifndef SHIRT_H
#define SHIRT_H

#include <string>
#include "Merchandise.h"

using namespace std;

  class Shirt : public Merchandise {
		
	    public:
            Shirt(string, double, string);
            string getDescription();
        private:
            string size;  
	};

#endif