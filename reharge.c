#include <stdio.h>

int main()
{
    int languageChoice, serviceChoice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &languageChoice);

    switch (languageChoice)
    {
    case 1:
        printf("\nPress 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &serviceChoice);

        switch (serviceChoice)
        {
        case 1:
            printf("You have successfully done an Internet Recharge.\n");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done a Special Recharge.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
        break;

    case 2:
        printf("\nInternet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Apna pasandida vikalp chuniye: ");
        scanf("%d", &serviceChoice);

        switch (serviceChoice)
        {
        case 1:
            printf("Aapne Internet Recharge safalta se kiya.\n");
            break;
        case 2:
            printf("Aapne Top-up Recharge safalta se kiya.\n");
            break;
        case 3:
            printf("Aapne Special Recharge safalta se kiya.\n");
            break;
        default:
            printf("Galat chayan! Kripya phir se koshish karein.\n");
        }
        break;

    case 3:
        printf("\nInternet Recharge mate 1 dabaavo\n");
        printf("Top-up Recharge mate 2 dabaavo\n");
        printf("Special Recharge mate 3 dabaavo\n");
        printf("Tamaro vikalp chuno: ");
        scanf("%d", &serviceChoice);

        switch (serviceChoice)
        {
        case 1:
            printf("Tamaro Internet Recharge safal thai gayu chhe.\n");
            break;
        case 2:
            printf("Tamaro Top-up Recharge safal thai gayu chhe.\n");
            break;
        case 3:
            printf("Tamaro Special Recharge safal thai gayu chhe.\n");
            break;
        default:
            printf("Khotu vikalp! Kripya ferthi prayatna karo.\n");
        }
        break;

    default:
        printf("Invalid language choice! Please try again.\n");
    }

    return 0;
}
