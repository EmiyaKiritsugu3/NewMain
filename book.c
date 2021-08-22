#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BOOKS 50


typedef struct{
  char tittle[81];
  char author[81];
  int isbn;
  int active;
}Book;


Book book[MAX_BOOKS];

void bookFill(Book* livro){
  
  int op;
  livro = (Book*)malloc(sizeof(Book));
  do{
    system("cls||clear");
    printf("%s", "Tittle: ");
    //fgets(tittle, sizeof(tittle), stdin);
    fgets(livro->tittle, sizeof(livro->tittle), stdin);
    printf("%s", "Author: ");
    fgets(livro->author, sizeof(livro->author), stdin); 
    printf("%s", "ISBN: ");
    scanf("%d", &livro->isbn); 
    for(int i = 0; i < MAX_BOOKS; i++){
      if(book[i].active == 0){
        strcpy(book[i].tittle, livro->tittle);
        strcpy(book[i].author, livro->author);
        book[i].isbn = livro->isbn;
        book[i].active = 1;
        break;
      }
    }
    printf("%s", "\n1 - continue\n0 - exit: ");
    scanf("%d", &op);
    getchar();
  }while(op != 0);
  free(livro);
  system("cls||clear");
}

void bookView(){
  system("cls||clear");
  puts("Books List");
  for(int i = 0; i < MAX_BOOKS; i++){
    if(book[i].active == 1){
      printf("\nRegister: %d\n\n", i + 1);
      printf("Tittle: %s", book[i].tittle);
      printf("Author: %s", book[i].author);
      printf("ISBN: %d\n", book[i].isbn);
    }
  }
  printf("%s", "\nPress any keyword for contiue: ");
  getc(stdin); //Usuario precisa precionar alguma tecla para continuar
  //system("cls||clear");
}

void bookDelete(){
  int index;
  bookView();
  printf("%s", "\nDigite o registro do livro a ser excluido: ");
  scanf("%d", &index);
  if(book[index - 1].active == 1){
    --index;
    book[index].active = 0;
    puts("\nLivro deletado");
  }else{
    puts("Livro não encontrado");
  }
  getc(stdin);
  getchar();
  system("cls||clear");
}