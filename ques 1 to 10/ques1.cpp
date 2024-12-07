// Calculating the Sum of Even Numbers in a Range
// Difficulty: Easy
// Topics: Basic Programming, Mathematical Computations
// Description: Write a program to find the sum of all even numbers within a given range.
// Example:
// Input: range = [1, 10]
// Output: 30
// Explanation: The sum of even numbers between 1 and 10 is 2 + 4 + 6 + 8 + 10 = 30
#include <iostream>
using namespace std;
int range(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        if(i%2==0) sum+=i;
    }
    return sum;
}
int main() {
    int num1,num2,result;
    cout<<"enter number 1:"<<endl;
    cin>>num1;
    cout<<"enter number 2:"<<endl;
    cin>>num2;
    cout<<"the sum of all even numbers in range of "<<num1<<" to "<<num2<<" is "<<range(num1,num2);
    return 0;
}