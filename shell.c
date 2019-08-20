#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
        char *buffer;
        char *argv[2];
        int buf_size = 0;
        int pid, child_p;
        size_t size = 32;

        buffer = malloc((sizeof(char)) * size);

        if( buffer == NULL)
                {
                exit(1);
                }

        printf ("#cisfun$ ");

        argv[0] = buffer, argv[1] = NULL;

        while ((getline(&buffer, &size, stdin)) != EOF)
                {
                        printf("%s", buffer);
                        pid = fork();
                        child_p = pid;
                        if (pid == -1)
                                {
                                perror("./shell");
                                free(buffer);
                                exit(1);
                                }
                        if (pid == 0)
                                {
                                buf_size = strlen(buffer);
				buffer[buf_size - 1] = '\0';
                                if (execve(argv[0], argv, NULL) == -1)
                                        {
                                        perror("./shell");
                                        free(buffer);
                                        }
                                }
                                else
                        wait(&child_p);
                        printf("#cisfun$ ");
                }
                return(0);
}

