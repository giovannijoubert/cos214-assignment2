main: main.o AttackPlayStyle.o CardState.o DefendPlayStyle.o NoCardState.o PlayStyle.o PossessionPlayStyle.o RedCardState.o SoccerPlayer.o YellowCardState.o
	g++ -o main main.o AttackPlayStyle.cpp CardState.cpp DefendPlayStyle.cpp NoCardState.cpp PlayStyle.o PossessionPlayStyle.cpp RedCardState.cpp SoccerPlayer.cpp YellowCardState.cpp

main.o: main.cpp AttackPlayStyle.h DefendPlayStyle.h PossessionPlayStyle.h SoccerPlayer.h PlayStyle.h
	g++ -c main.cpp

AttackPlayStyle.o: AttackPlayStyle.h AttackPlayStyle.cpp
	g++ -c AttackPlayStyle.cpp
	
CardState.o: CardState.h CardState.cpp
	g++ -c CardState.cpp
	
DefendPlayStyle.o: DefendPlayStyle.h DefendPlayStyle.cpp
	g++ -c DefendPlayStyle.cpp

NoCardState.o: NoCardState.h NoCardState.cpp
	g++ -c NoCardState.cpp
	
PlayStyle.o: PlayStyle.h PlayStyle.cpp
	g++ -c PlayStyle.cpp
	
PossessionPlayStyle.o: PossessionPlayStyle.h PossessionPlayStyle.cpp
	g++ -c PossessionPlayStyle.cpp
	
RedCardState.o: RedCardState.h RedCardState.cpp
	g++ -c RedCardState.cpp
	
SoccerPlayer.o: SoccerPlayer.h SoccerPlayer.cpp
	g++ -c SoccerPlayer.cpp

LiverpoolShirt.o: YellowCardState.h YellowCardState.cpp
	g++ -c YellowCardState.cpp

run:
	./main

clean:
	rm *.o main