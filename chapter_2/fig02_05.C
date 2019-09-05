#include <iostream>
int main()
{
    // variables must be declared along with their type before being used
    int num1;
    int num2;
    int sum;
    // io operations are namespaced with std
    std::cout << "Enter first integer: ";
    std::cin >> num1;
    // >> is the stream extraction operator
    std::cout << "Enter second integer: ";
    std::cin >> num2;
    sum = num2 + num1;
    // cout can be fed a stream of objects to print to strout in the order left to right
    std::cout << "Sum is " << sum << std::endl;
    // endl is a stream manipulator and using it outputs a newline and flushes the output buffer
    return 0;
}
