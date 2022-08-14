#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char name[20];
    float salary;
}ep;

union money
{
    int rupees; // This is the default member of the union.
    float dollars; // This is the other member of the union.
};

int main(){
    ep e1;
    union money m1;
    enum Meal {Breakfast, Lunch, Dinner};
    cout<< "Meals: " << Breakfast << " " << Lunch << " " << Dinner << endl;
    m1.rupees = 1000;
    m1.dollars = 1.5;
    cout<<"The value of m1.dollars is: "<<m1.dollars<<endl;
    e1.id = 1;
    strcpy(e1.name, "John");
    e1.salary = 10000;
    cout<<"The id is: "<<e1.id<<endl; 
    cout<<"The name is: "<<e1.name<<endl;
    cout<<"The salary is: "<<e1.salary<<endl;
    return 0;
}