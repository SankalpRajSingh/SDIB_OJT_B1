app:app.c add.o sub.o mul.o div.o myarth.h
	gcc app.c add.o sub.o mul.o div.o -o app libmyarth.a
add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c

clean:
	rm *.O app