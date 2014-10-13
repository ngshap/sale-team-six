# Makefile for SALE Team Six
# Contributors: Joseph Pietrzyk

CC = gcc
CFLAGS = -std=c++11
LIBRARY_SOURCE = Element.cpp LogicOperations.cpp Set.cpp SetOperations.cpp
LIBRARY_OBJ := $(patsubst %.cpp,%.o,$(LIBRARY_SOURCE))
LIBRARY_NAME = saleTeamSixLib.a

$(LIBRARY_NAME): $(LIBRARY_OBJ)
	ar rcs $@ $(LIBRARY_OBJ)

$.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
