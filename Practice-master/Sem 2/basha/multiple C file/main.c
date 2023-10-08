/*        Md. Shaikhul Islam, BSSE-1438        */

#include<stdio.h>
#include"header.h"
// #include"sort.c"
// #include"print_array.c"
// #include"swap.c"

int main()
{
    int arr[] = { 3, 5, 2, 9, 4, 6};
    int size = sizeof(arr)/sizeof(int);

    print_int_array( arr, size );

    printf("Max : %d\n",find_max( arr, size ) );
    printf("Min : %d\n",find_min( arr, size ) );

    ascending_sort( arr, size );
    print_int_array( arr, size );

    descending_sort( arr, size );
    print_int_array( arr, size );

    swap( &arr[2], &arr[4]);
    printf("After swaping : \n");
    print_int_array( arr, size );

    char arr2 [][20] = {"Badhon", "Saimon", "Nahian", "Shakib", "Mustakim", "Yasin"};
    print_string_array( arr2, 6 );

}