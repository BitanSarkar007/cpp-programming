#include <iostream>
// Global and local variables

int glo = 6;
void sum(){
    int a;
    std::cout<< glo;
}

int main(){
    int s = 6;
    int glo = 9;
    glo = 78;
    sum();
    std::cout <<glo;
    std::cout << "\nHello World\n" << s << "\n";
    return 0;
}