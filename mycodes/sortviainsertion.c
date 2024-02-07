#include <stdio.h>
//Sorting the array and taking inputs at the same time
int main(void) {
    int num, temp;
    scanf("%d", &num);
    int arr1[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &temp);
        int j = i - 1;
        while (j >= 0 && arr1[j] > temp) {
            arr1[j + 1] = arr1[j];
            j = j - 1;
        }
        arr1[j + 1] = temp;
    }
    printf("The Sorted array is:\n");
    for (int k = 0; k < num; k++) {
        printf("%d\n", arr1[k]);
    }

    return 0;
}
