main.exe : mainx.o functions-team-x.o
		gcc -o main.exe mainx.o functions-team-x.o -lm

mainx.o: mainx.c functions-team-x.h
		gcc -c mainx.c

functions-team-x.o: functions-team-x.c
		gcc -c functions-team-x.c

clean :
	rm *.o