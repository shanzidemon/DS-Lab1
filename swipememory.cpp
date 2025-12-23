#include<iostream>
using namespace std;
int main(){
int x;
int y;
cout<<"Enter the value of x :";
cin>>x;
cout<<"Enter the value of y :";
cin>>y;
int *p1=&x;
int *p2=&y;
int *temp;

cout<<p1<<endl;
cout<<p2<<endl;
cout<<temp<<endl;

temp=p1;
p1=p2;
p2=temp;

cout<<p1<<endl;
cout<<p2<<endl;
cout<<temp<<endl;


}