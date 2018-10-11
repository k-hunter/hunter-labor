#!/bin/bash
#function output() {

#echo -e "that s a good question!\n"
#echo -e "that s a good question!\n"
#echo -e "that s a good question!\n"
#echo -e "that s a good question!\n"
#echo -e "that s a good question!\n"
#}

#show_process_bar(){

#for (( i = 1; i <= 100; i++ )) do 
    #echo -n "$i ";
    #sleep 0.1;
#done 




#}

#show_bar(){

#while [ true ]; do
#sleep 0.01
#echo -n "|"
#done
#}


#show_process_bar
#show_bar

#output > out.txt
#echo -e "------we cat out.txt --------\n"
#cat out.txt


#starttime=$(date +%s)
#for ((i=0;i<10;i++));do
        #{
                #sleep 0.1;echo 1>>aa && endtime=$(date +%s) && echo "我是$i,运行了3秒,整个脚本执行了$(expr $endtime - $starttime)秒"
        #}
#done
#cat aa|wc -l
#rm aa

#starttime=$(date +%s)
#for ((i=0;i<5;i++));do
        #{
                #sleep 3;echo 1>>aa && endtime=$(date +%s) && echo "我是$i,运行了3秒,整个脚本执行了$(expr $endtime - $starttime)秒"
        #}&
#done
#wait
#cat aa|wc -l
#rm aa

#function a_sub {
        #sleep 3;
        #echo 1>>aa && endtime=$(date +%s) && echo "我是$i,运行了3秒,整个脚本执行
#了$(expr $endtime - $starttime)秒" && echo
#}
#starttime=$(date +%s)
#export starttime
#tmp_fifofile="/tmp/$.fifo"
#echo $tmp_fifofile
#mkfifo $tmp_fifofile
#exec 6<>$tmp_fifofile
#rm $tmp_fifofile
#thread=3
#for ((i=0;i<$thread;i++));
#do
#echo
#done >&6
#for ((i=0;i<10;i++))
#do
#read -u6
#{
#a_sub || {echo "a_sub is failed"}
#echo >&6
#} &
#done
#wait
#exec 6>&-
#wc -l aa
#rm -f aa
#exit 0


echo $(basename $var)

#start_time=`date +%s`              #定义脚本运行的开始时间
#[ -e /tmp/fd1 ] || mkfifo /tmp/fd1 #创建有名管道
#exec 3<>/tmp/fd1                   #创建文件描述符，以可读（<）可写（>）的方式关联管道文件，这时候文件描述符3就有了有名管道文件的所有特性
#rm -rf /tmp/fd1                    #关联后的文件描述符拥有管道文件的所有特性,所以这时候管道文件可以删除，我们留下文件描述符来用就可以了
#for ((i=1;i<=10;i++))
#do
        #echo >&3                   #&3代表引用文件描述符3，这条命令代表往管道里面放入了一个"令牌"
#done
 
#for ((i=1;i<=1000;i++))
#do
#read -u3                           #代表从管道中读取一个令牌
#{
        #sleep 1  #sleep 1用来模仿执行一条命令需要花费的时间（可以用真实命令来代替）
        #echo 'success'$i       
        #echo >&3                   #代表我这一次命令执行到最后，把令牌放回管道
#}&
#done
#wait
 
#stop_time=`date +%s`  #定义脚本运行的结束时间
 
#echo "TIME:`expr $stop_time - $start_time`"
#exec 3<&-                       #关闭文件描述符的读
#exec 3>&-                       #关闭文件描述符的写
