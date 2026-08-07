#include <stdio.h>
#include <string.h>

struct Contact {
    char name[30];
    char phone[15];
};

void addContact(struct Contact contacts[], int *count) {
    printf("Enter name: ");
    scanf("%s", contacts[*count].name);
    printf("Enter phone: ");
    scanf("%s", contacts[*count].phone);
    (*count)++;
    printf("Contact added!\n");
}

void viewContacts(struct Contact contacts[], int count) {
    if (count == 0) {
        printf("No contacts yet.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

void saveToFile(struct Contact contacts[], int count) {
    FILE *fptr = fopen("contacts.txt", "w");
    if (fptr == NULL) {
        printf("Could not save file\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(fptr, "%s,%s\n", contacts[i].name, contacts[i].phone);
    }
    fclose(fptr);
    printf("Contacts saved to file!\n");
}

int main() {
    struct Contact contacts[50];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Contact Book ---\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Save to File\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addContact(contacts, &count);
        } else if (choice == 2) {
            viewContacts(contacts, count);
        } else if (choice == 3) {
            saveToFile(contacts, count);
        } else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice, try again.\n");
        }
    }

    return 0;
}
