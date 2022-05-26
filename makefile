TARGET = main.cpp
LIBS = ./src/node.cpp

OUTPUT = ./dist/main

COMPILER = g++


all : $(TARGET)
		$(COMPILER) $(TARGET) $(LIBS) -o $(OUTPUT)