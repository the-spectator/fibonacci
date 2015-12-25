/*author:Akshay
date:12.12.12*
just checking my upload*/

#include <iostream>
#include "fibonacci.h"

int main(int argc, char *argv[]){
 
  int num;
  std::cout << "Enter a Number: ";
  std::cin >> num;

  std::cout << fibonacci(num) << std::endl;
}
