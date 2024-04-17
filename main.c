void print_char(char i);

void my_print_n_ascii(int HowMany) {
    
    for (int i = 33; i < 33 + HowMany; i++)
        {      
        print_char((char)i);
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