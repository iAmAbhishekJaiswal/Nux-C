void table()
{
int n,l;
printf (" Enter a number to find table : ");
scanf("%d",&n);
printf( " Enter length of table(ex:10) : ");
scanf("%d", &l);

puts("\n");

for(register int i=1;i<=l;i++)
printf(" %d x %d = %d\n",n,i,n*i);

puts("\n");
}

