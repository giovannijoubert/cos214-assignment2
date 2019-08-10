#include "MerchandiseFactory.h"
#include "ArsenalFactory.h"
#include "ChelseaFactory.h"
#include "LiverpoolFactory.h"
#include <iostream>

using namespace std;

int main() {

  //setup the factories
  MerchandiseFactory ** myMerchFactory = new MerchandiseFactory * [3];
  myMerchFactory[0] = new ChelseaFactory;
  myMerchFactory[1] = new ArsenalFactory;
  myMerchFactory[2] = new LiverpoolFactory;

  const int maxMerch = 50;
  Merchandise ** myMerch = new Merchandise * [maxMerch];

  int type, club;
  int count = 0;
  int merchCount = 0;
  char cInflated;
  string size;
  bool cont = 1;

  while (cont) {
    cout << "Choose the type of merchandise you would like to create: Soccer Ball = 1, Shirt = 2 >";
    cin >> type;
    cout << "Choose the club which merchandise should be created: Chelsea = 1, Arsenal = 2, Liverpool=3 >";
    cin >> club;

    if (type == 1) {
      cout << "Is/Are the Soccer Balls Inflated: Y , N >";
      cin >> cInflated;
    } else if (type == 2) {
      cout << "Choose the size of the shirt(s) to be created >";
      cin >> size;
    }

    cout << "How many marchandise items should be created? >";
    cin >> count;
    for (int j = 0; j < count; j++) {
      if (type == 1) {
        if (cInflated == 'Y')
          myMerch[merchCount] = myMerchFactory[club - 1]->createSoccerBall(true);
        else if (cInflated == 'N')
          myMerch[merchCount] = myMerchFactory[club - 1]->createSoccerBall(false);
      } else if (type == 2) {
        myMerch[merchCount] = myMerchFactory[club - 1]->createShirt(size);
      }
      merchCount++;
    }

    cout << "Enter 1 to create more items or 0 to stop >";
    cin >> cont;
  }

  for (int i = 0; i < merchCount; i++) {
    delete myMerch[i];
  }

  for (int i = 0; i < 3; i++) {
    delete myMerchFactory[i];
  }

  delete[] myMerchFactory;

  return 0;

}