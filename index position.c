#include <stdio.h>

int findPosition(int nums[], int n, int target) {
    int left = 0, right = n - 1;
    int pos = n;  // default position if target is greater than all elements

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid; // target exists, return its index
        else if (nums[mid] < target)
            left = mid + 1;
        else {
            pos = mid; // potential insert position
            right = mid - 1;
        }
    }

    return pos; // position where target should be inserted
}

int main() {
    int Q;
    scanf("%d", &Q);

    while (Q--) {
        int N, T;
        scanf("%d %d", &N, &T);
        int nums[N];

        for (int i = 0; i < N; i++)
            scanf("%d", &nums[i]);

        int index = findPosition(nums, N, T);
        printf("%d
", index);
    }

    return 0;
}

