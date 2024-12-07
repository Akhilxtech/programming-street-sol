// Finding the Sum of Squares of Digits
// Difficulty: Easy
// Topics: Basic Programming, Mathematical Computations
// Description: Write a program to find the sum of the squares of the digits of a number.
// Example:
// Input: number = 123
// Output: 14
// Explanation: The sum of the squares of digits is 1^2 + 2^2 + 3^2 = 14.

#include <iostream>
using namespace std;
int sumofsquares(int num){
    int ld,sum=0,sq;
    while(num>0){
        ld=num%10;
        sq=ld*ld;
        sum+=sq;
        num/=10;
    }
    return sum;
}
int main() {
    int number;
    cout<<"enter any number:"<<endl;
    cin>>number;
    cout<<"the sum of squares of digits are:"<<sumofsquares(number);
    return 0;
}