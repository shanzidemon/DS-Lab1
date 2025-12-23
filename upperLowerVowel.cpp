#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a char: ";
    cin>>ch;
    if(ch>='A' && ch<='Z' ){
        cout<<"Its a Upper Case "<<endl;
    }
    else if(ch >='a' && ch <='z'){
        cout<<"Its lower case "<<endl;
    }
    else{cout<<"Wrong Input "<<endl;}

    f(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Vlowel ";
    }
    else{
        cout<<"Consonent ";
    }

}