#include<stdio.h>
#include<string.h>

int main(){
    const char s1[] = "Hello this is a string";
    const char s2[] = "So is this";
    char scpy[20];

    printf("copying\n");
    strcpy(scpy,s2);
    printf("the string scpy is: %s\n",scpy);

    printf("concatenating\n");
   const char* asddda = strcat(s1,s2);
    // printf("s1+s2: %s\n",asddda);
    printf("s1+s2: %s\n",s1);


    printf("length\n");
    int l = strlen(s1);
    printf("s1 is %d characters long\n",l);
    printf("comparing\n");
    int a = strcmp(s1,s2);
    printf("%d",a);
}