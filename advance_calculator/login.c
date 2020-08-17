#define USER "admin"
#define PASS "admin"
int login()
{
char user[10];
char pass[10];

printf("\tEnter Username : ");
scanf("%s",user);
if(strcmp(user,USER)==0)
{
printf("\tEnter Password : ");
scanf("%s",pass);

if( strcmp(pass,PASS)==0)
{
puts("\n\nLogin Sucessful,Welcome Abhi");
}
else{
puts("\n\n   Wrong password !");
return 1;
}
}
else
{
puts("\n\n\t User not found! \n\t Exiting...");
return 1;
}

return 0;
}
