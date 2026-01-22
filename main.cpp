#include<bits/stdc++.h>
using namespace std;

void diamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++){
            cout << " ";
        }
        for (int k = 0; k < i * 2 - 1; k++) {
            cout << "*";
        }
        for (int l = 0; l < n - i; l++){
            cout << " ";
        }
        cout << endl;
    }

    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < n - i; j++){
            cout << " ";
        }
        for (int k = 0; k < i * 2 - 1; k++) {
            cout << "*";
        }
        for (int l = 0; l < n - i; l++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n - i; i++) {
            cout << " ";
        }

    }
}