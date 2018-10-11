#!/bin/bash
#dialog --title Tesiiiii --msgbox "this is a test" 10 20

#dialog --title Tesiiiii --inputbox "this is a test" 10 20 2>input.txt
#cat input.txt 
#dialog --title Tesiiiii --inputbox "this is a test" 10 20 1>input.txt
#dialog --title Tesiiiii --inputbox "this is a test" 10 20 2>input.txt


#dialog --textbox /etc/passwd 15 45


#dialog --menu "Sys Menu" 20 30 10 1 "NO1" 2 "NO2" 3 "NO3" 4 "Exit" 2>sysme.txt
#cat sysme.txt

#dialog --title "fselect a file" --fselect / 10 50 2>file.txt

temp=$(mktemp -t temp.XXXXXX)
temp2=$(mktemp -t temp2.XXXXXX)

cat /proc/meminfo >$temp 
kdialog --textbox $temp 300 500

#zenity --calendar
zenity --file-selection
#/home/munger/project

