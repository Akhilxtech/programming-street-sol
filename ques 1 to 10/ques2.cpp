// Finding the Sum of the Digits of the Factorial of a Number
// Difficulty: Easy
// Topics: Basic Programming, Mathematical Computations
// Description: Write a program to find the sum of the digits of the factorial of a given number.
// Example:
// Input: number = 4
// Output: 9
// Explanation: The factorial of 4 is 24, and the sum of the digits (2 + 4) is 6.

#include <iostream>
using namespace std;
int fact(int n){
    if(n==1||n==0) return 1;
    return n*fact(n-1);
}
int main() {
    int num;
    cout<<"enter number:"<<endl;
    cin>>num;
    int result=fact(num);
    int ld,sum=0;
    while(result>0){
        ld=result%10;
        sum+=ld;
        result/=10;
    }
    cout<<"The sum of factorial is:"<<sum;
    
    return 0;
}