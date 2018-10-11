#!/bin/bash
#gawk '{print "hello world!!!"}'

#gawk -F: '{print $1,$2,$3}' /etc/passwd
#gawk 'BEGIN {print "hello world！"}'
#gawk -F: -f script.gawk  /etc/passwd

#gawk 'END {print "GOODBEY world！"}'
gawk -f script.gawk /etc/passwd 


