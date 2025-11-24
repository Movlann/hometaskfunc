#include <iostream> 
using namespace std;
void eded(int a){
    if(a > 0){
        cout << "Eded musbetdir";
    }
    else if(a < 0){
        cout << "Eded menfidir";
    }
    else{
        cout << "Eded 0-dir";
    }
}
int main(){
    int b;
    cout << "Eded daxil edin: ";
    cin >> b;
    eded(b);
}