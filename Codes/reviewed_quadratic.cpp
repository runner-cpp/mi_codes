#include <iostream>
#include <cmath>

int main() {
  
  double a, b, c;

  std::cout << "Enter a: ";
  std::cin >> a;
  /* if (a == 0) {
    std::cout << "a cannot be zero for a quadratic equation." << std::endl;
    return 1;
  }*/

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  double root1, root2;

  double discriminant = b*b - 4*a*c;
  /* if (discriminant <0){
    std::cout << "No real roots." << std::endl;
  } else {
    root = (-b + std::sqrt(discriminant))/(2*a);
  }*/
  root1 =  (-b + std::sqrt(discriminant))/(2*a);
  root2 =  (-b - std::sqrt(discriminant))/(2*a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2; << "\n";

  return 0;
  
}

// you can avoid recalculating 2*a by storing in a variable if you plan to expand the program, but for now, code is fine.