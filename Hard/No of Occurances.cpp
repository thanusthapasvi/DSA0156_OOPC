#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout<<"Enter Size of Array : ";
	cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
    vector<bool> counted(n, false);
    for (int i = 0; i < n; ++i) {
        if (counted[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] == arr[i]) {
                ++count;
                counted[j] = true;
            }
        }
        cout << "Element " << arr[i] << " occurs " << count << " times." << endl;
    }
}
