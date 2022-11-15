// WAP to model a student using a class. It should contain the roll number and the current CGPA of
// the student. Given an array of students, find the roll number of the student with the highest CGPA.

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
    Student(int roll,double cgpa){
        this->roll=roll;
        this->cgpa=cgpa;
    }
};
int main(){
    int n;
    cin>>n;
    vector<Student> a;
    for(int i=0;i<n;i++){
        int roll;
        double cgpa;
        cin>>roll>>cgpa;
        a.push_back(Student(roll,cgpa));
    }
    int maxRoll=a[0].roll;
    double maxCgpa=a[0].cgpa;
    for(auto &x:a){
        if(x.cgpa>maxCgpa){
            maxCgpa=x.cgpa;
            maxRoll=x.roll;
        }
    }
    cout<<maxRoll<<endl;
}
