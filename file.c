#include <stdio.h>
#include <stdlib.h>


int main(){
    char file_name[100];
    int ch;
    int count=0;
    int count_line=0;
    int count_word=0;
    int in_word=0;
    printf("enter file name or path:");
    scanf("%s", file_name);

    FILE*FP=fopen(file_name,"r");

if(FP==NULL){
    printf("\nfile not found\n");
return 1;
}
else{
    while((ch=fgetc(FP))!=EOF){
        count=count+1;
      if(ch=='\n'){
        count_line=count_line+1;
      }
      if(ch==' '|| ch=='\n' || ch=='\t'){
        in_word=0;
      }else if(in_word==0){
        in_word=1;
        count_word=count_word+1;
      }
    }
}
      
    
    printf("\nnumber of characters in the file: %d", count);
    printf("\nnumber of characters in the file: %d", count_line);
    printf("\nnumber of characters in the file: %d", count_word);

return 0;
}