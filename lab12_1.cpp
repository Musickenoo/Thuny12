#include<iostream>
#include <ctime> 
using namespace std;

long long int fibonacci(int x){
    if(x == 0 || x==1) return x;
    else{   
        return fibonacci(x-1)+fibonacci(x-2) ;
    }
}

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed TiSme: " << elapsed << " seconds.";
    return 0;
}