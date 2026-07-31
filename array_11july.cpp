// #include <iostream>
// using namespace std;

// int main() {
//     int rows, cols;
//     cin >> rows >> cols;

//     int arr[100][100];

//     // Input
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int startRow = 0;
//     int endRow = rows - 1;
//     int startCol = 0;
//     int endCol = cols - 1;

//     while (startRow <= endRow && startCol <= endCol) {

//         // Top Row
//         for (int i = startCol; i <= endCol; i++) {
//             cout << arr[startRow][i] << " ";
//         }
//         startRow++;

//         // Right Column
//         for (int i = startRow; i <= endRow; i++) {
//             cout << arr[i][endCol] << " ";
//         }
//         endCol--;

//         // Bottom Row
//         if (startRow <= endRow) {
//             for (int i = endCol; i >= startCol; i--) {
//                 cout << arr[endRow][i] << " ";
//             }
//             endRow--;
//         }

//         // Left Column
//         if (startCol <= endCol) {
//             for (int i = endRow; i >= startRow; i--) {
//                 cout << arr[i][startCol] << " ";
//             }
//             startCol++;
//         }
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int rows, cols;
//     cin >> rows >> cols;

//     int arr[100][100];

//     // Input
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Row-wise Sum
//     for (int i = 0; i < rows; i++) {
//         int sum = 0;

//         for (int j = 0; j < cols; j++) {
//             sum += arr[i][j];
//         }

//         cout << "Sum of Row " << i + 1 << " = " << sum << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     srand(time(0));              // Seed for random number
//     int randomNum = rand() % 100 + 1; // Random number between 1 and 100
//     int guess;

//     cout << "=== Random Number Guessing Game ===\n";
//     cout << "Guess a number between 1 and 100\n";

//     do {
//         cout << "Enter your guess: ";
//         cin >> guess;

//         if (guess > randomNum) {
//             cout << "Too High!\n";
//         } else if (guess < randomNum) {
//             cout << "Too Low!\n";
//         } else {
//             cout << "🎉 Correct! You guessed the number.\n";
//         }

//     } while (guess != randomNum);

//     return 0;
// }
// #include <iostream>
// #
/#include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     srand(time(0));

//     int secretNumber = rand() % 100 + 1;
//     int guess;
//     int attempts = 0;

//     cout << "=============================\n";
//     cout << "   NUMBER GUESSING GAME\n";
//     cout << "=============================\n";
//     cout << "Guess a number between 1 and 100.\n\n";

//     do {
//         cout << "Enter your guess: ";
//         cin >> guess;
//         attempts++;

//         if (guess > secretNumber) {
//             cout << "Too High!\n\n";
//         }
//         else if (guess < secretNumber) {
//             cout << "Too Low!\n\n";
//         }
//         else {
//             cout << "\nCongratulations! 🎉\n";
//             cout << "You guessed the correct number.\n";
//             cout << "Attempts: " << attempts << endl;
//         }

//     } while (guess != secretNumber);

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] + nums[j] == target) {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> ans = twoSum(nums, target);

//     cout << "Indices: " << ans[0] << " " << ans[1];
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    int totalSum = 0;
    int mainDiagonal = 0;
    int secondaryDiagonal = 0;

    // Input
    cout << "Enter 9 elements:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate sums
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            // Total sum
            totalSum += arr[i][j];

            // Main diagonal
            if (i == j) {
                mainDiagonal += arr[i][j];
            }

            // Secondary diagonal
            if (i + j == 2) {
                secondaryDiagonal += arr[i][j];
            }
        }
    }

    cout << "Total Sum = " << totalSum << endl;
    cout << "Main Diagonal Sum = " << mainDiagonal << endl;
    cout << "Secondary Diagonal Sum = " << secondaryDiagonal << endl;

    if (mainDiagonal > secondaryDiagonal) {
        cout << "Main Diagonal Wins";
    }
    else if (secondaryDiagonal > mainDiagonal) {
        cout << "Secondary Diagonal Wins";
    }
    else {
        cout << "Equal";
    }

    return 0;
}