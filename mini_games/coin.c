#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int gen()
{
int m,n;
srand(time(0));
n=rand()%2;
if(n==0)
m=0;
else
m=1;
return m;
}

void start()
{
int ch, random_n;
puts("\n");
puts("         Digital Toss        ");
puts("\n ____________________________");
puts("\n Choose Head or Tail ? ");
puts(" 1.Head \n 2.Tail");
scanf("%d",&ch);
if(ch==1)
{
random_n = gen();
if(random_n==1)
{
printf("\033[0;32m");
printf("\n    Head  , Hoorey You won !   \n");
printf("\033[0m");
}

else
{
printf("\033[0;31m");
printf("\n   Tail  , Oops you loss ! \n");
printf("\033[0m");
}
}

else if(ch==2)
{
random_n=gen();
if(random_n==1)
{
printf("\033[0;31m");
puts("\n   Head , Oops you loss ! ");
printf("\033[0m");
}

else
{
printf("\033[0;32m");
puts("\n   Tail , Hoorey you won ! ");
printf("\033[0m");
}
}

else
{
puts(" Wrong Input, Try again ! ");
start();
}

}

int main()
{
int ch1;
do {
system("clear");
start();
puts( "\n\n__________________________________");
puts ("\n\n Do you want to play again?\n 1. Yes\n 2. No");
scanf("%d",&ch1);
}
while(ch1==1);
system("clear");
return 0;
}


