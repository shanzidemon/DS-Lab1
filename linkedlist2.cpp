#include<iostream>
struct Node{
int val;
Node* adress;
//void 
};
int main(){
    Node * tptr;
    Node * ftpr;
    for(int i =0;i<5;i++){
        if(ftpr==NULL){
            Node * n1=new Node;
            n1->val=i+10;
            n1->adress=NULL;
            ftpr=n1;
            tptr=n1;
        else{
            Node* n2=new Node;
            n2->val=i+10;
            n2->adress=NULL;
            tptr=n2;
        
        }

     }
    }
    while(ftpr !=NULL){
        cout<<ftpr->val<endl;
        ftpr=ftpr->adress;
    }

}