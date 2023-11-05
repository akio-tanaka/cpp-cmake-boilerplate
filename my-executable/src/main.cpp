#include <iostream>
#include <lib.h>

int main()
{
  try {
    std::cout << mylib::foo() << std::endl;
  } catch (std::exception& e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }
  return 0;
}