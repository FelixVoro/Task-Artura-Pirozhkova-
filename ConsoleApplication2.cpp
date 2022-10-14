#include <iostream>
using namespace std;

int main(){
    int a, b, c, D;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    D = b^2 - 4 * a * c;
    cout << "Urovnenie imeet ";
    if (D > 0) 
        cout << "2 Kornya";   
    if (D < 0)
        cout << "0 Korney"; 
    if (D == 0)
        cout << "1 koren'";
}