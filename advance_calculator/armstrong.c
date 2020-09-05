void armstrong()
{
int num, originalNum, remainder, result = 0;
    printf("Enter a three digit number to check : ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
       remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("\n %d is an Armstrong number.\n\n", num);
    else
        printf("\n %d is not an Armstrong number.\n\n", num);
}
