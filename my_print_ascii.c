void print_char(char i);

void my_print_ascii(void) {
    int i;
    for (i = 33; i < 126; i++)
    {
        print_char((char)i);
    }
}