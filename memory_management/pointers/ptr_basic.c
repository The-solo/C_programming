typedef struct CodeFile {
    int lines;
    int filetype;
} codefile_t;

//Accepts the pointer to the codefile_t
codefile_t change_filetype(codefile_t *f, int new_filetype) {
    codefile_t new_f = *f; //Dereference it in the new_f struct.
    new_f.filetype = new_filetype;
    return new_f;
}

int main(void) {
    return 0;
}


