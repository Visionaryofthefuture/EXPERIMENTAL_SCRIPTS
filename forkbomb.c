#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){

while(1){
 pid_t pid = fork();
if(pid == -1){
continue;}

printf("%d\n", pid);
wait(NULL);
}
return 0;
}



