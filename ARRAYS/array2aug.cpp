// #include <iostream>
// using namespace std;
// int main (){
    
// int arr[2][3]={
//     {1,2,3},
//     {5,4,9}
// };
// for(int i=0;i<2;i++){
// for(int j=0;j<3;j++){
//     cout<<arr[i][j]<<" ";
// }
// }

//     return 0;
// }
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int arr[] = {12, 35, 1, 10, 34, 1, 35};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for (int i = 0; i < n; i++) {

//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         }

//         else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     if (secondLargest == INT_MIN)
//         cout << "Second largest element does not exist";
//     else
//         cout << "Second Largest = " << secondLargest;

//     return 0;
// }
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     cout << "Largest = " << largest << endl;

//     if (secondLargest == INT_MIN)
//         cout << "Second Largest does not exist";
//     else
//         cout << "Second Largest = " << secondLargest;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     // Input
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Reverse
//     int start = 0;
//     int end = n - 1;

//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }

//     // Output
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    bool visited[n] = {false};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {

        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " -> " << count << " time";
        if (count > 1)
            cout << "s";
        cout << endl;
    }

    return 0;
}