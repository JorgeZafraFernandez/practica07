# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the leap-year.cc program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

leap-year: leap-year.o 
	$(CXX) $(FLAGS) $(FLAGS2) leap-year leap-year.o

leap-year.o: leap-year.cc
	$(CXX) $(FLAGS) $(FLAGS3) leap-year.cc

clean:
	rm *.o leap-year
