#include<iostream>
using namespace std;

struct Student{
    int id;
    float gradepoint[4];
    int creditHour=3;
    float cgpa;
    float toatalGradePoint;
};

int main(){
    
    int numS, numG;

    cout << "How Many Student : ";
    cin >> numS;
    Student s[numS];

    cout << "How many grade point : ";
    cin >> numG;

    //id input for student
    for(int i=0;i<numS;i++){
        cout<<"Enter the id for student "<<i+1<<" :";
        cin>>s[i].id;
    }




    for(int i = 0; i < numS; i++){
        cout << "Enter grade points for Student " << i+1 << ":"<<endl;
        for(int j = 0; j < numG; j++){
            cout << "Enter the  Grade " << j+1 << ": ";
            cin >> s[i].gradepoint[j];
        }
    }
    //total grade point;
    float toatalGradePoint=0;
    for(int i=0;i<numS;i++){
        s[i].toatalGradePoint =0;
        for(int j=0;j<numG;j++){
            s[i].toatalGradePoint +=s[i].gradepoint[j];

        }
    }
    // cout<<s[1].toatalGradePoint;
    

    
    
    //cgpa
    for(int i=0;i<numS;i++){
        s[i].cgpa=(s[i].toatalGradePoint/(numG*3));

    }

    for(int i=0;i<numS;i++){

        cout<<"cgpa for student id "<<s[i].id<<" "<<s[i].cgpa<<endl;
    }

   

    


}

