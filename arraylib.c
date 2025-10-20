 #include <stdio.h>

int findMaxIndex(int arr[], int size) {  
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
     
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findminIndex(int arr[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

float findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int reverseDigits(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

void sortArray(int arr[], int size) {
    int temp;

    for (int pass = 0; pass < size - 1; pass++) {
        for (int k = 0; k < size - pass - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return i;
    return -1;
}

 
int main() {
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    int index = findMaxIndex(arr, size);
    printf("Largest element is %d at index %d.\n", arr[index], index);

    int inde = findminIndex(arr, size);
    printf("Smallest element is %d at index %d.\n", arr[inde], inde);

    float avg = findAverage(arr, size);
    printf("Average is %.2f.\n", avg);

    printf("Array is: ");
    displayArray(arr, size);

    int n = 123;  
    int reversed = reverseDigits(n);
    printf("%d\n", reversed);

    sortArray(arr, size);
    printf("Sorted array: ");
    displayArray(arr, size);

    int value = 3;  
    int index = linearSearch(arr, size, value);  
    if (index != -1)
        printf("Value %d found at index %d.\n", value, index);
    else
        printf("Value %d not found in the array.\n", value);

    return 0;
}
   
