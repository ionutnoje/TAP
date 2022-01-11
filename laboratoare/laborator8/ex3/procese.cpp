#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *functie_thread(void *arg) 
{ 
	pid_t thread_id = gettid();
	int thread_pid = getpid();  
	char informatii = "id_thread %d" + thread_id + " pid_thread %d\n" + thread_pid;  

	write(filedes[1], informatii);
} 




int main(int argv, char* argc[])
{   
    int nr_fire = atoi(argc[1]);
    

    char buffer_citire[512];
    char buffer_scriere[512];
    int fd[2]; //descriptorii pentru pipe
    //fd[0] - read
    //fd[1] - write

    pthread_t thread_id;

    if(pipe(fd) == -1)
    {
        printf("eroare la pipe");
        return 1;
    }

    int id = fork();
    if(id == -1)
    {
        printf("eroare la fork\n");
    }
    else if (id == 0)// suntem in copil
    {

        for(int i = 0; i < nr_fire; i++)
        {
            pthread_create(&thread_id, NULL, functie_thread, NULL); 
			pthread_join(thread_id, NULL);

            if(p > 0)
            {
                read(fd[0], buffer_citire, 512);
                printf("%s\n", buffer_citire);
            }
            else if(p == 0)
            {
                buffer_scriere = getpid();
                write(fd[1], buffer_scriere, 512);
            }
        }

    }
    if(id > 0) //proces parinte
		{
				printf("%s\n", buffer_citire);
		}
    

    return 0;
}


