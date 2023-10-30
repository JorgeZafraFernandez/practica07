/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file SumOfDigits.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 27/10/2023
  * @brief Program that reads a natural number and outputs the sum of it's
  *        digits.
  *        
  *        
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
  */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Program that reads a natural number and outputs the sum of it's digits\n";
  std::cout << "Enter a number: "; 
}

inline void GetUserInput(auto& input) {
  std::cin >> input;
}

bool CheckCorrectParameters(int parameter) {
  if (parameter < 0) {
    return false;
  } else {
    return true;
  }
}

int SumOfDigits(int number) {
  int result{0};
  while (number != 0) {
    result += number % 10;
    number = number / 10;
  }
  return result;
} 

int main() {
 // PrintProgramPurpose();
  int number_to_process{-1};
  GetUserInput(number_to_process);
  if (!CheckCorrectParameters(number_to_process)) {
    return 1;
  }
  std::cout << SumOfDigits(number_to_process) << std::endl;
  return 0;
}

