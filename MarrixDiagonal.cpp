#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number row and cloum of Matrix :";
    int num;
    cin>>num;

    int matrix[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<"Enter the matrix ["<<i+1<<"] :";
            cin>>matrix[i][j];
        }
    }
}