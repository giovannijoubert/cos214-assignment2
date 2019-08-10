main: main.o MerchandiseFactory.o ArsenalFactory.o ChelseaFactory.o LiverpoolFactory.o Merchandise.o SoccerBall.o Shirt.o ArsenalShirt.o ArsenalSoccerBall.o ChelseaShirt.o ChelseaSoccerBall.o LiverpoolShirt.o LiverpoolSoccerBall.o
	g++ -o main main.o MerchandiseFactory.cpp ArsenalFactory.cpp ChelseaFactory.cpp LiverpoolFactory.cpp Merchandise.cpp SoccerBall.cpp Shirt.cpp ArsenalShirt.cpp ArsenalSoccerBall.cpp ChelseaShirt.cpp ChelseaSoccerBall.cpp LiverpoolShirt.cpp LiverpoolSoccerBall.cpp

main.o: main.cpp Merchandise.h ArsenalFactory.h ChelseaFactory.h LiverpoolFactory.h
	g++ -c main.cpp

MerchandiseFactory.o: MerchandiseFactory.h MerchandiseFactory.cpp
	g++ -c MerchandiseFactory.cpp
	
ArsenalFactory.o: ArsenalFactory.h ArsenalFactory.cpp
	g++ -c ArsenalFactory.cpp
	
ChelseaFactory.o: ChelseaFactory.h ChelseaFactory.cpp
	g++ -c ChelseaFactory.cpp

LiverpoolFactory.o: LiverpoolFactory.h LiverpoolFactory.cpp
	g++ -c LiverpoolFactory.cpp
	
ArsenalShirt.o: ArsenalShirt.h ArsenalShirt.cpp
	g++ -c ArsenalShirt.cpp
	
ArsenalSoccerBall.o: ArsenalSoccerBall.h ArsenalSoccerBall.cpp
	g++ -c ArsenalSoccerBall.cpp
	
ChelseaShirt.o: ChelseaShirt.h ChelseaShirt.cpp
	g++ -c ChelseaShirt.cpp
	
ChelseaSoccerBall.o: ChelseaSoccerBall.h ChelseaSoccerBall.cpp
	g++ -c ChelseaSoccerBall.cpp

LiverpoolShirt.o: LiverpoolShirt.h LiverpoolShirt.cpp
	g++ -c LiverpoolShirt.cpp
	
LiverpoolSoccerBall.o: LiverpoolSoccerBall.h LiverpoolSoccerBall.cpp
	g++ -c LiverpoolSoccerBall.cpp
	
SoccerBall.o: SoccerBall.h SoccerBall.cpp
	g++ -c SoccerBall.cpp
	
Shirt.o: Shirt.h Shirt.cpp
	g++ -c Shirt.cpp

Merchandise.o: Merchandise.h Merchandise.cpp
	g++ -c Merchandise.cpp

run:
	./main

clean:
	rm *.o main