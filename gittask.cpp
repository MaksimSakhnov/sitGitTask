#include <iostream>


using namespace std;

int fib(int n){
    if (n == 2 || n == 3){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }
}

int main(){

    cout << "Hello, World! \n";
    cout << fib(10);
    return 0;
}