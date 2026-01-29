////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion...
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<string>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  User - Defined Macros...
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Maximum File file size that we allow in the project
#define MAXFILESIZE 50

//Maximum  number of File that we open in the project
#define MAXOPENFILES 20

//Maximum Nodes in the project
#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define ENDE 2

#define EXECUTE_SUCCESS 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  User - Defined Structures...
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock
//  Description : Holds the Information to Boot the OS
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock
//  Description : Holds the information about the File System...
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    Inode
//  Description : Holds the Information about File.....
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)

struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int ReferenceCount;
    int Permission;
    char *Buffer;

    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    FileTable
//  Description : Holds the Information about Opened File....
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef FileTable FILETABLE;
typedef FileTable* PFILETABLE;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    UAREA
//  Description : Holds the Information about  process File....
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Global Variables or objects used in the project
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
UAREA uareaobj;

PINODE head = NULL;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InitailiseUAREA
//  Description   : it is used to initialise UAREA members
//  Author        : Nikhil Shankar Suryavanshi
//  Date          : 13/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;
    for(i= 0; i < MAXOPENFILES;i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("CVFS : UAREA gets Initialised Successfully\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InitalizeSuperBlock
//  Description   : it is used to initialise super block members
//  Author        : Nikhil Shankar Suryavanshi
//  Date          : 13/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("CVFS :Super block get Initialised Successfully\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CreateDILB
//  Description  : it is used to create linkedlist of Inodes
//  Author       : Nikhil Shankar Suryavanshi
//  Date         : 13/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    for(i=1;i <=MAXINODE;i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        strcpy(newn->FileName,"\0");
        newn->InodeNumber =i;
        newn->FileSize =0;
        newn->ActualFileSize = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)        // LL is Empty
        {
            head = newn;
            temp = head;
        }
        else                    // LL contains atleast one node
        {
            temp->next = newn;
            temp = temp->next;

        }
    }

    printf("CVFS :DILB gets Created Successfully\n");
    
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StartAuxillaryDataInitialisation
//  Description  : It is Used to call all such function which are used to initialise auxillary data
//  Author       : Nikhil Shankar Suryavanshi
//  Date         : 13/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting process of CVFS is done");

    printf("%s\n",bootobj.Information);

    InitialiseSuperBlock();

    CreateDILB();

    InitialiseUAREA();

    printf("CVFS :Auxillary Data Initialised Successfully\n");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayHelp
//  Description  : It is Used to Display the help page
//  Author       : Nikhil Shankar Suryavanshi
//  Date         : 14/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
void DisplayHelp()
{
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("---------------------------------------------------------------------------        CVFS Help Page          -------------------------------------------------------------------------------------------------------\n");

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    printf("man     : It is used to Display Maneual Page\n");
    printf("clear   : It is used to Clear the Terminal\n");
    printf("creat   : It is used to Create New File\n");
    printf("write   : It is used to Write the Data into the File\n");
    printf("read    : It is used to Read the File\n");
    printf("ls      : It is used to Show the Current Directory\n");
    printf("stat    : It is used to Display Statistical Information\n");
    printf("unlink  : It is used to Terminate CVFS\n");
    printf("exit    : It is used to  Terminate CVFS\n");

    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("--------------------------------------------------------------------------        CVFS Help Page          -------------------------------------------------------------------------------------------------------\n");

    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ManPageDisplay
//  Description  : It is Used to Display the Manpage
//  Author       : Nikhil Shankar Suryavanshi
//  Date         : 14/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
void ManPageDisplay(char Name[])
{
    if(strcmp("ls",Name)==0)
    {
        printf("About        : It is Used to List the Name of all Files\n");
        printf("Usage        : ls\n");

    }
    else if(strcmp("man",Name)==0)
    {
        printf("About        : It is Used to Display Manual Page\n");
        printf("Usage        : man command_name\n");
        printf("command_name : It is the name of command\n");
    }
    else if(strcmp("exit",Name)==0)
    {
        printf("About        : It is Used to Terminate the Shell\n");
        printf("Usage        : ls\n");
    }
    else
    {
        printf("No Manual Entry for %s\n",Name);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the Project
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};
    int iCount = 0;

    StartAuxillaryDataInitialisation();

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("---------------------------------------------------------------------------   CVFS Started Successfully   --------------------------------------------------------------------------------------------------------\n");

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // Infinite listining shell
    while(1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\nCVFS : > ");
        fgets(str,sizeof(str),stdin); 
        
        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);

        fflush(stdin);

        if(iCount == 1)
        {
            if(strcmp("exit",Command[0]) == 0)
            {
                printf("Thank You For Using CVFS\n");
                printf("Deallocating all the Resources\n");

                break;
            }
            else if(strcmp("ls",Command[0])==0)
            {
                printf("Inside ls\n");
            }
            else if(strcmp("help",Command[0])==0)
            {
                DisplayHelp();
            }
            
        }// end of else if 1
        else if(iCount == 2)
        {
            if(strcmp("man",Command[0])==0)
            {
                ManPageDisplay(Command[1]);
            }
        }// end of else if 2
        else if(iCount == 3)
        {

        }//end of else if 3
        else if(iCount == 4)
        {

        }//End of else if 4
        else
        {
            printf("Command not found\n");
            printf("Please refer help option to get more information\n");
        }// End of else
    }// End of while


    return 0;
}// End of main