#!/bin/bash

#file=$1
#echo "input:$1"

#if [ -e $1 ];then
    #chmod a-x $1
#else
    #echo "there is no file $file exist"
#fi 

#if [ -x $1 ];then
    ##echo $?
    #echo "the return value is :$? ]} "
#else
    #echo "an awful code!"
    #echo "the return value is:"$?
#fi



#if [ -d $1 ]||[ -f $2 ];then 
    #echo "dir $1 exists ,or flie $2 exists"
#else
    #echo "$1,$2 not exist"
#fi



#####################case#########################
#echo "input :"$1
#case $1 in
    #1 | 2) echo "im 1 or 2";;
    #3) echo "im 3";;
    #*) echo "im >3  ";;
#esac

###################for#############################

#for yaha in 1 2 3 4 5 6 7 8 9 10
#do
    #echo "the variable now is :$yaha"
#done

#list="11 22 33 44 55 66 77 88 99"
#list=$list" 1010"
#for num in $list
#do
    #touch flie$num
    #echo "the num now is :$num"
#done





#for (( i=1,j=100;i<=100;i++ ,j--))
#do
    #((sum = $i+$j ))
    #echo "the number now is : $i + $j=$sum"|more
#done





#var1=10
##while echo "after while: $var1" 
#until echo "after while: $var1" 
    #[ $var1 -eq 0 ]
#do
    #echo "inside do :$var1"
    #var1=$[ $var1 - 1 ]
#done




#for (( a=0;a<=5;a++ ))
#do
    #echo "outside-for loop:a= $a "
    #for (( b=0;b<=2;b++ ))
    #do
        #echo "inside-for loop:b= $b"
    #done
#done
passwd=123123
echo $passwd|sudo -S ls 
#read -s -p $passwd|sudo -S ls 
echo "input 123123 test "
read -p "enter your passwdd:" psd
echo "the input is :$psd"
