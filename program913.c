    #include<stdio.h>
    #include<unistd.h>
    #include<stdlib.h>
    #include<string.h>

    void GetSectionType(char *details,char *perms,char *section)
    {
        if(strcmp(details,"[heap]")==0)
        {
            strcpy(section,"HEAP");
        }
        else if(strcmp(details,"[stack]")==0)
        {
            strcpy(section,"STACK");
        }
        else if(strcmp(details,"[vdso]")==0)
        {
            strcpy(section,"VDSO");
        }
        else if(strcmp(details,"[VVAR]")==0)
        {
            strcpy(section,"VVAR");
        }
        else if(perms[2]==0)
        {
            strcpy(section,"TEXT");
        }
        else if(perms[2]=='w')
        {
            strcpy(section,"DATA");
        }
    }
    void ShowMemoryLayout(int pid)
    {
        FILE *fp = NULL;
        char line[80];
        char filename[100];

        sprintf(filename,"/proc/%d/maps",pid);
        printf("Accessing the file : %s\n",filename);

        fp = fopen(filename,"r");

        if(fp == NULL)
        {
            printf("Unable to Access System file\n");
            return;
        }

        printf("----------------------------------------------------------------------\n");
        printf("--------------------------Memory Layout-------------------------------");
        printf("----------------------------------------------------------------------\n");

        printf("---header----\n");

        while(fgets(line,sizeof(line),fp) != NULL)
        {
            char address[100],perms[10],offset[20],dev[20],details[300] = NULL;

            unsigned long inode;
            unsigned long start,end;
            unsigned long sizekb;

            unsigned section[50];

            int ret = 0;

            ret = sscanf(line,"%s %s %s %s %lu %[^\n]",address,perms,offset,dev,&inode,details);

            if(ret >= 5)
            {
                sscanf(address,"%lx-%lx",&start,&end);

                sizekb = (end -start) / 1024;

                GetSectionType(details,perms,section);

                if(strlen(details) == 0)
                {
                    strcpy(details,"Anonymous");
                }

                printf("%lx %lx %lu %s %s %s \n",start,end,sizekb,perms,details);

            }
        }

        
    }

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
        ShowMemoryLayout(pid);

        return 0;
    }

    /*

    Text /Code  Binary Instructon
    Data        Global Variables
    Stack       Local Variables
    VDSO        Virtual Dynamic Shared Object
    VVAR        Virtual Variable
    VSYSCALL    Virtual System Call Page
    Other       Other Memory Regions

    */