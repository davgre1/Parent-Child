#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char **argv)
{
    //Variables
    int ppid, pid, choice;
    time_t now; time(&now);
    
    
    printf("Parent process ID: %d", ppid);
    printf(", Parent's parent ID: %d", pid);
    printf("\nChoose the function to be performed by the child: \n");
    printf("\t(1) Display current date and time\n");
    printf("\t(2) Display the calendar of the current month\n");
    printf("\t(3) List the files in the current directory\n");
    printf("\t(4) Exit from the program\n\n");
    
    printf("Enter your choice: ");
    scanf("%i", &choice);
    
    switch (choice) {
        case 1: printf("%s", ctime(&now)); break;
        case 2: break;
        case 3: break:
        case 4: break;
    }
	return 0;
}
