#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
     cout << "Even numbers:" ;
     for(int i=2; i <= n; i+=2){
          cout << i << endl;
     }
        cout << "Odd numbers:";
        for(int i=1; i <= n; i+=2){
            cout << i << endl;}
    return 0;
}