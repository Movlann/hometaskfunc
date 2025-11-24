#include <iostream>
using namespace std;
void bal(int a){
    if(a >= 0 && a <= 50){
        cout << "F";
    }
    else if(a > 50 && a <= 60){
        cout << "E";
    }
    else if(a > 60 && a <= 70){
        cout << "D";
    }
    else if(a > 70 && a <= 80){
        cout << "C";
    }
    else if(a > 80 && a <= 90){
        cout << "B";
    }
    else if(a > 90 && a <= 100){
        cout << "A";
    }
    else{
        cout << "Duzgun bal daxil edin";
    }
}
int main(){
    int b;
    cout << "Balinizi daxil edin: ";
    cin >> b;
    bal(b);
}