#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int Ret = 0;
    char Arr[] = "kale construction";

    fd = open("kale.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened with fd : %d\n",fd);

        Ret = write(fd,Arr,10);

        printf("%d bytes gets written into the file\n",Ret);
    }

    close(fd);
    
    return 0;
}
