#include <stdio.h> 
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include<sys/wait.h>
 
int main(void) {
    

    if(fork() == 0){
        write(STDOUT_FILENO, "Hello ", 6);
    }else{
        wait(NULL);
        if(fork() == 0){
            write(STDOUT_FILENO, "my ", 3);
        }else{
            wait(NULL);
            write(STDOUT_FILENO, "friends\n", 8);
        }
    }

    return 0;
}