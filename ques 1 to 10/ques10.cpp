// Checking for Armstrong Numbers in a Range
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to find all Armstrong numbers within a given range.
// Example:
// Input: range = [1, 500]
// Output: [1, 153, 370, 371, 407]
// Explanation: Armstrong numbers between 1 and 500 are 1, 153, 370, 371, and 407.

#include <iostream>
#include<cmath>
using namespace std;
int armstrong(int num){
    int ld,sum=0;
    int temp=num,count=0;
    while(temp!=0){
        temp/=10;
        count++;
        
    }
    while(num!=0){
        ld=num%10;
;       sum+=round(pow(ld,count));
        num/=10;
    }
    return sum;
}
int main() {
    int start,end;
    cout<<"enter starting point:"<<endl;
    cin>>start;
    cout<<"enter ending point:"<<endl;
    cin>>end;
    for(int i=start;i<end;i++){
        int result=armstrong(i);
        if(i==result){
            cout<<i<< " ";
        }
    }
    return 0;
}