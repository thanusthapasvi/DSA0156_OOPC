#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void processQueries(vector<int>& arr, const vector<vector<int> >& queries,int n) {
    for (int i = 0; i < queries.size(); ++i) {
        int type = queries[i][0];
        if (type == 1){
            reverse(arr.begin(), arr.end());
            cout<<"Reverse of array = ";
            for(int j=0;j<n;j++)
            	cout<<arr[j]<<" ";
        }
        else if (type == 2) {
            int x = queries[i][1];
            vector<int>::iterator it = find(arr.begin(), arr.end(), x);
            if (it != arr.end())
                cout << distance(arr.begin(), it) << endl;
            else
                cout << "Element not found!" << endl;
        } else if (type == 3) {
            int x = queries[i][1];
            int y = queries[i][2];
            if (x >= 0 && x < static_cast<int>(arr.size()) && y >= 0 && y < static_cast<int>(arr.size()) && x != y)
                swap(arr[x], arr[y]);
        }
    }
}

int main() {
    int N, Q;
    cout<<"Enter size of array : ";
    cin >> N;
    vector<int> arr(N);
    cout<<"Enter elements of array : ";
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    cout<<"Enter no of Queries : ";
    cin >> Q;
    vector<vector<int> > queries(Q, vector<int>(3, 0));
    for (int i = 0; i < Q; ++i) {
        int type;
        cout<<"Enter a choice for Query (Max 3) : ";
        cin >> type;
        queries[i][0] = type;
        if (type == 2) {
            int x;
            cout<<"Enter a element to search in the array : ";
            cin >> x;
            queries[i][1] = x;
        } else if (type == 3) {
            int x, y;
            cout<<"Enter 2 Index values of array to swap : ";
            cin >> x >> y;
            queries[i][1] = x;
            queries[i][2] = y;
        }
    }
    processQueries(arr, queries,N);
    return 0;
}
