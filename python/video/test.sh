#!/bin/bash
for((video_num=1;video_num<=10;video_num++));  
do   
    echo "===========begain=============="
    echo "show the info of this video_num:$video_num";  
    you-get -o test  https://www.bilibili.com/video/av18586085/?p=$video_num
    echo "=============end================"
done 


