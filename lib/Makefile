SRCS += mypath.c
LIBNAME += libmypath.so

all:
	gcc $(SRCS) -o $(LIBNAME) -shared -fPIC

install:
	cp $(LIBNAME) /usr/lib
	cp mypath.h /usr/include

uninstall:
	rm -f /usr/lib/$(LIBNAME) /usr/include/mypath.h

clean:
	rm -f $(LIBNAME) *.o
