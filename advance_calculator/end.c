void end()
{

int e=0;

printf("1.Back ,2.Main menu or 3.Exit : ");
scanf("%d",&e);

if(e==1)
{
system("clear");
control();
}

else if (e==2)
{
system("clear");
cn=9;
control();
}
else
puts("\n\n****Thank you for use calculator****\n\n");
}
