# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the SumOfDigits program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

SumOfDigits: SumOfDigits.o 
	$(CXX) $(FLAGS) $(FLAGS2) SumOfDigits SumOfDigits.o

SumOfDigits.o: SumOfDigits.cc
	$(CXX) $(FLAGS) $(FLAGS3) SumOfDigits.cc

clean:
	rm *.o SumOfDigits
