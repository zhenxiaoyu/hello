getpid:getpid.o
	cc -o getpid getpid.o
getpid.o:getpid.c
	cc -c getpid.c
clean:
	rm getpid.o
