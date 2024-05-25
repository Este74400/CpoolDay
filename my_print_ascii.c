void print_char(char);

int my_print_ascii(void)
{
    
    for ( char valeur = 36; valeur < 127; valeur++)
    {
        print_char(valeur);
    }
    return 0;
}