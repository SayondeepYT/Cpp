#include <iostream>

namespace first{
    int x = 10; // Variable in the first namespace
}
namespace second{
    int x = 20; // Variable in the second namespace
}
int main(){
    int x = 5; // Variable in the global scope
    std::cout << "Global x: " << x << '\n'; // Accessing global variable
    std::cout << "--------------------\n";
    std::cout << "First namespace x: " << first::x << '\n'; // Accessing variable from the first namespace
     std::cout << "--------------------\n";
    std::cout << "Second namespace x: " << second::x << '\n';   // Accessing variable from the second namespace
    return 0;
    //here the :: after second or first is called the scope resolution operator.
}