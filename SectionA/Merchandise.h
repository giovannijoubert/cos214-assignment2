#ifndef MERCHANDISE_H
#define MERCHANDISE_H

#include <string>

using namespace std;

  class Merchandise {
		
	    public:
            Merchandise(string, double, string);
            virtual string getDescription();

        private:
            string club;
            double price;
            string type;
            static int id;
            const int currentID;
	};

#endif