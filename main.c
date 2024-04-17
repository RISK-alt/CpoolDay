void print_char(char HowMany);

void my_print_n_ascii(int HowMany) {
    for (HowMany = 33; HowMany < 37; HowMany++)
        {
        print_char((char)HowMany);
        }
}
    

int main(void)
{
    my_print_n_ascii(5);
return 0; 
}




// char type name () {}
// print_char(char c);
// print_number(int number);