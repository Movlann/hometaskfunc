#include <iostream>
using namespace std;
int ters(int a){
    int s = 0;
    while(a > 0){
        s = s * 10 + a % 10;
        a = a / 10;
    }
    return s;
}
int main(){
    int b;
    cout << "Eded daxil edin: ";
    cin >> b;
    cout << "Tersi: " << ters(b);
}