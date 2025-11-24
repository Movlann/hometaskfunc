#include <iostream>
using namespace std;
float eo(float a, float b, float c){
    float s;
    s = a + b + c;
    return s/3;
}
int main(){
    float x, y, z;
    cout << "Birinci ededi daxil edin: ";
    cin >> x;
    cout << "Ikinci ededi daxil edin: ";
    cin >> y;
    cout << "Ucuncu ededi daxil edin: ";
    cin >> z;
    float net;
    net = eo(x, y, z);
    cout << "Ededi orta: " << net;
}
