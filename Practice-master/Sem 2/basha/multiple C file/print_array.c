void print_int_array( int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void print_char_array( char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c\t",arr[i]);
    }
    printf("\n");
}

void print_string_array( char arr[][20], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s\t",arr[i]);
    }
    printf("\n");
}