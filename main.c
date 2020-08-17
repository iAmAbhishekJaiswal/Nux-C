#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int cn=9,opt;
void end();
void control();


#include "login.c"
#include "factorial.c"
#include "reverse.c"
#include "palindrome.c"
#include "prime.c"
#include "quadric.c"
#include "list.c"
#include "end.c"
#include "control.c"



int main()
{

system("clear");
if(login()==1) //wrong user name pass return 1
goto last;//program end


printf("\n\nDate : %s\n",__DATE__);

control();


last:
return 0;
}



