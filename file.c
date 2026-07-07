#include <stdio.h>
#include <stdlib.h>


int main(){
    char file_name[100];
    int ch;
    int count=0;
    printf("enter file name or path:");
    scanf("%s", file_name);

    FILE*FP=fopen(file_name,"r");

if(FP==NULL){
    printf("\nfile not found\n");
}
else{
    while((ch=fgetc(FP))!=EOF){
        count=count+1;
    }
    printf("number of characters in the file: %d", count);
}
return 0;
}