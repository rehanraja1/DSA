#include <bits/stdc++.h>
using namespace std;
void left_rotate_by_1_place(int arr[], int n){
    int temp = arr[0];
    for (int i = 1; i <= n-1; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    left_rotate_by_1_place(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}