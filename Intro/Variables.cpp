#include <iostream>

int main() {
    
    int x = 10;
    int y = 5; // Declaration
    int sum = x + y; // Initialization

    std::cout << "If x = " << x << " & y =" << y << '\n';  // Output the values of x and y
    std::cout << "Sum of x and y is: " << sum << '\n'; // Output the sum of x and y 
    
    std::cout << "-------------------------\n";

    int Year = 2023;
    int Month = 10;
    int Day = 6.5; // Note: Day should be an integer, but here it's a float for demonstration

    std::cout << "Current date is: " << Year << "/" << Month << "/" << Day << '\n';
    std::cout << "-------------------------\n";
 
    //int does not support decimal value so it is truncated to 6.
    //we need  double data type for decimal values.

   double price = 10.27;
   double gpa = 3.5;
   double temperature = 36.6; 
    std::cout << "Price is: $" << price << '\n'; // Output the price with decimal value
    std::cout << "My GPA is: " << gpa << '\n'; // Output the GPA with decimal value
    std::cout << "The current temperature is: " << temperature << "°C" << "\n"; // Output the temperature with decimal value
    std::cout << "-------------------------\n";
    //we have char for storing single characters.

    char grade = 'A'; // we use single quotes for characters
    std::cout << "My grade is: " << grade << '\n'; // Output the grade

    std::cout << "-------------------------\n";

    //bool is a data type that can be true or false.
    bool isPassed = true;
    std::cout << "Did I pass the exam? "  << (isPassed ? "Yes" : "No") << '\n'; // Output whether the exam was passed

    std::cout << "-------------------------\n";
    
    //string is a data type that can store multiple characters.
    std::string name = "Sayondeep Ghosh"; // we use double quotes for strings
    std::cout << "My name is: " << name << '\n'; // Output the name
    return 0;
}