#include <iostream>
#include <ctime>
#include <assert.h>

using namespace std;

void InsertionSort(int arr[], int len) {
    //insertion sort
    for (int i = 1; i < len; i++) {
        int j = i;
        while (j > 0 && arr[j] < arr[j-1]) {
            //swap without a temp variable
            arr[j] = arr[j] + arr[j-1];
            arr[j-1] = arr[j] - arr[j-1];
            arr[j] = arr[j] - arr[j-1];
            j--;
        }
    }
}

void Merge(int arr[], int low, int mid, int high) {
    //Use 'temp' as an array of size high-low+1, for temporary memory.
    //If you haven't taken 103 yet, you are not expected to understand this.
    int *temp = new int[high-low+1];

    //merge the two sorted subarrays into temp
    int i = low, j = mid+1, k = 0;
    while (k < high-low+1) {
        if (i > mid) {
            temp[k] = arr[j];
            j++;
        } else if (j > high) {
            temp[k] = arr[i];
            i++;
        } else if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    //copy temp back into arr
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }

    delete [] temp;
}

void MergeSort(int arr[], int low, int high) {
    //merge sort
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, low, mid, high);
    }
}

//Do NOT change the main function.
//But if you do anyway for testing purposes, make sure to change it back
//and VERIFY you still pass the submission tests.

int main(int argc, char* argv[]) {
    int n;
    clock_t start;
    double durationI = 0, durationM = 0;

    cin >> n;
    int *arr = new int[n];
    int *backup = new int[n];
    for (int i = 0; i < n; i++) {
        if (n < 100) cin >> arr[i];
        else arr[i] = n-i;
        backup[i] = arr[i];
    }

    start = clock();
    InsertionSort(arr, n);
    durationI += ( clock() - start ) / (double) CLOCKS_PER_SEC;

    if (n < 100) {
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    }

    for (int j = 0; j < n; j++) arr[j] = backup[j];

    start = clock();
    MergeSort(arr, 0, n-1);
    durationM += ( clock() - start ) / (double) CLOCKS_PER_SEC;

    if (n < 100) {
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }

    if (n >= 100) {
        cout << "MergeSort on " << n << " elements took " << durationM << " seconds." << endl;
        cout << "InsertionSort took " << durationI << " seconds." << endl;
    }

    delete [] arr;
    delete [] backup;
	return 0;
}