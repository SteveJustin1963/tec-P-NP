#include <stdio.h>

#define MAX_N 100
#define MAX_WEIGHT 10000

int n;
int weight[MAX_N];
int value[MAX_N];
int capacity;
int dp[MAX_N + 1][MAX_WEIGHT + 1];

// Initialize the dp array
void initializeDP() {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= MAX_WEIGHT; j++) {
            dp[i][j] = -1;
        }
    }
}

// Knapsack function to find the maximum value that can be obtained
int knapsack(int i, int w) {
    if (i == n) {
        return 0;
    }
    if (dp[i][w] != -1) {
        return dp[i][w];
    }
    if (weight[i] > w) {
        dp[i][w] = knapsack(i + 1, w);
    } else {
        int not_taken = knapsack(i + 1, w);
        int taken = knapsack(i + 1, w - weight[i]) + value[i];
        dp[i][w] = (not_taken > taken) ? not_taken : taken;
    }
    return dp[i][w];
}

int main() {
    // Input for number of items
    scanf("%d", &n);
    if (n > MAX_N) {
        printf("Number of items exceeds the maximum limit.\n");
        return 1;
    }

    // Input for weight and value of each item
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weight[i], &value[i]);
    }

    // Input for the knapsack capacity
    scanf("%d", &capacity);
    if (capacity > MAX_WEIGHT) {
        printf("Knapsack capacity exceeds the maximum limit.\n");
        return 1;
    }

    // Initialize dp array
    initializeDP();

    // Compute and print the maximum value that can be obtained
    printf("The maximum value that can be obtained is: %d\n", knapsack(0, capacity));
    return 0;
}


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

updated code initializes the `dp` table up to `MAX_WEIGHT` to avoid out-of-bounds access 
and includes input validation to make sure the inputs `n` and `capacity` do not exceed `MAX_N` and `MAX_WEIGHT`, 
respectively. A function called `initializeDP()` is used to initialize the `dp` array. 
    
1. Initialize the entire `dp` array up to `MAX_WEIGHT`, not just up to `capacity`.
2. Add input validation to make sure that `n` and `capacity` do not exceed `MAX_N` and `MAX_WEIGHT`.
3. Modularize the initialization code into a separate function.
 

    



    
