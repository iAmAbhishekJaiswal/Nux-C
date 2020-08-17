int isPrime(int num)
{
int i,r;
for(i=2;i<num&&r!=0;i++)
{
r=num%i;
}
return r;
}

void prime()
{
int r1,num1;
printf("\n Enter a number : ");
scanf("%d", &num1);
r1=isPrime(num1);
if(r1!=0)
puts("\n\n Yes,It is a prime number.\n\n");
else
puts("\n\n No,It is not a prime number.\n\n");
getchar();
}
