// The const keyword in C++ is used to define constants,
//  Tells the compiler tto prevent anything from modifying the value of a variable after it has been initialized.
// This is useful for defining fixed values that should not be modified throughout the program.
//(read-only variables).

// we also use Upper case letters for constant variable names to distinguish them from normal variables.
#include <iostream>

int main()
{
    const double PI = 3.14159;              // Constant variable the value of pi stays the same throughout the program
    double radius = 5.0;                    // Normal variable
    double circumference = 2 * PI * radius; // Normal variable
    double area = PI * radius * radius;     // Normal variable
    std::string unit = "cm";                // String variable for units
    std::string unit2 = "cm²";              // String variable for area units

    std::cout << "If the raius of a circle is " << radius << unit << " ,\n"
              << "then the circumference and area would be " << circumference << unit << " and " << area << unit2 << " respectively.\n";
    return 0;
}
