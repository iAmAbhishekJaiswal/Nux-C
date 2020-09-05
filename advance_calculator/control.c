void control()
{

if(cn==9) //default for starting
{
list();
}


switch(opt)
{

case 1:
{
system("clear");
armstrong();
cn=1;
end();
break;
}

case 2:
{
system("clear");
factorial();
cn=1;
end();
break;
}

case 3:
{
system("clear");
fibonacci();
cn=1;
end();
break;
}

case 4:
{
system("clear");
lcm();
cn=1;
end();
break;
}

case 5:
{
system("clear");
palindrome();
cn=1;
end();
break;
}

case 6:
{
system("clear");
power();
cn=1;
end();
break;
}

case 7:
{
system("clear");
prime();
cn=1;
end();
break;
}

case 8:
{
system("clear");
reverse();
cn=1;
end();
break;
}

case 9:
{
system("clear");
quadric();
cn=1;
end();
break;
}

case 10:
{
system("clear");
table();
cn=1;
end();
break;
}

case 11:
{
puts("\n\n******Thank you for using Calculator*******\n\n");
break;
}

default:
{
printf("\n\nPlease enter right option.\n\n");
end();
break;
}

}
}

