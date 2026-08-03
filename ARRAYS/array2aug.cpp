#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 0) {
            cout << "First Repeating Element = " << arr[i];
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No repeating element";
    }

    return 0;
}