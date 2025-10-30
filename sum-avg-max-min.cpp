#include<iostream>
using namespace std;
int main(){
    int ni;
    cout<<"Enter the Number of input :";
     cin>>ni;
    int arr1[ni];
    int friq[ni];
    int sum=0;
    int avg=0;

    for(int i=0;i<ni;i++){
        cout<<"Enter Number arr1["<<i<<"] :";
        cin>>arr1[i];
      // sum =sum+ arr1[i];
        sum += arr1[i];
       // what is problem?
    }
    cout<<"Sum is "<<sum<<endl;
    avg=sum/ni;
    cout<<"Avg is "<<avg<<endl;



    int max=0;
    int min=arr1[0];
    for(int i=0;i<ni;i++){
        if(arr1[i]>max){
        max = arr1[i];
        }
        if(arr1[i]<min){
        min=arr1[i];
     }       
    }
    cout<<"Max Number "<<max<<endl;
    cout<<"Min Number "<<min<<endl;

for(int i=0;i<ni;i++){
    if(arr1[i]>1){
       friq[i]=arr1[i];
    }
 for(int i=0;i<ni;i++){
    cout<<arr1[ni];
 }   
}
}