#include <iostream>
#include <string>
using namespace std;

int main(){

    int n = 1;
    int x = 0;
    int a;

    while (true){
        a = x + (n);
        x = a;
        n = a-x;

        cout<<a<<endl;

    }

    return 0;
}