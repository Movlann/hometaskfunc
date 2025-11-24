#include <iostream>
using namespace std;
int fakt(int a){
    int p = 1;
    for(int i = 1; i <= a; i++){
        p = p * i;
    }
    return p;
}
int main(){
    int b;
    cout << "Eded daxil edin: ";
    cin >> b;
    cout << "Faktoriali: " << fakt(b);
}