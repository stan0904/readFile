#include <stdio.h>

int main(){
    FILE *filePointer;
    char content[100];
    
    filePointer = fopen("example.txt", "r");
    
    if (filePointer == NULL){
        printf("Error opening file");
        return 1;
    }
    
    while(fgets(content, sizeof(content), filePointer) != NULL) {
        printf("s", content);
    }
    
    fclose(filePointer);
    
    return 0;
}