#include <stdio.h>
#include <string.h>

int main(){
 char teikums[100];
 char vardi[10][10];
 int j ,cnt;

 printf("Ievadiet teikumu: \n");
 fgets(teikums, sizeof(teikums), stdin);

 printf("\nIevadītais teikums:\n");
 puts(teikums);

 printf("Ievadītā teikums garums ir %zu simboli. \n",strlen(teikums));

 j = 0;
 cnt = 0;

 for(int i=0; i<=(strlen(teikums)); i++){
    printf("%02d. symbol %c (ASCII code - %d)\n",i+1,teikums[i],teikums[i]);
    if(teikums[i]== ' ' || str[1]=='\0'){
      splitStrings[cnt][j]='\0';
      cnt++;
      j=0;
     }
    else {
      splitStrings[cnt][j]=teikums[i];
      j++;
     }

    if((teikums[i]>){
      
     }
 }
 
 return 0;
}

//https://stackoverflow.com/questions/58580702/how-to-count-characters-in-a-string-after-splitting-the-word
