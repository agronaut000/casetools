CC=g++
CFLAGS=-c -Wall
LDFLAGS=

bindir=/home/01/chernobr/casetools/lab1/install/
INSTALL=/usr/bin/install

SOURCES=main.cpp hello.cpp factorial.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

SOURCES2=$(wildcard *.cpp)
OBJECTS2=$(SOURCES2:.cpp=.o)
EXECUTABLE2=hello

all: $(SOURCES2) $(EXECUTABLE2)

$(EXECUTABLE2): $(OBJECTS2) 
	$(CC) $(LDFLAGS) $(OBJECTS2) -o $@

#.cpp.o:
%.o:%.cpp
	$(CC) $(CFLAGS) $< -o $@

install: all
	$(INSTALL) $(EXECUTABLE2) $(bindir)hello

uninstall:
	rm -f $(bindir)hello

hello-1.0.tar.gz: $(EXECUTABLE2)
	-rm -rf hello-1.0
	mkdir hello-1.0
	cp *.cpp *.h Makefile hello-1.0
	tar zcvf $@ hello-1.0

dist: hello-1.0.tar.gz

distclean:
	rm -rf hello-1.0
	rm -f hello-1.0.tar.gz

clean:
	rm -f *.o
	rm -f hello

cleanall: clean distclean uninstall

help:
	@echo 'make - компиляция проекта'
	@echo 'make install - установить программу по пути $(bindir)hello'
	@echo 'make uninstall - удалить программу по пути $(bindir)hello'
	@echo 'make dist - создать дистрибутив программы hello-1.0.tar.gz'
	@echo 'make distclean - удалить дистрибутив'
	@echo 'make cleanall - привести проект к начальному состоянию'
	@echo 'make test - тестовый запуск проекта (и его компиляция, он не был откомпилирован ранее'
	@echo 'make help - помощь по Makefile'

test: all
	./hello

.DEFAULT:
	@echo 'make - компиляция проекта'
	@echo 'make install - установить программу по пути $(bindir)hello'
	@echo 'make uninstall - удалить программу по пути $(bindir)hello'
	@echo 'make dist - создать дистрибутив программы hello-1.0.tar.gz'
	@echo 'make distclean - удалить дистрибутив'
	@echo 'make cleanall - привести проект к начальному состоянию'
	@echo 'make test - тестовый запуск проекта (и его компиляция, он не был откомпилирован ранее'
	@echo 'make help - помощь по Makefile'
