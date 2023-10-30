# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the TopToBottom program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

TopToBottom: TopToBottom.o 
	$(CXX) $(FLAGS) $(FLAGS2) TopToBottom TopToBottom.o

TopToBottom.o: TopToBottom.cc
	$(CXX) $(FLAGS) $(FLAGS3) TopToBottom.cc

clean:
	rm *.o TopToBottom
