#include <stdio.h>

int main() {
    FILE *fp;
    int num, num1, num2;
    char string[20];
    
    fp = fopen("C.txt", "r"); 

    printf("%d", fscanf(fp, "%s", string));

    fclose(fp);

    return 0;
}