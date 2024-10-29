#include <stdio.h>
#include <stdlib.h>
#include "major1.h"

void display_menu() {
    printf("\nMenu:\n");
    printf("1. Power of 2\n");
    printf("2. Reverse Bits\n");
    printf("3. Replace Bit Position from Mask\n");
    printf("4. Check if Palindrome\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    unsigned int num, exponent, mask, position;
    
    while (1) {
        display_menu();
        scanf("%d", &choice);
        
        if (choice == 5) {
            printf("Exiting program.\n");
            break;
        }

        printf("Enter a positive integer (less than 2 billion): ");
        scanf("%u", &num);
        if (num >= 2000000000) {
            printf("Invalid input. Please enter a number less than 2 billion.\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter the exponent for 2^exponent: ");
                scanf("%u", &exponent);
                printf("Result: %lu\n", power_of_2(exponent));
                break;
            case 2:
                printf("Reversed bits: %u\n", reverse_bits(num));
                break;
            case 3:
                printf("Enter mask and position: ");
                scanf("%u %u", &mask, &position);
                printf("Modified number: %u\n", replace_bit_position(num, mask, position));
                break;
            case 4:
                printf("Is palindrome: %s\n", is_palindrome(num) ? "Yes" : "No");
                break;
            default:
                printf("Invalid option.\n");
        }
    }
    
    return 0;
}
