// Checking for Palindromic Numbers in a Range
// Difficulty: Medium
// Topics: Mathematical Computations
// Description: Write a program to check for palindromic numbers within a given range.
// Example:
// Input: start = 1, end = 100
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99]
// Explanation: Palindromic numbers between 1 and 100 are the numbers listed.


#include <iostream>
using namespace std;
// finding reverse of a numbwee
int reverse(int num){
    int ld,rev=0;
    while(num!=0){
        ld=num%10;
        rev=(rev*10)+ld;
        num/=10;
    }
    return rev;
}
int main() {
    int start,end;
    cout<<"enter starting point:"<<endl;
    cin>>start;
    cout<<"enter ending point:"<<endl;
    cin>>end;
    if(start>=end){
        cout<<"invalid input starting point should be less than ending point"<<endl;
        return 0;
    }
    cout<<"all palindromes in the range "<<start<<" to "<<end<<" are:"<<endl;
    for(int i=start;i<=end;i++){
        int reversenum=reverse(i);
        if(i==reversenum){
            cout<<i<<" ";
        }
        
    }
    return 0;
}