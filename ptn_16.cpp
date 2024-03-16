#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int space =1;space<= n-row+1;space++) {
            cout << " ";
        }
        for (int col = row; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
