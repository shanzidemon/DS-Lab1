#include<iostream>
using namespace std;
struct Node{
int val;
Node* adress;
};


int main(){
Node* n1=new Node;
n1->val=10;
n1->adress=NULL;
Node* n2=new Node;
n2->val=20;
n2->adress=NULL;
Node* n3=new Node;
n3->val=40;
n3->adress=NULL;

n1->adress=n2;
n2->adress=n3;

cout<<n1->val<<endl<<n2->val<<endl<<n3->val;
cout
}