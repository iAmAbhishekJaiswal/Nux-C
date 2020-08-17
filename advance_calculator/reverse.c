int rev(int num)
{
int re=0,remind;
while(num!=0)
{
remind=num%10;
re=re*10+remind;
num=num/10;
}
return re;
}

void reverse()

{

long int check,result;
printf("\nEnter number to reverse : ");
scanf("%ld",&check);

result=rev(check);
printf("\n\nReversed number : %ld\n\n",result);

getchar();
}

