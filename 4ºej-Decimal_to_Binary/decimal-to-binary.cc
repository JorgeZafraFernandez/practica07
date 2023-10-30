/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal-to-binary.ccc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 29/10/2023
  * @brief Program that turns decimal numbers into their binary counterpart.
  *        
  *        
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
  */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Program that turns decimal numbers into their binary counterpart.\n"; 
  std::cout << "Enter a decimal number: ";
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

int DecimalToBinary(int decimal) {
    int multiplier = 1;
    int result = 0; 
    while (decimal != 0) {
        int rest = decimal % 2;
        decimal /= 2;
        result += multiplier * rest;
        multiplier *= 10;
    }
    return result;
}

int main() {
 // PrintProgramPurpose();
  int decimal_number{-1};
  GetUserInput(decimal_number);
  if (!CheckCorrectParameters(decimal_number)) {
    return 1;
  }
  std::cout << DecimalToBinary(decimal_number) << std::endl;
  return 0;
}

