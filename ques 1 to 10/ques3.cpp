// Finding the Sum of Prime Numbers in a Range
// Difficulty: Medium
// Topics: Number Theory, Mathematical Computations
// Description: Write a program to calculate the sum of all prime numbers within a given range.
// Example:
// Input: range = [1, 10]
// Output: 17
// Explanation: The sum of prime numbers between 1 and 10 is 2 + 3 + 5 + 7 = 17.

#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int start,end;
    cout<<"enter starting range:"<<endl;
    cin>>start;
    cout<<"enter ending range:"<<endl;
    cin>>end;
    int prime;
    int sum=0;
    cout<<"the prime numbers in range "<<start<<" to "<<end<<" are:";
    for(int i=start;i<=end;i++){
        if(i<2){
            continue;
        }
        bool isprime=true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<"the sum of prime numbers in range "<<start<<" to "<<end<<" is:"<<sum;
    return 0;
}

