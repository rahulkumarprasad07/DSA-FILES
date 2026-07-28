#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int arr[100][100];

    // Input
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int startRow = 0;
    int endRow = rows - 1;
    int startCol = 0;
    int endCol = cols - 1;

    while (startRow <= endRow && startCol <= endCol) {

        // Top Row
        for (int i = startCol; i <= endCol; i++) {
            cout << arr[startRow][i] << " ";
        }
        startRow++;

        // Right Column
        for (int i = startRow; i <= endRow; i++) {
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        // Bottom Row
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
        }

        // Left Column
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }

    return 0;
}