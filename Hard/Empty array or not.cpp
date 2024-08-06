#include <iostream>
#include <vector>
using namespace std;

bool isEmpty(const vector<int>& vec) {
    return vec.empty();
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    vector<int> arr(size);
    if (size == 0)
        cout << "true" << endl;
    else {
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; ++i)
            cin >> arr[i];
        cout << (isEmpty(arr) ? "true" : "false") << endl;
    }
    return 0;
}

