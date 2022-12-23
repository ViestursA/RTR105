#include <stdio.h>

int main(void) {
  char a1, a2, a3;
  int i;

  printf("Ievadiet, kādā secībā kārtot burtus (1 - alfabētiskā secība; 2 - pretēji alfabētam):");
  scanf("%d",&i);
  if(i == 1)
    printf("Izvēlētā secība - alfabētiskā secība \n");
  else
    printf("Izvēlētā secība - pretēji alfabētam \n");

  printf("Ievadiet 3 burtus:");
  scanf(" %c %c %c",&a1,&a2,&a3);
  
  if(i==1){
    if(a1<=a2 && a1<=a3){
      if(a2<=a3)
        printf("%c,%c,%c \n",a1,a2,a3);
      else
        printf("%c,%c,%c \n",a1,a3,a2);
    }
    else{
      if(a2<=a1 && a2<=a3){
        if(a1<=a3)
          printf("%c,%c,%c \n",a2,a1,a3);
        else
          printf("%c,%c,%c \n",a2,a3,a1);
      }
      else{
        if(a3<=a1 && a3<=a2){
          if(a1<=a2)
            printf("%c,%c,%c \n",a3,a1,a2);
          else
            printf("%c,%c,%c \n",a3,a2,a1);
        }    
      }
    }
  }
 
    if(i==2){
    if(a1>=a2 && a1>=a3){
      if(a2>=a3)
        printf("%c,%c,%c \n",a1,a2,a3);
      else
        printf("%c,%c,%c \n",a1,a3,a2);
    }
    else{
      if(a2>=a1 && a2>=a3){
        if(a1>=a3)
          printf("%c,%c,%c \n",a2,a1,a3);
        else
          printf("%c,%c,%c \n",a2,a3,a1);
      }
      else{
        if(a3>=a1 && a3>=a2){
          if(a1>=a2)
            printf("%c,%c,%c \n",a3,a1,a2);
          else
            printf("%c,%c,%c \n",a3,a2,a1);
        }    
      }
    }
  }
  return 0;
}
