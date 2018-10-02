CFLAGS = -Wall -Werror -MP -MMD
SOURCES = src/main.c src/function.h
.PHONY: clean all Calculator2 test

all :
	make bin/function

bin/function : build/main.o
	gcc build/main.o -o bin/function $(CFLAGS)

build/main.o : src/main.c src/function.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

test:
	make bin/function_test
	bin/function_test

bin/function_test : build/test/main.o build/test/function_test.o
	gcc build/test/main.o build/test/function_test.o build/test/main.o -o bin/function_test $(CFLAGS)

build/test/main.o : src/function.h test/main.c
	gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	gcc -c src/main.c -o build/test/main.o $(CFLAGS) 

build/test/function_test.o : src/calc.h test/function_test.c thirdparty/ctest.h
	gcc -c -I thirdparty test/function_test.c -o build/test/function_test.o $(CFLAGS)

build/test/main.o : src/function.h src/main.c
	gcc -c src/main.c -o build/test/main.o $(CFLAGS)

clean :
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@rm bin/function bin/function_test
	@echo "All files have been cleaned."
