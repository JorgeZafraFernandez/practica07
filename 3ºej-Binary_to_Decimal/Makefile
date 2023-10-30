# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the BinaryToDecimal program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

BinaryToDecimal: BinaryToDecimal.o 
	$(CXX) $(FLAGS) $(FLAGS2) BinaryToDecimal BinaryToDecimal.o

BinaryToDecimal.o: BinaryToDecimal.cc
	$(CXX) $(FLAGS) $(FLAGS3) BinaryToDecimal.cc

clean:
	rm *.o BinaryToDecimal
