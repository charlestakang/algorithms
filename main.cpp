#include <iostream>


int main()
{
    int num;
    std::cout << "Enter a number\n";
    std::cin >> num;
    int lnum = num%10;
    int fnum = num/10;
    std::cout << "You entered " << num << "\n";
    std::cout << "First digit is " << fnum << "\n";
    std::cout << "Last digit is " << lnum << "\n";
    return 0;
}
