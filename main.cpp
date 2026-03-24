#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int largest, middle, smallest;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Find largest
    if (num1 >= num2 && num1 >= num3)
        largest = num1;
    else if (num2 >= num1 && num2 >= num3)
        largest = num2;
    else
        largest = num3;

    // Find smallest
    if (num1 <= num2 && num1 <= num3)
        smallest = num1;
    else if (num2 <= num1 && num2 <= num3)
        smallest = num2;
    else
        smallest = num3;

    // Find middle
    middle = num1 + num2 + num3 - largest - smallest;

    cout << largest << " " << middle << " " << smallest << endl;

    return 0;
}
