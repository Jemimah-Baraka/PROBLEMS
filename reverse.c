#include <stdio.h>
#include <limits.h>  

int reverse(int x) {
    int result = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return 0; 
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
            return 0; 
        }

        result = result * 10 + digit;
    }
    return result;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed: %d\n", reverse(num));
    return 0;
}
