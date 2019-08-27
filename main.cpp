#include <iostream>

using namespace std;

int SmallestMising(int arr[], int arrSize, int i){
       int checker;
       if(i == arrSize - 1){
        cout << "No smallest missing element." << endl;
        return 0;
       }
       checker = arr[i] + 1;

       if(arr[i + 1] != checker){
          return checker;
       }
       else{
           return SmallestMising(arr, arrSize, i + 1);
       }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7};
    int smallestElement;
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    smallestElement = SmallestMising(arr, arrSize, 0);

    cout << "Smallest missing element: " << smallestElement << endl;
    return 0;
}
