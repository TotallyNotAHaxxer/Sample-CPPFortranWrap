#include <iostream>
extern "C" {
  void square_(double* x, double* result);
}

int main() {
    double x = 5.0;
    double result;
    square_(&x, &result);
    std::cout << "Square of " << x << " is " << result << std::endl;
    return 0;
}
