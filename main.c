//alejandra santos
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

int main()
{
    // printf("Bienvenido al programa\n");
    printf("Process Type       PID       PPID      TIME\n");
    int fork_result;
    fork_result = fork();
    fork_result = fork();
    fork_result = fork();
    if (fork_result >= 1)
    {
        time_t t;
        struct tm *st;
        char *ch;
        time(&t);
        ch = ctime(&t) ;
        printf("System Process      %d      %d     %s\n", getpid(), getppid(), ch);
    }
    else if (fork_result == 0)
    {
        time_t t;
        struct tm *st;
        char *ch;
        time(&t);
        ch = ctime(&t) ;
        printf("System Process      %d      %d     %s\n", getpid(), getppid(), ch);
    }
    else
    {
        printf("error");
    }

    return 0;
}