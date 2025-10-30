#include<iostream>
using namespace std;
int main(){
    int arr1[4][4];
    int arr2[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[4][4]={0};
    for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
       for(int k=0;k<4;k++){
        arr3[i][j] +=arr1[i][k]*arr2[k][j];
       }
       }
    }
    cout<<"The output is :"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr3[i][j]<<"  ";
        }
        cout<<endl;
    }
}
