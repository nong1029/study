#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int L, S, T, N;
    cin >> L >> S >> T >> N;
    vector<int> stones(N);
    for (int i = 0; i < N; i++) {
        cin >> stones[i];
    }
    sort(stones.begin(), stones.end());
    vector<int> dp(L+T+1, L+1);// dp[i]表示跳到位置i时最少踩多少次石头
    dp[0] = 0;
    for (int i = S; i <= L+T; i++) {
        for (int j = S; j <= T; j++) {
            dp[i] = min(dp[i], dp[i-j] + (binary_search(stones.begin(), stones.end(), i) ? 1 : 0));
        }
    }
    int result = L+1;
    for (int i = L; i <= L+T; i++) {
        result = min(result, dp[i]);
    }
    cout << result << endl;
    return 0;
}