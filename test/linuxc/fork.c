#include <stdio.h>
#include <unistd.h>  
/*#include <stdio.h>   */
int main ()   
{   
    pid_t fpid; //fpid表示fork函数返回的值  
    char* flag="before fork\n"; 
    int count=100;
    fpid=fork();   
    if (fpid < 0)   
        printf("error in fork!\n");   
    else if (fpid == 0) {  
        printf("i am the child process, my process id is %d\n",getpid());   
        printf("i am the child process, my parent process id is %d\n",getppid());   
        /*printf("我是爹的儿子\n");//对某些人来说中文看着更直白。  */
        printf("the child process return zero:%d\n",fpid);
        flag="################after fork.im child\n";
        count++;  
    }  
    else {  
        printf("i am the parent process, my process id is %d\n",getpid());  //return 2 time? 
        /*printf("我是孩子他爹\n"); */
        printf("parent process return id of child process:%d\n",fpid);
        flag="######################after fork.im parent\n";
        count++;  
    }  
    printf("独立的count值，两次: %d\n",count); //为什么执行2次？？？ 
    printf(flag);
    return 0;  
} 
