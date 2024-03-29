#include <stdio.h>
#include <stdlib.h>

// Structure to represent items
struct Item {
    int value;
    int weight;
};

// Function to compare items based on their value per unit weight
int compare(const void *a, const void *b) {
    double ratio1 = (double)(((struct Item *)a)->value) / (((struct Item *)a)->weight);
    double ratio2 = (double)(((struct Item *)b)->value) / (((struct Item *)b)->weight);
    if (ratio1 < ratio2)
        return 1;
    else if (ratio1 > ratio2)
        return -1;
    else
        return 0;
}

// Function to solve the fractional knapsack problem
double fractionalKnapsack(int W, struct Item arr[], int n) {
    // Sort items by value per unit weight
    qsort(arr, n, sizeof(arr[0]), compare);

    int currentWeight = 0;  // Current weight in knapsack
    double finalValue = 0.0; // Result (value in Knapsack)

    // Loop through all items
    for (int i = 0; i < n; i++) {
        // If adding current item won't overflow, add it fully
        if (currentWeight + arr[i].weight <= W) {
            currentWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        // If adding current item will overflow, add fraction of it
        else {
            int remainingWeight = W - currentWeight;
            finalValue += arr[i].value * ((double)remainingWeight / arr[i].weight);
            break;
        }
    }

    return finalValue;
}

int main() {
    int W = 50; // Capacity of knapsack
    struct Item arr[] = {{60, 10}, {100, 20}, {120, 30}}; // Items {value, weight}
    int n = sizeof(arr) / sizeof(arr[0]); // Number of items

    double maxValue = fractionalKnapsack(W, arr, n);
    printf("Maximum value in Knapsack: %.2f\n", maxValue);

    return 0;
}
