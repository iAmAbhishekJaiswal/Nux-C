int fact(int n)

{

if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return (n*fact(n-1));
}
}



void factorial()
{
int n;
long double f;
printf("\nEnter number to find factorial : ");
scanf("%d", &n);
f=fact(n);
printf("\n\n Factorial of given number : %.0Lf\n\n",f);
getchar();
}
