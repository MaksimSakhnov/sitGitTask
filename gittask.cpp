#include <iostream>
#include <vector>


using namespace std;

int fib(int n){
    vector <int> mas;
    mas.push_back(0);
    mas.push_back(1);
    int temp;
    int count = 0;
    int i =0;
    while(count < n ){
        if (count < n -1 ){
            cout << mas[i] << endl;
            temp = mas[i] + mas[i+1];
            mas[i] = mas[i + 1];
            mas[i+1] = temp;
            count++;
        }
        else if(count == n - 1){
            
            break;
        }
        
    }
    return mas[i];

}

int main(){

    cout << "Hello, World! \n";
    cout << fib(10);
    return 0;
}