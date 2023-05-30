//2502141990
//Muhammad Faza
//Compiler - Dev C++
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char vok[]= {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
  //har VOK[]= {'A', 'I'}
  char kata[99];
  
  while(1){
    int count = 0;
    printf("Input kata (exit press 1): ");
    scanf("%[^\n]", kata); getchar();
    
    if(kata[0] == '1'){
      return 0;
    }
    
    for(int i = 0; i < strlen(kata); i++){
      for(int j = 0; j < strlen(vok); j++){
        if(kata[i] == vok[j]){
        //if(kata[i] == vok[j]){
          count++;
        }
      }
    }
    
    printf("\nJumlah vokal = %d", count);
    printf("\nJumlah konsonan = %d", strlen(kata) - count);
    getchar(); system("cls");
  }
}
