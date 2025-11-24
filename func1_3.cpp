#include <iostream>
using namespace std;
int kvadrat(int a){
    return a * a;
}
int kub(int a){
    return a * a * a;
}
int main(){
    int b;
    cout << "Eded daxil edin: ";
    cin >> b;
    cout << "Kvadrati: " << kvadrat(b) << endl;
    cout << "Kubu: " << kub(b) << endl;
}