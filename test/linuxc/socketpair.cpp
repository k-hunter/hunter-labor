#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
int main(int argc,char **argv)
{
    int z;        /* Status return code */
    int s[2];    /* Pair of sockets */
    char *cp;    /* A work pointer */
    char buf[80];    /* work buffer */
    z = socketpair(AF_LOCAL,SOCK_STREAM,0,s);
    if(z == -1)
    {
        printf("creat spcketpair error\n");
        return 1;    /* Failed */
    }
    
    
    z = write(s[1],"Hello?",6);
    if(z<0)
    {
        printf("write error\n");
        return 2;    /* Failed */
    }
    printf("write hello? to s[1]\n");
    z = read(s[0],buf,sizeof buf);
    if(z < 0)
    {
        printf("read error\n");
        return 3;    /* Failed */
    }
    printf("Recevie message '%s' from socket s[0]\n",buf);

    
    z = write(s[0],cp="Go away!",8);
    if(z < 0)
    {
        printf("write error");
        return 4;    /* Failed */
    }
    printf("write Go away! to s[1]\n");
    z = read(s[1],buf,sizeof buf);
    if(z < 0)
    {
        printf("read error\n");
        return 3;    /* Failed */
    }
    buf[z] = 0;    /*NUL terminate */
    printf("Received message '%s' from socket s[1]\n",buf);
    close(s[0]);
    close(s[1]);
    return 0;
}
