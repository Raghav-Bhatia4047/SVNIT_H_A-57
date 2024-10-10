#include <stdio.h>

void getarray(int n, int a[]);
void sortarray(int n, int a[]);
int findMax(int n, int a[]);

int main() {
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    
    int a[n];  

    getarray(n, a);  
    sortarray(n, a);  
    
   
    int max = findMax(n, a);
    printf("Max is %d\n", max);

    return 0;
}


void getarray(int n, int a[]) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}


void sortarray(int n, int a[]) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
               
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

   
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int findMax(int n, int a[]) {
    return a[n - 1];  
}