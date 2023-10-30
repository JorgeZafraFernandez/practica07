/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file 
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 
  * @brief Program that turns binary numbers into decimals.
  *        
  *        
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "Program that turns binary numbers into decimals.\n"; 
  std::cout << "Enter a binary number: ";
}

inline void GetUserInput(auto& input) {
  std::cin >> input;
}

bool CheckCorrectParameters(int parameter) {
  if (parameter < 0) {
    return false;
  }
  while (parameter != 0) {
    if (parameter % 10 != 1 && parameter % 10 != 0) {
      return false;
    }
    parameter /= 10;
  }
  return true;
}

/*
 * Converts a binary to decimal by cycling through the number in binary and
 * adding each digit multiplied by the position's power of 2.
 */
int BinaryToDecimal(int binary) {
  int result{0};
  int i{0};
  while (binary != 0) {
    result += binary % 10 * std::pow(2, i);
    i++;
    binary /= 10;
  }
  return result;
}

int main() {
 // PrintProgramPurpose();
  int binary_number;
  GetUserInput(binary_number);
  if (!CheckCorrectParameters(binary_number)) {
    std::cout << "Wrong Input" << std::endl;
    return 1;
  }
  std::cout << BinaryToDecimal(binary_number) << std::endl;
  return 0;
}

