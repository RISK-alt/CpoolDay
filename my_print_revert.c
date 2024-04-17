void print_char(char i);

void my_print_revert(char *toRevert) {
int lecrabe = 0; 

    while (toRevert[lecrabe] != '\0') ; {
    lecrabe++;
}

    for (int i = lecrabe; i >= 0; i--)
        {      
        print_char(toRevert[i]);
        }
}