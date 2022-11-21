#include <iostream>
using namespace std;

int main() {
    int n;
    long long a=1,b=1;
    cin >> n;
    if (n>=2){
        for (int i=0; i<n; i++){
            if(i<n){
                cout << a << endl;
                }
            i++;
            if(i<n){
                cout << b << endl;
                }
            a+=b;
            b+=a;
        }
    }
    else (cout << "errore");
    return 0;
}
