void lcm()
{
int n1, n2, min;
    printf("Enter 1st positive integer : ");
    scanf("%d", &n1);
    printf("Enter 2nd positive integer : ");
    scanf("%d", &n2);
    // maximum number between n1 and n2 is stored in min
    min = (n1 > n2) ? n1 : n2;

    while (1) {
        if (min % n1 == 0 && min % n2 == 0) {
            printf("\n\nThe LCM of %d and %d is %d.\n\n", n1, n2, min);
            break;
        }
        ++min;
    }
}
