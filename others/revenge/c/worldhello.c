#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
int main()
{
    int fd;
    char buf1[13]={"hello world!"};
    char buf2[12];
    int num;
    fd = open( "f1",O_RDWR| O_CREAT | O_TRUNC, 0644);
    if(fd==-1)
    {
        perror("f1 not open");
        exit(1);
    }
    num=write(fd,buf1,sizeof(buf1)-1);
    if(num!=(sizeof(buf1)-1))
        printf("write less than want\n");
    lseek(fd,0,SEEK_SET);
    num=read(fd,buf2,12);
    if(num!=12)
        printf("read less than 12\n");
    write(1,buf2,12);
    close(fd);
}
