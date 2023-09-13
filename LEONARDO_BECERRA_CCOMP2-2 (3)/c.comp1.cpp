#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    cout<<"Ingresa un numero"<<endl;
    cin>>number;
    
    while ((number > 0)){
        if (number%2 != 0) {
            cout<<number<<endl;
            
    }
        number = number-1;
    }
    



    return 0;
}