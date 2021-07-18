#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PEOPLE 50 

struct People{
  char name[81];
  int cpf;
  int active;
};
struct People people[MAX_PEOPLE];

void peopleFill(){
  char name[81];
  int cpf;
  int op;

  do{
    system("cls||clear");
    printf("%s", "Name: ");
    fgets(name, sizeof(name), stdin);
    printf("%s", "CPF: ");
    scanf("%d", &cpf);
    for(int i = 0; i < MAX_PEOPLE; i++){
      if(people[i].active == 0){
        strcpy(people[i].name, name);
        people[i].cpf = cpf;
        people[i].active = 1;
        break;
      }
    }
    printf("%s", "\n1 - continue\n0 - exit: ");
    scanf("%d", &op);
    getchar();
  }while(op != 0);
}

void peopleView(){
  system("cls||clear");
  puts("People's List");
  for(int i = 0; i < MAX_PEOPLE; i++){
    if(people[i].active == 1){
      printf("\nRegister: %d\n\n", i + 1);
      printf("Name: %s", people[i].name);
      printf("CPF: %d\n", people[i].cpf);
    }
  }
  puts("\nPress any button for continue: ");
  getc(stdin);
}

void peopleDelete(){
  int index;
  peopleView();
  puts("Digite o registro da pessoa a ser excluida: ");
  scanf("%d", &index);
  if(people[index - 1].active == 1){
    --index;
    people[index].active = 0;
    puts("Excluido com Sucesso");
  }else{
    puts("Registro não encontrado");
  }
  getc(stdin);
  getchar();
}