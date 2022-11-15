#include <stdio.h>
#include <string.h>

int main(){
 char teikums[100];
 char vardi[10][10];

 printf("Ievadiet teikumu: \n");
 fgets(teikums, sizeof(teikums), stdin);

 printf("\nIevadītais teikums:\n");
 puts(teikums);

 printf("Ievadītā teikums garums ir %zu simboli. \n",strlen(teikums));

 for(int i=0; i<50; i++){
    printf("%02d. symbol %c (ASCII code - %d)\n",i+1,teikums[i],teikums[i]);
 }

 return 0;
}

//https://stackoverflow.com/questions/58580702/how-to-count-characters-in-a-string-after-splitting-the-word
