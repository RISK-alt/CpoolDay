void print_char(char i);

void my_print_ascii(void) {
    int i;
    for (i = 1; i < 127; i++)
    {
        print_char((char)i);
    }
}