#include<iostream>
using namespace std;
void BubbleSort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={24,25,3,6,7,3,7,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
    
}