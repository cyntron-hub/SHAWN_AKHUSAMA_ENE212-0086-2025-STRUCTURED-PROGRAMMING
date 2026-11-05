#include <stdio.h>
#include <string.h>

int main() {
    char pin[20];
    char correctPin[] = "1234";
    int choice, attempts;
    int unlocked = 0;

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Enter your 4-digit PIN: ");
        scanf("%19s", pin);

        if (strlen(pin) < 4) {
            printf("PIN is too short (must be 4 digits)\n");
        }
        else if (strlen(pin) > 4) {
            printf("PIN is too long (must be 4 digits)\n");
        }
        else {
            printf("PIN is exactly 4 digits\n");

            if (strcmp(pin, correctPin) == 0) {
                unlocked = 1;
                break;
            }
            else {
                printf("Incorrect PIN!\n");
            }
        }

        printf("Remaining attempts: %d\n\n", 3 - attempts);
    }

    if (unlocked == 1) {
        printf("\n=== Device Menu ===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Access granted. Door unlocked.\n");
                break;

            case 2:
                printf("Change username feature coming soon.\n");
                break;

            case 3:
                printf("Change PIN feature coming soon.\n");
                break;

            case 4:
                printf("Exiting system.\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
        }
    }
    else {
        printf("\nSystem locked! Wait for 5 seconds...\n");

        for (int i = 5; i >= 1; i--) {
            printf("%d...\n", i);
        }

        printf("You can try again now.\n");
    }

    return 0;
}
