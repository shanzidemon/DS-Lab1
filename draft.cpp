for(int i=0;i<numS;i++){
       float sumOfGrade=0;
        for(int j=0;j<numG;j++){
            sumOfGrade[i] =s[i].gradepoint[j]*s[i].creditHour;
            s[i].cgpa=(float)sumOfGrade[i]/numG;
        }
    }

    //information of a student;
    for(int i=0;i<numS;i++){
        cout<<"Cgpa for student  "<<i+1<<" :"<<endl;
        cout<<"cgpa is "<<s[i].cgpa<<endl;
    }
