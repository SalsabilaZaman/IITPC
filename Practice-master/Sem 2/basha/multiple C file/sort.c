#include"swap.c"

void ascending_sort(int *list, int size)
{
    for( int i=0 ; i<size ; i++ )
    {
        for( int j=1 ; j<size ; j++ )
        {
            if( list[j] < list[j-1] )
            {
                swap( &list[j], &list[j-1]);
            }
        }
    }
}

void descending_sort(int *list, int size)
{
    for( int i=0 ; i<size ; i++ )
    {
        for( int j=1 ; j<size ; j++ )
        {
            if( list[j] > list[j-1] )
            {
                swap( &list[j], &list[j-1]);
            }
        }
    }
}

int find_max( int *list, int size )
{
    int max = list[0];
    for( int i=0 ; i<size ; i++ )
    {
        if ( list[i] > max )
        {
            max = list[i] ;
        }
        
    }
    return max ;
}

int find_min( int *list, int size )
{
    int min = list[0];
    for( int i=0 ; i<size ; i++ )
    {
        if ( list[i] < min )
        {
            min = list[i] ;
        }
        
    }
    return min ;
}