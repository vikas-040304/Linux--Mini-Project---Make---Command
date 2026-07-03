#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char line[100];
    char target[50];
    int execute = 0;

    if (argc == 1)
        strcpy(target, "all");
    else
        strcpy(target, argv[1]);

    fp = fopen("Makefile", "r");

    if (fp == NULL)
    {
        printf("Makefile not found!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp))
    {
        /* Target line */
        if (line[0] != '\t' && line[0] != ' ')
        {
            char current[50];
            sscanf(line, "%[^:]", current);

            if (strcmp(current, target) == 0)
                execute = 1;
            else
                execute = 0;
        }
        /* Command line */
        else if (execute)
        {
            char *cmd = line;

            /* Skip spaces or tabs */
            while (*cmd == ' ' || *cmd == '\t')
                cmd++;

            printf("Executing: %s", cmd);
            system(cmd);
        }
    }

    fclose(fp);

    return 0;
}