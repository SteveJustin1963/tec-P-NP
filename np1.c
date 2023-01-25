#include <stdio.h>

#define MAX_N 100
#define MAX_SUM 10000

int n;
int set[MAX_N];
int target;
int dp[MAX_N+1][MAX_SUM+1];

int subsetSum(int i, int sum) {
    if (i == n) {
        return sum == target;
    }
    if (dp[i][sum] != -1) {
        return dp[i][sum];
    }
    dp[i][sum] = subsetSum(i+1, sum) || subsetSum(i+1, sum+set[i]);
    return dp[i][sum];
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= target; j++) {
            dp[i][j] = -1;
        }
    }
    if (subsetSum(0, 0)) {
        printf("There exists a subset that sums to the target.\n");
    } else {
        printf("There does not exist a subset that sums to the target.\n");
    }
    return 0;
}
