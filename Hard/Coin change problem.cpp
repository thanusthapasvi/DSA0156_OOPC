#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(int N, const vector<int>& coins) {
    vector<int> dp(N + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < coins.size(); ++j) {
            int coin = coins[j];
            if (i >= coin && dp[i - coin] != INT_MAX)
                dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }
    return dp[N];
}
int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter the coin denominations: ";
    for (int i = 0; i < n; ++i)
        cin >> coins[i];
    int N;
    cout << "Enter the amount N: ";
    cin >> N;
    if(N<0){
    	cout<<"Negative values not allowed"<<endl;
    	return 0;
	}
	else{
    int minNumCoins = minCoins(N, coins);
    cout << "Minimum number of coins required: " << minNumCoins << endl;
    return 0;
	}
}

