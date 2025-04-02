#include <iostream>
using namespace std;

int main(){
    int n,multiply=0;
    cin >> n;
    for(int i = 1; i <= 10; i++){
         multiply = n*i;
         cout <<multiply << endl;
    }

    return 0;
}