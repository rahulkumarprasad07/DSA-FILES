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
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int choice, maxNum, attempts;

    cout << "===== NUMBER GUESSING GAME =====\n";
    cout << "1. Easy (1-50, 10 Attempts)\n";
    cout << "2. Medium (1-100, 7 Attempts)\n";
    cout << "3. Hard (1-500, 10 Attempts)\n";
    cout << "Choose Difficulty: ";
    cin >> choice;

    switch(choice){
        case 1:
            maxNum = 50;
            attempts = 10;
            break;
        case 2:
            maxNum = 100;
            attempts = 7;
            break;
        case 3:
            maxNum = 500;
            attempts = 10;
            break;
        default:
            cout << "Invalid Choice!";
            return 0;
    }

    int secret = rand() % maxNum + 1;
    int guess;
    bool win = false;

    while(attempts > 0){

        cout << "\nAttempts Left: " << attempts << endl;
        cout << "Enter Guess: ";
        cin >> guess;

        if(cin.fail()){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter a valid number!\n";
            continue;
        }

        if(guess == secret){
            win = true;
            break;
        }

        int diff = abs(secret - guess);

        if(guess > secret)
            cout << "Too High\n";
        else
            cout << "Too Low\n";

        if(diff <= 5)
            cout << "🔥 Very Close!\n";
        else if(diff <= 15)
            cout << "🙂 Close.\n";
        else
            cout << "❄️ Far Away.\n";

        attempts--;
    }

    if(win){
        int score = attempts * 100;
        cout << "\n🎉 Congratulations!\n";
        cout << "You guessed the number: " << secret << endl;
        cout << "Score: " << score << endl;
    }
    else{
        cout << "\n💀 Game Over!\n";
        cout << "Correct Number was: " << secret << endl;
    }

    return 0;
}