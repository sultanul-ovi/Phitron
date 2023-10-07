int main()
{

    int i = 1;
    char ch = 'a';

    while (i <= 26)
    {
        printf("%c\t", ch);
        i++;
        ch = ch+1;
    }

    return 0;
}