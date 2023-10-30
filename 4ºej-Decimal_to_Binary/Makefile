# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the decimal-to-binary program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

decimal-to-binary: decimal-to-binary.o 
	$(CXX) $(FLAGS) $(FLAGS2) decimal-to-binary decimal-to-binary.o

decimal-to-binary.o: decimal-to-binary.cc
	$(CXX) $(FLAGS) $(FLAGS3) decimal-to-binary.cc

clean:
	rm *.o decimal-to-binary
