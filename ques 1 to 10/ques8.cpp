// Finding All Divisors of the Product of Two Numbers
// Difficulty: Medium
// Topics: Number Theory
// Description: Write a program to find all divisors of the product of two given numbers.
// Example:
// Input: number1 = 6, number2 = 10
// Output: [1 2 3 4 5 6 10 12 15 20 30 60]

#include <iostream>
using namespace std;
void divisiors(int num1,int num2){
    int multi=num1*num2;
    int count=0;
    for(int i=1;i<=multi;i++){
        if(multi%i==0){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<"total:"<<count;
}
int main() {
    int number1,number2;
    cout<<"enter number 1:"<<endl;
    cin>>number1;
    cout<<"enter number 2:"<<endl;
    cin>>number2;
    cout<<"divisiors are:"<<endl;
    divisiors(number1,number2);
    
    return 0;
}
