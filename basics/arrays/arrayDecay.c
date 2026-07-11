
#include <stdio.h>

void core_utils_func(int core_utilization[]) {
    int x = sizeof(core_utilization);
    printf("The size of the core_utilization in core_utils_func : %d\n", x);
}

//Due to an array decay the size of the entire array will be the size of an int pointer which is 8 bytes.

int main() {
    int core_utilization[] = {43, 67, 89, 92, 71, 43, 56, 12};
    int len = sizeof(core_utilization) / sizeof(core_utilization[0]);

    printf("sizeof core_utilization in main: %zu\n", sizeof(core_utilization)); //4 x 8 = 32.
    printf("len of core_utilization: %d\n", len);
    core_utils_func(core_utilization); // passing an array decay's it to pointer making it only 8 bytes.

    return 0;
}
