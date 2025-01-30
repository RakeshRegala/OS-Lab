#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int pid, pid1, pid2;
    
    pid = fork();  // Corrected the assignment

    if (pid == -1) {
        printf("ERROR IN PROCESS CREATION\n");
        exit(1);  // Ensures the program exits in case of an error
    }

    if (pid != 0) {
        pid1 = getpid();
        printf("\nThe parent process ID is %d\n", pid1);
    } else {
        pid2 = getpid();
        printf("\nThe child process ID is %d\n", pid2);
    }

    return 0;
}
