#include "src/calculator.h"
#include <iostream>

// Function to run all test cases
void run_tests() {

	std::cout << "Running test cases..." << std::endl;

	// Boundary Testing: Integer Limits
	int int_max = std::numeric_limits<int>::max();
	int int_min = std::numeric_limits<int>::min();
	
	// Performance and Precision Testing: Floating-Point Numbers
	double large_number = 1e308;  // Close to DBL_MAX
	double small_number = 1e-308; // Close to DBL_MIN

	// Test 1: Addition
	std::cout << "Test 1 - Addition: " << calculator(5, '+', 3) << " (Expected: 8)\n";

	// Test 2: Subtraction
	std::cout << "Test 2 - Subtraction: " << calculator(10, '-', 6) << " (Expected: 4)\n";

	// Test 3: Multiplication
	std::cout << "Test 3 - Multiplication: " << calculator(4, '*', 7) << " (Expected: 28)\n";

	// Test 4: Division
	std::cout << "Test 4 - Division: " << calculator(20, '/', 4) << " (Expected: 5)\n";

	// Test 5: Division by zero (Edge case)
	std::cout << "Test 5 - Division by Zero: " << calculator(10, '/', 0) << " (Expected: error message)\n";

	// Test 6: Large numbers (Edge case)
	std::cout << "Test 6 - Large Numbers: " << calculator(1000000, '*', 1000000) << " (Expected: 1e+12)\n";

	// Test 7: Negative numbers
	std::cout << "Test 7 - Negative Numbers: " << calculator(-5, '+', -3) << " (Expected: -8)\n";

	// Test 8: Mixed positive and negative numbers
	std::cout << "Test 8 - Mixed Sign Numbers: " << calculator(-10, '-', 5) << " (Expected: -15)\n";

	// Test 9: Zero as input
	std::cout << "Test 9 - Zero Input: " << calculator(0, '+', 0) << " (Expected: 0)\n";

	// Test 10: Invalid operator
	std::cout << "Test 10 - Invalid Operator: " << calculator(5, '^', 3) << " (Expected: error message)\n";
	
	// Test 11: Edge case with INT_MAX
	std::cout << "INT_MAX + 1: " << calculator(int_max, '+', 1) << std::endl;  // Expected: Overflow or error

	// Test 12: Edge case with INT_MIN
	std::cout << "INT_MIN - 1: " << calculator(int_min, '-', 1) << std::endl;  // Expected: Underflow or error

	// Test 13 and 14: Addition near the integer limit
	std::cout << "INT_MAX - 1 + 1: " << calculator(int_max - 1, '+', 1) << std::endl;  // Expected: INT_MAX
	std::cout << "INT_MIN + 1 - 1: " << calculator(int_min + 1, '-', 1) << std::endl;  // Expected: INT_MIN

	// Test 15: Large number multiplication
	std::cout << "Large number multiplication: " << calculator(large_number, '*', 2) << std::endl;  // Expected: Overflow or large result

	// Test 16: Small number multiplication
	std::cout << "Small number multiplication: " << calculator(small_number, '*', 2) << std::endl;  // Expected: Very small result or underflow

	// Test 17: Testing precision
	std::cout << "Precision test: " << calculator(1.000000000000001, '+', 1.000000000000002) << std::endl;  // Expected: Precise result

	// Test 18: Testing operations near float limits
	std::cout << "Large number division: " << calculator(large_number, '/', 2) << std::endl;  // Expected: Proper large number division

	// Invalid Input Handling
	// Test 19: Invalid operator
	try {
	std::cout << "Invalid operator: " << calculator(10, '@', 5) << std::endl;  // Expected: Error or handled gracefully
	} catch (const std::exception& e) {
	std::cout << "Caught exception for invalid operator: " << e.what() << std::endl;
	}

	// Test 20: Non-numeric input
	try {
	std::cout << "Non-numeric input: " << calculator('a', '+', 10) << std::endl;  // Expected: Error
	} catch (const std::exception& e) {
	std::cout << "Caught exception for non-numeric input: " << e.what() << std::endl;
	}

	std::cout << "End!" << std::endl;
}

int main() {
	// Function calls to calculate
	// Write your all possible input scenarios here
	// Notice that calculator code written here works with integers
	run_tests();  // Run all the test cases
	return 0;
}
