#include <stdio.h>
#include <string.h>

int main() {
    char current_color[10];

    printf("Enter the current traffic light color (Red, Green, Yellow): ");
    scanf("%s", current_color);

    // Convert input to lowercase for easier comparison
    for (int i = 0; current_color[i]; i++) {
        current_color[i] = tolower(current_color[i]);
    }

    printf("Next traffic light color: ");

    // Determine next color based on the current color
    switch (current_color[0]) {
        case 'r':
            printf("Green\n");
            break;
        case 'g':
            printf("Yellow\n");
            break;
        case 'y':
            printf("Red\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
