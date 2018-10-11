#!/bin/bash


#script variables##
phone="18890029780"
SMSrelay_url=http://textabelt.com/text
text_msg="System Code Red"

#send text

curl -s $SMSrelay_url -d \
    number=$phone \
    -d "message=$text_msg"
    #-d "message=$text_msg" > /dev/null
#
exit

#curl -X POST https://textbelt.com/text \
       #--data-urlencode phone='18890029780' \
       #--data-urlencode message='Hello world' \
       #-d key=textbelt
#exit


