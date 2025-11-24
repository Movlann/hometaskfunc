#include <iostream>
using namespace std;
int cem(int a){
    int s = 0;
    while(a > 0){
        int x = a % 10;
        s = s + x;
        a = a / 10;
    }
    return s;
}
int main(){
    int b;
    cout << "Eded daxil edin: ";
    cin >> b;
    cout << "Cem: " << cem(b);
}