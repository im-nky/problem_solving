#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string
void reverseK(char *str, int k) {
    int len = strlen(str);
    for (int i = 0; i < len; i += k) {
        int left = i;
        int right = (i + k - 1 < len) ? (i + k - 1) : (len - 1);
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    char str[100] = "Nitin Kumar Yadav";
    int k = 2;
    
    reverseK(str, k);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
