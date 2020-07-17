#!/usr/bin/env bash
#created by-Abhishek Jaiswal
instal()
{
which $1 > /dev/null 2>&1
if [ $? == 0 ];
then
echo "$1 is already installed. "
else
read -p "$1 is not installed. Answer yes/no if want installation : " request
if  [ $request == "yes" ];
then
pkg install $1 -y
else
exit 0
fi
fi
}


compil()
{
echo -e "\n\n\e[1;32mcompiling....   \n\n"
echo -e "\noutput: \e[0m\n\n"
clang $1 -o output
./output
rm output
echo -e "\n\n\n"
printf %"$COLUMNS"s | tr " " "-"
}


instal "nano"
instal "clang"
instal "figlet"

clear

figlet -c -t -f  banner Nux-C
echo -e "\e[1;31mCreated by\e[0m : Abhishek Jaiswal "
echo -e "\e[1;31mYoutube \e[0m: Jamshedpur Cyber Technology"
echo -e "\e[1;31mFacebook\e[0m : itsmeaj1"
echo -e "\e[1;31mInstagram\e[0m : itsmeabhi01"
printf %"$COLUMNS"s | tr " " "-"
main()
{
echo -e "\n\n\e[1;32mChoose option (1 for write program) : \n\e[0m"
echo -e " 1. Write a C program "
echo -e " 2. Edit exist C program"
echo -e " 3. Compile and run a C program "
echo -e " 4. List of program "
echo -e " 5. Delete program "
echo -e " 6. Exit"
read choice

case $choice in
1)
read -p "Enter file name (exp- xyz.c) : " file1
nano $file1
echo -e "\n"
read -p  "Do you want to compile? (y-yes or n-No) : " ch2
if [ "$ch2" == "y" ] ; then
compil "$file1"
else
clear
fi
;;

2)read -p "Enter file name to edit : " file3
if [ -f "$file3" ]; then
nano $file3
read -p  "Do you want to compile? (y-yes or n-No) : " ch3
if [ "$ch3" == "y" ] ; then
compil "$file3"
else
clear
fi
else
echo -e " \n\n  \e[1;31mFile not found..\e[0m \n\n"
fi
;;


3)
read -p "Enter file to compile (with extension) : " file2
if [ -f "$file2" ] ; then
compil "$file2"
else
echo -e " \n\n  \e[1;31mFile not found..\e[0m \n\n"
fi
;;

4)
clear
ls
;;

5)read -p "Enter file name to delete : " file4
if [ -f "$file4" ]; then
rm $file4
echo -e "\n\e[1;32m Deleted Sucessfully..\e[0m\n"
else
echo -e " \n\n  \e[1;31mFile not found..\e[0m \n\n"
fi
;;

6)echo -e "\n\n \e[1;31mexiting.......\e[0m\n"
exit 0
;;

*) echo -e "\e[1;31mWrong Input... Try again...\e[0m\n"
;;

esac
main
}
main
