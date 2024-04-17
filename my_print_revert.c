void print_char(char i);

void my_print_revert(char *toRevert) {
int encrabe = 0; 

    while (toRevert[encrabe] != '\0') {
    encrabe++;
}

    for (int i = encrabe; i >= 0; i--)
        {      
        print_char(toRevert[i]);
        }
}