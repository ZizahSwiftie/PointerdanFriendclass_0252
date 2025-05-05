#include <iostream>
using namespace std;

int main() 
{
    //dereference
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;
    c = &y;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;

    int &d = b; // d adalah referensi ke b
    cout << "Nilai d (referensi ke b): " << d << endl;
    cout << "Alamat memori dari d (sama dengan b): " << &d << endl;

    int f = 5;
    int g = f;
}