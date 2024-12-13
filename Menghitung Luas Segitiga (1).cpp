#include <iostream>
using namespace std;

void HitungLuasSegitiga(float base, float height);

int main() {
    int i, N;
    float a, t;

    cout << "Banyaknya Segitiga? ";
    cin >> N;

    for (i = 1; i <= N; i++) {
        cout << "\nPanjang Alas Segitiga? ";
        cin >> a;
        cout << "Tinggi Segitiga? ";
        cin >> t;
        HitungLuasSegitiga(a, t);
    }

    return 0;
}

void HitungLuasSegitiga(float base, float height) {
    float area;
    area = (base * height) / 2.0;
    cout << "Luas Segitiga = " << area << endl;
}