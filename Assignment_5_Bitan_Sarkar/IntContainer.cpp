// Suppose IntContainer is a class that models an array of integers. Suppose ic is an obiect of class IntContainer. 
// You want to increase the values of all the elements in the array in ic by 1 by simply writing ic+=1;. 
// Support the +=, =-, and prefix and postfix increment and decrement operators using operator overloading.

#include<iostream>
using namespace std;

#define MAX 1000

class IntContainer
{
    private: 
    int n;
    int arr[MAX];
    public:
    IntContainer()
    {
        for (int i=0; i<MAX; i++)
        {
            arr[i] = 0;
        }
    }
    void input(){
        cout << "Enter the number of elements you want in array: " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter element : " << i + 1 << endl;
            cin >> arr[i];
        }
    }
    void operator += (int x){
        for (int i = 0; i < n; i++)
        {
            arr [i] = arr[i] + x;
        }
    }
    void operator -= (int x){
        for (int i = 0; i < n; i++)
        {
            arr [i] = arr[i] - x;
        } 
    }
    void print()
    {
        for (int i = 0; i < n; i++)
        {
           cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main (){
    IntContainer ic;
    ic.input();
    ic.print();
    ic += 2;
    ic.print();
    ic -= 2;
    ic.print();
}
