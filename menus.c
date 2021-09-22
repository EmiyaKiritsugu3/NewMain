#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"
#include "people.h"
#include "menus.h"

const char * header(){
  return
    "Generic Project to Prove C Language Programing Skill\nDeveloped by @inamarjunior - June, 2021"
    "\n\nChoose a option entering the corresponding number:\n\a"; // "\a" == makes a sound 
}

/*const char * messageError(){
  return 
  "Generic Project to Prove C Language Programing Skill\nDeveloped by @inamarjunior - June, 2021"
  "\n\nPlease, enter a valid option!\n";
}*/

void mainMenu(){
  int op;
  system("cls||clear");
  
  do{
    printf("%s", header());
    puts("\n1 - Books\n2 - People\n3 - Report\n0 - Exit");
    scanf("%d", &op);
    switch(op){
      case 1:
        bookMenu();
        break;
      case 2:
        peopleMenu();
        break;
      case 3:
        report();
      case 0:
        system("cls||clear");
        break;
    }
  }while(op != 0);
}

void bookMenu(){
  int op;  
  
  do{
    system("cls||clear");
    printf("%s", header());
    puts("\n1 - Register\n2 - View Library\n3 - Delete\n0 - Return");
    scanf("%d", &op);
    getchar();
    switch(op){
      case 1:
        bookFill();
        break;
      case 2:
        bookView();
        break;
      case 3:
        bookDelete();
        break;
      case 0:
        system("cls||clear");
        break;
    }
  }while(op != 0);
}

void peopleMenu(){
  int op;
  do{
    system("cls||clear");
    printf("%s", header());
    puts("\n1 - Register\n2 - View People\n3 - Delete\n0 - Return");
    scanf("%d", &op);
    getchar();
    switch(op){
      case 1:
        peopleFill();
        break;
      case 2:
        peopleView();
        break;
      case 3:
        peopleDelete();
        break;
      case 0:
        break;
    }
  }while(op != 0);
}

void report(){
  int op;  
  
  do{
    system("cls||clear");
    printf("%s", header());
    puts("\n1 - Tittle\n2 - Author\n3 - ISBN\n0 - Return");
    scanf("%d", &op);
    getchar();
    switch(op){
      case 1:
        reportTittle();
        break;
      case 2:
        reportAuthor();
        break;
      case 3:
        reportIsbn();
        break;
      case 0:
        system("cls||clear");
        break;
    }
  }while(op != 0);
}