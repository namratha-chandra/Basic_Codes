#include<stdio.h>

// Function to generate the Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, c,i;
    
    printf("Fibonacci series up to %d terms:\n", n);
    
    for(i=1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    
    fibonacci(n);
    
    return 0;
}

