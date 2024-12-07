// Finding the Common Elements in Two Arrays
// Difficulty: Medium
// Topics: Arrays
// Description: Write a program to find common elements between two arrays.
// Example:
// Input: array1 = [1, 2, 3, 4], array2 = [3, 4, 5, 6]
// Output: [3, 4]
// Explanation: The common elements between the two arrays are 3 and 4.

#include <iostream>
#include<vector>
using namespace std;
void intersection(vector<int> &vec1,vector<int>& vec2){
    int m=vec1.size();
    int n=vec2.size();
    if(m==0||n==0) cout<<"no common elements"<<endl;
    vector<int> common;
    for(int i=0;i<m;i++){
        bool isalreadypresent=false;
        for(int k=0;k<common.size();k++){
            if(vec1[i]==common[k]){
                isalreadypresent=true;
                break;
            }
        }
        if(!isalreadypresent){
            for(int j=0;j<n;j++){
                if(vec1[i]==vec2[j]){
                    common.push_back(vec1[i]);
                    break;
                }
            }
        }
    }
    if(common.empty()){
        cout<<"no common elements"<<endl;
    }
    else{
        cout<<"common elements are :"<<endl;
        for(int elem:common){
            cout<<elem;
        }
    }
}
int main() {
    int size1,size2;
    cout<<"enter size of an array 1:"<<endl;
    cin>>size1;
    cout<<"enter size of an array 2:"<<endl;
    cin>>size2;
    vector<int> arr1(size1);
    vector<int> arr2(size2);
    cout<<"enter elements of an array 1:"<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"enter elements of an array 2:"<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2);
    return 0;
}