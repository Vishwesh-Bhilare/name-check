#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert text to lowercase
void toLowerArray(char text[]) {
    for (int i = 0; i<100; i++) {
        text[i] = tolower(text[i]);
    }
}

// delay
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main() {
    char guest1_first[50], guest1_last[50];
    char guest2_first[50], guest2_last[50];
    char full_name1[100], full_name2[100];
    int cmp, len1, len2;

    // Getting guest's full name
    printf("Enter first guest's first name: ");
    scanf("%s", guest1_first);
    
    printf("Enter first guest's last name: ");
    scanf("%s", guest1_last);

    // Copying and concatenating
    strcpy(full_name1, guest1_first);
    strcat(full_name1, " ");
    strcat(full_name1, guest1_last);

    printf("\nEnter second guest's first name: ");
    scanf("%s", guest2_first);
    
    printf("Enter second guest's last name: ");
    scanf("%s", guest2_last);

    strcpy(full_name2, guest2_first);
    strcat(full_name2, " ");
    strcat(full_name2, guest2_last);

    // lowercase
    toLowerArray(full_name1);
    toLowerArray(full_name2);

    // length
    len1 = strlen(full_name1) - 1;
    len2 = strlen(full_name2) - 1;
    printf("\nLength of first guest's full name: %d characters", len1);
    printf("\nLength of second guest's full name: %d characters", len2);

    // comparing
    cmp = strcmp(full_name1, full_name2);
    if (cmp == 0) {
        printf("\n%s and %s have the same name!\n", full_name1, full_name2);
    } else {
        printf("\n%s and %s are different guests.\n", full_name1, full_name2);
    }

    // same name
    toLowerArray(guest1_first);
    toLowerArray(guest2_first);
    toLowerArray(guest1_last);
    toLowerArray(guest2_last);

    if (strcmp(guest1_first, guest2_first) == 0) {
        printf("\nBoth guests have the same first name: %s!\n", guest1_first);
    }
    if (strcmp(guest1_last, guest2_last) == 0) {
        printf("\nBoth guests have the same last name: %s!\n", guest1_last);
    }

delay(10);

    return 0;
}
