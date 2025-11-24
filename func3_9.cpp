#include <iostream>
using namespace std;
void eded(int a){
    int s = 0;
    for(int i = 2; i <= a; i++){
        if(a % i == 0){
            s = s + 1;
        }
    }
    if(s == 1){
        cout << "Eded sadedir";
    }
    else{
        cout << "Eded murekkebdir";
    }
}
int main(){
    int b;
    cout << "Eded daxil edin: ";
    cin >> b;
    eded(b);
}