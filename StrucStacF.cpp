#include<iostream>
using namespace std;

struct Product{
    double height[10];
    double width[10];
    double areaValue[10];

    double Area(double h, double w){
        return h * w;
    }
};

void bubbleSort(double arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    Product p;

    for(int i=0;i<10;i++){
        cout<<"Enter the Height for product "<<i+1<<" :";
        cin >> p.height[i];

        cout<<"Enter the width for product "<<i+1<<" :";
        cin >> p.width[i];
    }

    for(int i=0; i<10; i++){
        p.areaValue[i] = p.Area(p.height[i], p.width[i]);
    }

    bubbleSort(p.areaValue, 10);
    cout<<"Sorted area : ";
    for(int i=0;i<10;i++){
        cout<<p.areaValue[i]<<" ";
    }
    
    cout<<endl;

    int stack[100];
    int top = -1;

    

    void Stac1(double value){
    if(top == 99) {
        cout << "Stack is Full" << endl;
    } else {
        top++;
        stack[top] =value;
    }
}
    for(int i=0;i<10;i++){
        Stac1(p.areaValue[i]);
    }


    cout << "Stack elements: ";
    for(int i = 0; i <= top; i++) {
        cout<<"Stac Element is :" << stack[i] << " ";
    }
}

