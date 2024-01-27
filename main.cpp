#include <iostream>


int main()
{
    int num;
    std::cout << "Enter a number\n";
    std::cin >> num;
    int sum = 0;
    while (num != 0)
    {
        /* code */
        int lnum = num%10;
        int fnum = num/10;
        std::cout << "You entered " << num << "\n";
        std::cout << "First digit is " << fnum << "\n";
        std::cout << "Last digit is " << lnum << "\n";
        sum += lnum;
        num = fnum;
    }
    std::cout << "Sum of digits is " << sum << "\n";
    return 0;
}
