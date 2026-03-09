/*
Armstrong Number :
An Armstrong number (also known as a narcissistic number, pluperfect number, or pluperfect digital invariant) is a number that is
equal to the sum of its own digits each raised to the power of the number of digits.
For example, 153 is an Armstrong number because it has 3 digits,
example : 1^3 + 5^3 + 3^3 = 153.
*/    
#include <iostream>
#include <cmath>    
using namespace std;    
int main() {    
    int num, originalNum, remainder, n = 0;    
    double result = 0.0;    
    
    cout << "Enter an integer: ";    
    cin >> num;    
        
    originalNum = num;    
        
    while (originalNum != 0) {    
        originalNum /= 10;    
        ++n;    
    }    
        
    originalNum = num;    
           
    while (originalNum != 0) {    
        remainder = originalNum % 10;    
        result += pow(remainder, n);    
        originalNum /= 10;    
    }    
        
    
    if (static_cast<int>(result) == num)    
        cout << num << " is an Armstrong number.";    
    else    
        cout << num << " is not an Armstrong number.";    
        
    return 0;    
}