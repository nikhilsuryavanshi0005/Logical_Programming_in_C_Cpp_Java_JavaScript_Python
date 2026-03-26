    #include<stdio.h>
    #include<unistd.h>
    #include<stdlib.h>
    #include<string.h>

    void ShowProcessInformation(int pid)
    {
        FILE *fp = NULL;
        char line[80];
        char filename[100];

        sprintf(filename,"/proc/%d/status",pid);
        printf("Accessing the file : %s\n",filename);

        fp = fopen(filename,"r");

        if(fp == NULL)
        {
            printf("Unable to Access System file\n");
            return;
        }

        printf("----------------------------------------------------------------------\n");
        printf("----------------------Process Information-----------------------------");
        printf("----------------------------------------------------------------------\n");

        while(fgets(line,sizeof(line),fp) != NULL)
        {
            if(strncmp(line,"Name:",5)==0 || strncmp(line,"PID:",4)==0 || strncmp(line,"State:",6) == 0||strncmp(line,"Threads:",8)==0)
            {
                printf("%s\n",line);

            }
           
        }
    }

    int main()
    {
        
        int pid = 0;

        printf("Enter the PID of Process that you want to inspect : \n");
        scanf("%d",&pid);


        if(pid <= 0)
        {
            printf("Invalid PID\n");
            return -1;
        }

        ShowProcessInformation(pid);

        return 0;
    }