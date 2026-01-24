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

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main(){
    int n;
    cin >> n;

    if(n>INT_MAX) {
        cout << -1;
    }

    long long rev = 0;
    while (n > 0)
    {
        int last = n % 10;
        rev = rev * 10 + last;
        n /= 10;
    }

    if(rev > INT_MAX) {
        cout << -1;
    }else{
        cout << rev;
    }

}