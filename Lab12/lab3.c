#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[15];
    char surname[20];
    char id[7];
    char dep[10];
};

void search_student(char surnamex[20], char idx[7], FILE *str)
{
    fseek(str, 0, SEEK_END);
    long length = ftell(str);

    struct student data;
    for(long temp = 0L; temp < length; temp += sizeof(struct student))
    {
        fseek(str, temp, SEEK_SET);
        fread(&data, sizeof(struct student), 1, str);

        if(strcmp(data.surname, surnamex) == 0 && strcmp(data.id, idx) == 0)
        {
            printf("FOUND: \n");
            printf("NAME: %s\n", data.name);
            printf("SURNAME: %s\n", data.surname);
            printf("INDEX: %s\n", data.id);
            printf("DEPARTMENT: %s\n\n", data.dep);
            return;
        }
    }
    printf("NOT FOUND\n");
}
int main()
{
    char pass[10];
    int i;
    long temp;
    FILE *base = fopen("database", "ab+");
    struct student data;

    for(i = 0; i < 3 ; i++)
    {
        printf("ENTER PASSWORD: ");
        scanf("%s", pass);
        if(strcmp(pass, "pass"))
            printf("ACCESS DENIED\n");
        else
            break;
    }
    if(i == 3)
        return 1;

    printf("ENTER NAME: ");
    scanf("%s", data.name);
    printf("ENTER SURNAME: ");
    scanf("%s", data.surname);
     printf("ENTER ID: ");
        scanf("%s", data.id);

        printf("ENTER DEPARTMENT: ");
        scanf("%s", data.dep);
        fwrite(&data, sizeof(struct student), 1, base);
        fclose(base);
        base = fopen("database", "rb+");

        fseek(base, 0, SEEK_END);
        long length = ftell(base);
        printf("FILE LENGTH: %d\n", length);

        for(temp = 0L; temp < length; temp += sizeof(struct student))
        {
                fseek(base, temp, SEEK_SET);
                fread(&data, sizeof(struct student), 1, base);
                printf("name: %s\n", data.name);
                printf("surname: %s\n", data.surname);
                printf("id: %s\n", data.id);
                printf("dep: %s\n\n", data.dep);
        }

        printf("SURNAME TO FIND: ");
        scanf("%s", data.surname);
        printf("ID TO FIND: ");
        scanf("%s", data.id);
        search_student(data.surname, data.id, base);
        fclose(base);
        return 0;
}
