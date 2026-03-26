    #include<stdio.h>
    #include<unistd.h>
    #include<stdlib.h>

    int main()
    {
        
        FILE *fp = NULL;
        char buffer[256];

        fp = fopen("/proc/meminfo","r");

        if(fp == NULL)
        {
            printf("Unable to open file \n");
            return -1;
        }

        printf("--------------------------------------------------------------------------------------");
        printf("-----------------------------Marvellous Memmory Scanner-------------------------------");
        printf("--------------------------------------------------------------------------------------");

        while(fgets(buffer,sizeof(buffer),fp) != NULL)
        {
            printf("%s \b",buffer);
        }

         printf("--------------------------------------------------------------------------------------");

         

        return 0;
    }