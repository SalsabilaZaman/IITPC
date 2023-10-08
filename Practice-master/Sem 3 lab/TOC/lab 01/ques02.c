#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int count = 0, k = 1,total;
char num[50];


void printStr( int d , int i );
void printStrStore( char number[][k+1], int d , int i );

void isPalindrome( char *str );

int length_count( char *str );


int main()
{
    int i, j;
    printf("Enter the length : ");
    scanf("%d", &k);
    total = (int)pow(2,k) ;
    printf("%d\n",total);
    printStr( k, 0 );
    // char number[total][k+1];
    // for (i = 0; i < total; i++)
    // {
    //     for (j = 0; j < k; j++)
    //     {
    //         number[i][j] = '0';
    //     }
    //     number[i][j] = '\0';
    //     //printf("%s\n",number[i]);
    // }
    
    //printStrStore( number, k, 0 );


    // char string[100];
    // printf("Enter the palindrome checking string :");
    // gets(string);
    // isPalindrome(string);

}

void isPalindrome( char *str )
{
    int length = length_count(str), check = 1 ;
    for (int i = 0, j = length-1 ; i < length/2 ; i++, j-- )
    {
        if ( str[i] != str[j] )
        {
            check = 0 ;
            break;
        }
    }

    if ( check )
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}

int length_count( char *str )
{
    int length = 0 ;
    while ( str[length] != '\0' )
    {
        length ++ ;
    }
    return length ;
}

void printStr( int d , int i )
{
    if ( d == i )
    {
        printf("%s - %d\n", num, count );
        count ++ ;
        return ;
    }
    else 
    {
        num[i] = '0';
        printStr( d, i+1 );

        num[i] = '1';
        printStr( d, i+1 );
    }    
}

void printStrStore( char number[][k+1], int d , int i )
{
    if ( d == i )
    {
        number[count][i] = '\0';
        printf("%s\n", number[count]);
        count++ ;
        return ;
    }
    else
    {
        number[count][i] = '0';
        printStrStore( number, d, i+1 );

        number[count][i] = '1';
        printStrStore( number, d, i+1 );
    }
}