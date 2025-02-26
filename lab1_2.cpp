#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, T;
    cout << "Введіть розмір масиву N: ";
    cin >> N;
    
    vector<int> A(N);
    cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cout << "Введіть значення T: ";
    cin >> T;
    
    int maxVal = -1; 
    int maxIndex = -1; 

    for (int i = 0; i < N; i++) {
    
        if (A[i] > T && A[i] > 0 && A[i] >= maxVal) {
            maxVal = A[i];
            maxIndex = i;
        }
    }
    
    if (maxIndex != -1) {
        cout << "Номер останнього максимального елемента: " << maxIndex << endl;
    } else {
        cout << "Немає додатніх елементів, більших за T" << endl;
    }

    return 0;
}
