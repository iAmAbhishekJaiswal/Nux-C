
void palindrome(){

long int check,result;

printf("\nEnter number to check palindrome : ");
scanf("%ld", &check);


if(check==rev(check))
puts("\n\n Yes,Given number is palindrome.\n\n");

else
puts("\n\n No,Given number is not a palindrome.\n\n");
getchar();
}
