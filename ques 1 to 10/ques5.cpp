// Calculating the Sum of Digits of a Number Until Single Digit
// Difficulty: Medium
// Topics: Mathematical Computations
// Description: Write a program to keep summing the digits of a number until a single digit is obtained.
// Example:
// Input: number = 9875
// Output: 2
// Explanation: The sum of digits is 9 + 8 + 7 + 5 = 29, and then 2 + 9 = 11, and finally 1 + 1 = 2.
 
#include <iostream>
using namespace std;
int unitdigit(int num){
    while(num>=10){
        int sum=0,ld;
        while(num>0){
            ld=num%10;
            sum+=ld;
            num/=10;
        }
        num=sum;
    }
    return num;
}
int main() {
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    cout<<"the unit digit is:"<<unitdigit(num);
    return 0;
}