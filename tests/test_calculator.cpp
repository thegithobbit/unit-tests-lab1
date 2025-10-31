#include <cassert>
#include "../calculator.h"
#include <iostream>

void test_add() {
    assert(add(1,2) == 3);
    assert(add(-1,1) == 0);
    assert(add(0,0) == 0);
    assert(add(100,200) == 300);
    assert(add(-50,-50) == -100);
}

void test_subtract() {
    assert(subtract(5,3) == 2);
    assert(subtract(0,5) == -5);
    assert(subtract(-10,-5) == -5);
    assert(subtract(100,50) == 50);
    assert(subtract(0,0) == 0);
}

void test_multiply() {
    assert(multiply(3,4) == 12);
    assert(multiply(-2,3) == -6);
    assert(multiply(0,5) == 0);
    assert(multiply(10,10) == 100);
    assert(multiply(-5,-5) == 25);
}

void test_divide() {
    assert(divide(10,2) == 5);
    assert(divide(9,3) == 3);
    assert(divide(-6,2) == -3);
    assert(divide(0,1) == 0);
    try { divide(1,0); assert(false); } catch(...) {}
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    std::cout << "All tests passed!\n";
    return 0;
}