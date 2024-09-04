#include <stdio.h>

struct cyber_incident {
    char title[50];
    char description[200];
    char severity[20];
};

int count_recent_incidents(FILE *file_ptr) {
    int count = 0;
    struct cyber_incident incident;
    fseek(file_ptr, 0, SEEK_SET); // move file pointer to beginning
    while (fscanf(file_ptr, " %[^\n]s", incident.title) != EOF) {
        fscanf(file_ptr, " %[^\n]s", incident.description);
        fscanf(file_ptr, " %[^\n]s", incident.severity);
        count++;
    }
    return count;
}

int main() {
    int choice, count = 0;
    FILE *file_ptr;
    struct cyber_incident incident;

    // open file for writing
    file_ptr = fopen("cyber_incidents.txt", "a+");

    if (file_ptr == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    // menu loop
    while (1) {
        printf("\n");
        printf("Cyber Management System\n");
        printf("-----------------------\n");
        printf("1. Report an incident\n");
        printf("2. View all incidents\n");
        printf("3. Count recent registered incidents\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // get incident information from user
                printf("\n");
                printf("Enter incident title: ");
                scanf(" %[^\n]s", incident.title);
                printf("Enter incident description: ");
                scanf(" %[^\n]s", incident.description);
                printf("Enter incident severity: ");
                scanf(" %[^\n]s", incident.severity);

                // write incident information to file
                fprintf(file_ptr, "%s\n%s\n%s\n", incident.title, incident.description, incident.severity);
                count++;

                printf("\n");
                printf("Incident reported successfully.\n");
                break;
            case 2:
                // read incident information from file and display to user
                if (count == 0) {
                    printf("\n");
                    printf("No incidents reported.\n");
                } else {
                    rewind(file_ptr);
                    printf("\n");
                    printf("Incidents:\n");
                    printf("----------\n");
                    while (fscanf(file_ptr, " %[^\n]s", incident.title) != EOF) {
                        fscanf(file_ptr, " %[^\n]s", incident.description);
                        fscanf(file_ptr, " %[^\n]s", incident.severity);
                        printf("Title: %s\nDescription: %s\nSeverity: %s\n\n", incident.title, incident.description, incident.severity);
                    }
                }
                break;
            case 3:
                // count recent registered incidents
                printf("\n");
                printf("Recent registered incidents: %d\n", count_recent_incidents(file_ptr) - count);
                break;
            case 4:
                // close file and exit program
                fclose(file_ptr);
                return 0;
            default:
                printf("\n");
                printf("Invalid choice. Try again.\n");
                break;
        }
    }

    return 0;
}
