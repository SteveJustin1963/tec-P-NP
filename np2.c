#include <stdio.h>

#define MAX_N 100
#define MAX_WEIGHT 10000

int n;
int weight[MAX_N];
int value[MAX_N];
int capacity;
int dp[MAX_N+1][MAX_WEIGHT+1];

int knapsack(int i, int w) {
    if (i == n) {
        return 0;
    }
    if (dp[i][w] != -1) {
        return dp[i][w];
    }
    if (weight[i] > w) {
        dp[i][w] = knapsack(i+1, w);
    } else {
        int not_taken = knapsack(i+1, w);
        int taken = knapsack(i+1, w-weight[i]) + value[i];
        dp[i][w] = (not_taken > taken) ? not_taken : taken;
    }
    return dp[i][w];
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weight[i], &value[i]);
    }
    scanf("%d", &capacity);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacity; j++) {
            dp[i][j] = -1;
        }
    }
    printf("The maximum value that can be obtained is: %d\n", knapsack(0, capacity));
    return 0;
}
; you should initialize the entire DP table up to MAX_WEIGHT, not just up to 'capacity', 
    ; because the recursive function knapsack() could potentially result in weight w value more than the 'capacity'. 
    ; This could cause an out of bounds access if w-weight[i] > 'capacity'.
