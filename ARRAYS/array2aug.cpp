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
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 35};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "Second largest element does not exist";
    else
        cout << "Second Largest = " << secondLargest;

    return 0;
}