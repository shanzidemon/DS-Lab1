#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row :";
    cin>>row;
    cout<<"Enter the column :";
    cin>>col;
    int sum1=0;
    int arr1[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"] :";
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum1 +=arr1[i][j];
        }
        
    }
     cout<<"Sum is :"<<sum1<<endl;

     int totalElement=row*col;
     cout<<"Average is "<<(float)sum1/totalElement<<endl;
    int evensum,oddsum;
    int evenelement=0;
    int oddelement=0;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr1[i][j] %2 ==0){
                evensum +=arr1[i][j];
                evenelement++;
            }
            else{

                oddsum +=arr1[i][j];
                oddelement++;
            }
        }
     }
     cout<<"Even Sum is "<<evensum<<endl;
     cout<<"Odd Sum is "<<oddsum<<endl;

     
    
     float evenavg=(float)evensum/evenelement;
     float oddavg=float(oddsum)/oddelement;
     cout<<"even avg is "<<evenavg<<endl;
     cout<<"Odd avg is "<<oddavg<<endl;



     //fibonaci chek
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
        }
     }
}