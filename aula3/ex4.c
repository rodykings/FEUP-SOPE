#include <stdio.h> 
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include<sys/wait.h>
 
int main(void) {
    

    /*FIRST 
    if(fork() == 0){
        write(STDOUT_FILENO, "Hello ", 6);
    }else{
        wait(NULL);
        write(STDOUT_FILENO, "world", 5);
    }*/

    if(fork() == 0){
        write(STDOUT_FILENO, "World\n", 6);
    }else{
        write(STDOUT_FILENO, "Hello ", 6);
    }

    return 0;
}