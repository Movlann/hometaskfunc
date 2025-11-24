#include <iostream>
using namespace std;
int sahe(int a){
    return a * a;
}
int perimetr(int a){
    return 4 * a;
}
int main(){
int b;
cout << "Kvadratin terefini daxil edin: ";
cin >> b;
cout << "Sahe: " << sahe(b) << endl;
cout << "Perimetr: " << perimetr(b) << endl;
}