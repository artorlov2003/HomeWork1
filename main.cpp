#include <iostream>
#include <cassert>
#include "Complex.h"


void test() {
    assert(Complex(1, 2) + Complex(3, 4) == Complex(4, 6));
    assert(Complex(1, 2) + 3 == Complex(4, 2));
    assert(3 + Complex(1, 2) == Complex(4, 2));
    assert(Complex(1, 2) - Complex(3, 4) == Complex(-2, -2));
    assert(Complex(1, 2) - 3 == Complex(-2, 2));
    assert(0 - Complex(1, 2) == Complex(-1, -2));
    assert(Complex(1, 2) * Complex(3, 4) == Complex(-5, 10));
    assert(Complex(1, 2) * 3 == Complex(3, 6));
    assert(3 * Complex(1, 2) == Complex(3, 6));
    assert(Complex(1, 2) / Complex(3, 4) == Complex(0.44, 0.08));
    assert(Complex(1, 2) / 2 == Complex(0.5, 1));
    assert(1 / Complex(1, 0) == Complex(1, 0));
    assert(Complex(3, 4).abs() == 5);
    assert(Complex(1, 2) == Complex(1, 2));
    assert(Complex(1, 2) != Complex(3, 4));
    assert(Complex(1, 0) == 1);
    assert(1 == Complex(1, 0));
    assert(Complex(1, 2) != 3);
    assert(3 != Complex(1, 2));
    assert(Complex(1, 2) > Complex(0));
    assert(Complex(1, 2) < Complex(3, 4));
    assert(Complex(1, 2) >= Complex(0));
    assert(Complex(1, 2) <= Complex(3, 4));
    assert(Complex(1, 2) > 1);
    assert(1 < Complex(1, 2));
    assert(Complex(1, 2) < 3);
    assert(3 > Complex(1, 2));
    assert(5 <= Complex(3, 4));
    assert(Complex(3, 4) >= 5);
    assert(3 >= Complex(1, 2));
    assert(Complex(1, 2) <= 3);
    assert(-Complex(1, 2) == Complex(-1, -2));
    assert(+Complex(1, 2) == Complex(1, 2));
    assert((Complex(1, 2) = Complex(3, 4)) == Complex(3, 4));
    std::cout << "All tests passed!" << std::endl;

}

int main() {
    test();
    return 0;

}