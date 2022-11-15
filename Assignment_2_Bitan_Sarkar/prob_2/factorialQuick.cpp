#include <iostream>
#include <map>
using namespace std;

int main()
{
    int num;
    printf("Enter the number you want to find factorial of: ");
    scanf("%d", &num);
    printf("\n");
    map <int,int> fact={{1,1},{2,2},{3,6},{4,24},{5,120},{6,720},{7,5040},{8,40320},{9,362880},{10,3628800}};
    printf("The factorial of %d is: %d\n", num, fact[num]);
}
