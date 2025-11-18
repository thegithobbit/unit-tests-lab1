#include "calculator.h"
#include <stdexcept>

/**
 * @brief Adds two numbers.
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
double Calculator::add(double a, double b) {
    return a + b;
}

/**
 * @brief Subtracts b from a.
 * @param a First number
 * @param b Second number
 * @return Difference of a and b
 */
double Calculator::subtract(double a, double b) {
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * @param a First number
 * @param b Second number
 * @return Product of a and b
 */
double Calculator::multiply(double a, double b) {
    return a * b;
}

/**
 * @brief Divides a by b.
 * @param a Numerator
 * @param b Denominator
 * @return Quotient of a and b
 * @throws std::invalid_argument if b is zero
 */
double Calculator::divide(double a, double b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}
