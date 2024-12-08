// Finding Missing Numbers in a Sequence
// Difficulty: Easy
// Topics: Basic Programming, Arrays
// Description: Write a program to find missing numbers in a sequence from 1 to n.
// Example:
// Input: sequence = [1, 2, 4, 5]
// Output: [3]
// Explanation: The missing number in the sequence from 1 to 5 is 3.

#include <iostream>
using namespace std;
void MissSequence(int arr[],int size){
    int e=1;
    for(int i=0;i<size;i++){
        while(arr[i]>e){
            cout<<"missing sequences are:"<<e<<endl;
            e++;
    
        }
        e++;
    }
}
int main() {
    int m;
    cout<<"enter size of an array:"<<endl;
    cin>>m;
    int arr[m];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    MissSequence(arr,m);
    
    return 0;
}