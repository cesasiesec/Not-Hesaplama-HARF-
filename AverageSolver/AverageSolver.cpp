#include <iostream>
using namespace std;

int main() {
    int n;
    char c ='E';

    do {
        cout << "Lutfen notunuzu giriniz (0-100): ";
        cin >> n;

        if (n < 0 || n > 100) {
            cout << "Hata: Not 0-100 arasinda olmali!" << endl;
            continue;  
        }

        if (n >= 90) {
            cout << "Puaniniz : " << n << "," << " Notunuz: A" << endl;
        }
        else if (n >= 70) {
            cout << "Puaniniz : " << n << "," << " Notunuz: B" << endl;
        }
        else if (n >= 50) {
            cout << "Puaniniz : " << n << "," << " Notunuz: C" << endl;
        }
        else {
            cout << "Puaniniz : " << n << "," << " Notunuz: F" << endl;
        }

        cout << "Baska bir not girmek istiyor musunuz? (E/H): ";
        cin >> c;
        if (c == 'H') {
            break;
        }
        
    } while (c == 'E');

    return 0;
}
