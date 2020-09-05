void power()
{
int a,n;
unsigned long int r=1;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter exponent : ");
scanf("%d",&n);
for(register int i=1;i<=n;i++)
{
r *= a;
}


printf(" Result : %ld  \n\n",r);
}
