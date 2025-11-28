#include <stdio.h>

int string_length(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void string_copy(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void concatenate(char s1[], char s2[]) {
    int i, j;
    i = 0;
    while (s1[i] != '\0') {
        i++;
    }
    j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int compare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0')
            return 0;
        i++;
    }
    return s1[i] - s2[i];
}


int main() {
    int choice;
    char s1_orig[100], s2_orig[50];
    char s1_temp[100];
    int result, len;

    printf("Enter String 1: ");
    scanf("%s", s1_orig);
    printf("Enter String 2: ");
    scanf("%s", s2_orig);

    do {
        string_copy(s1_orig, s1_temp);

        printf("\n\n** STRING MANIPULATION MENU **\n");
        printf("Current String 1: %s\n", s1_orig);
        printf("Current String 2: %s\n", s2_orig);
        printf("--------------------------------\n");
        printf("1. Find Length of String 1\n");
        printf("2. Copy String 2 to a new string\n");
        printf("3. Concatenate (String 1 + String 2)\n");
        printf("4. Compare String 1 and String 2\n");
        printf("5. Arrange Names (Sort new list)\n");
        printf("6. Enter NEW Strings\n");
        printf("7. Exit\n");
        printf("Enter your choice: "); 
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                len = string_length(s1_orig);
                printf("Length of String 1 ('%s') is: %d\n", s1_orig, len);
                break;

            case 2:
                string_copy(s2_orig, s1_temp);
                printf("String 2 ('%s') copied to temporary string: %s\n", s2_orig, s1_temp);
                break;

            case 3:
                concatenate(s1_temp, s2_orig);
                printf("Concatenated string: %s\n", s1_temp);
                break;

            case 4:
                result = compare(s1_orig, s2_orig);
                if (result == 0)
                    printf("The strings are equal.\n");
                else if (result < 0)
                    printf("String 1 is lexicographically smaller than String 2.\n");
                else
                    printf("String 1 is lexicographically greater than String 2.\n");
                break;

            case 5:
                printf("--- Entering New Strings ---\n");
                printf("Enter String 1: ");
                scanf("%s", s1_orig);
                printf("Enter String 2: ");
                scanf("%s", s2_orig);
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }
    } while (choice != 7);

    return 0;
}