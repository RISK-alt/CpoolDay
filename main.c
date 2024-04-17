void print_char(char i);

void my_print_ascii(void) {
    int i;
    for (i = 1; i < 127; i++)
    {
        print_char((char)i);
    }
}



int main(void)
{
    my_print_ascii();
return 0; 
}




// char type name () {}
// print_char(char c);
// print_number(int number);

