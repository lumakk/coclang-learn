        printf("\nDo you want to try again? (y/n): ");
        while(getchar() != '\n');
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the program. Goodbye!");
}