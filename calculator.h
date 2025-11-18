#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @class Calculator
 * @brief Performs basic arithmetic operations.
 */
class Calculator {
public:
    /**
     * @brief Adds two numbers.
     * @param a First number
     * @param b Second number
     * @return Sum of a and b
     */
    double add(double a, double b);

    /**
     * @brief Subtracts b from a.
     * @param a First number
     * @param b Second number
     * @return Difference of a and b
     */
    double subtract(double a, double b);

    /**
     * @brief Multiplies two numbers.
     * @param a First number
     * @param b Second number
     * @return Product of a and b
     */
    double multiply(double a, double b);

    /**
     * @brief Divides a by b.
     * @param a Numerator
     * @param b Denominator
     * @return Quotient of a and b
     * @throws std::invalid_argument if b is zero
     */
    double divide(double a, double b);
};

#endif
