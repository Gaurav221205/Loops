#include <iostream>
using namespace std;

int main(){
    int a,b,power=1;
    cin>>a>>b;
    for(int i=1; i<=b;i++){
        power=power*a;}
    cout<<power<<endl;
    return 0;
}  