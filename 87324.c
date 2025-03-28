#include <stdio.h>

int main() {
    int pennies, nickels, dimes, quarters;
    float total;
    char response;
    int running = 1;
    
    while (running) {
        printf("How much change do you owe slime?\n");

        printf("Enter the number of pennies bozo: ");
        scanf("%d", &pennies);

        printf("Enter the number of nickels you owe, bozo. You're moving up in this world!: ");
        scanf("%d", &nickels);

        printf("Enter number of dimes you owe, bozo. I hope you have more of these than pennies...: ");
        scanf("%d", &dimes);
        
        printf("Enter the number of quarters you owe, bozo. YOU BETTER have more of these than pennies: ");
        scanf("%d", &quarters);

        total = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25;

        printf("Total amount of money you're losing, lol. Imagine: $%.2f\n", total);
        
        // Clear buffer before getting response
        while (getchar() != '\n');
        
        printf("Want to calculate more change, slime? (y/n): ");
        response = getchar();
        
        if (response == 'y' || response == 'Y') {
            printf("Ugh... Here we go.\n\n");
        } 
        else if (response == 'n' || response == 'N') {
            printf("YEEEEES! Thank you!\n");
            running = 0;
        }
        else {
            printf("I don't understand you slime. Let's just stop, aight?.\n");
            running = 0;
        }
    }
    
    printf("Thanks for using the Change Calculator, bozo!\n");
    
    return 0;
}