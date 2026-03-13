#include <stdio.h>
#include <string.h>

void getMention(float moyenne) {
    if (moyenne >= 16) printf("Mention: Tres Bien\n");
    else if (moyenne >= 14) printf("Mention: Bien\n");
    else if (moyenne >= 12) printf("Mention: Assez Bien\n");
    else if (moyenne >= 10) printf("Mention: Passable\n");
    else printf("Mention: Ajourne\n");
}

int main() {
    int n, i;
    char names[50][30];
    float notes[50];
    float maxNote = 0;
    char major[30];

    printf("Student Management System\n");
    printf("Number of students : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", names[i]);

        float n1, n2, n3;
        printf("Grades (C, Python, Algo): ");
        scanf("%f %f %f", &n1, &n2, &n3);

        notes[i] = (n1 + n2 + n3) / 3;

        if(notes[i] > maxNote) {
            maxNote = notes[i];
            strcpy(major, names[i]);
        }
    }

    printf("\n--- Final Results ---\n");
    for(i = 0; i < n; i++) {
        printf("Student: %-10s  Average: %5.2f  ", names[i], notes[i]);
        getMention(notes[i]);
    }

    printf("\nTop Student: %s with %.2f\n", major, maxNote);

    return 0;
}
