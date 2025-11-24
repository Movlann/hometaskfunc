#include <iostream>
using namespace std;
void eded(int a){
    if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0){
        cout << "Bu il artiq ildir";
    }
    else{
        cout << "Bu il normal ildir";
    }
}
int main(){
    int b;
    cout << "Il daxil edin: ";
    cin >> b;
    eded(b);
}