#!/bin/bash
pasw=123123
touch test.sh 
echo $0$1 >>test.sh 
echo $pasw|sudo -S ls 
#echo $pasw|sudo ll  
#echo "123123"|sudo -S chmod a+x test.sh 
#sudo  chmod a+x test.sh 
ll test.sh 
cat test.sh 
rm test.sh 

