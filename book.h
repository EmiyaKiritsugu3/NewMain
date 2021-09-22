typedef struct book {
  char tittle[81];
  char author[81];
  int isbn;
  int active;
}Book;

void bookFill();
void bookView();
void bookDelete();
void recordBook(Book*);
void reportTittle();
void reportIsbn();
void reportAuthor();