// Finding the Sum of Diagonal Elements in a Matrix
// Difficulty: Easy
// Topics: Matrix Operations
// Description: Write a program to calculate the sum of the diagonal elements in a square matrix.
// Example:
// Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
// Output: 15
// Explanation: The sum of the diagonal elements (1 + 5 + 9) is 15.

#include <iostream>
using namespace std;
int diagnolsum(int arr[][100],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}
int main() {
    int n;
    cout<<"enter size of an array:"<<endl;
    cin>>n;
    int matrix[100][100];
    if(n>100){
        cout<<"matrix size can not be more than 100"<<endl;
    }
    cout<<"enter elements of an matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"the sum of diagnol elements of an matrix is:"<<diagnolsum(matrix,n);
    
    return 0;
}