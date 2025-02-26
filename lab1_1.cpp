#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Введіть розмір масиву N: ";
    cin >> N;

    vector<int> A(N);
    cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> B;
    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            B.push_back(A[i]);
        }
    }

    cout << "Масив B (додатні елементи): ";
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << " ";
    }

    return 0;
}
