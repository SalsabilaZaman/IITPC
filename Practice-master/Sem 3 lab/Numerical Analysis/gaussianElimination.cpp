#include<bits/stdc++.h>
using namespace std ;
#define sizeM 3


int main()
{
    double mat[sizeM][sizeM+1], temp, Swap, determinant = 1 ;
    double inverse[sizeM][sizeM] ;
    // Input :
    for ( int i = 0; i < sizeM; i++ )
    {
        for ( int j = 0; j < sizeM+1; j++ )
        {
            cout << "Entry at " << i <<","<< j << " : ";
            cin >>  mat[i][j] ;        
            if( j != sizeM ) inverse[i][j] = 0 ;
        }
        inverse[i][i] = 1 ;
    }

    cout << endl << "Given Matrix : \n";
    for ( int i = 0; i < sizeM; i++ )
    {
        for ( int j = 0; j < sizeM+1; j++ )
        {
            cout << mat[i][j] << "\t" ;
        }
        cout << endl ;
    }

    // Elimination process :
    int i = 0, j = 0, k = 0 ;

    for ( i = 0; i < sizeM-1; i++ )
    {      
        if ( mat[i][i] == 0 && i!=(sizeM-1) )
        {
            for( k = 0; k < sizeM+1 ; k++ )
            {
                Swap = mat[i][k] ;
                mat[i][k] = mat[i+1][k] ;
                mat[i+1][k] = Swap ;
            }
            for( k = 0; k < sizeM ; k++ )
            {
                Swap = inverse[i][k] ;
                inverse[i][k] = inverse[i+1][k] ;
                inverse[i+1][k] = Swap ;
            }

            cout << endl ;
            for ( int p = 0; p < sizeM; p++ )
            {
                for ( int q = 0; q < sizeM+1; q++ )
                {
                    cout << mat[p][q] << "\t" ;
                }
                cout << endl ;
            }
        }
        
        for ( j = i+1 ; j < sizeM ; j++ )
        {
            temp = mat[j][i] / mat[i][i] ;
            for( k = 0; k < sizeM+1 ; k++ )
            {
                mat[j][k] = mat[j][k] - mat[i][k]*temp ;
            }
            for( k = 0; k < sizeM ; k++ )
            {
                inverse[j][k] = inverse[j][k] - inverse[i][k]*temp ;
            }
        }

        cout << endl ;
        for ( int p = 0; p < sizeM; p++ )
        {
            for ( int q = 0; q < sizeM+1; q++ )
            {
                cout << mat[p][q] << "\t" ;
            }
            cout << endl ;
        }   

    }

    for ( int i = 0; i < sizeM; i++ )
    {
        determinant *= mat[i][i] ;
    }
    cout << "\nDeterminant : " << determinant << endl ;
    
    cout << endl ;

    // upper elemination ;
    for ( i = sizeM-1; i >= 0 ; i-- )
    {    
        for ( j = i-1 ; j >= 0 ; j-- )
        {
            temp = mat[j][i] / mat[i][i] ;

            for( k = 0; k < sizeM+1 ; k++ )
            {
                mat[j][k] = mat[j][k] - mat[i][k]*temp ;
            }
            for( k = 0; k < sizeM ; k++ )
            {
                inverse[j][k] = inverse[j][k] - inverse[i][k]*temp ;
            }
        }

        cout << endl ;
        for ( int p = 0; p < sizeM; p++ )
        {
            for ( int q = 0; q < sizeM+1; q++ )
            {
                cout << mat[p][q] << "\t" ;
            }
            cout << endl ;
        }   
    }

    for ( int i = 0; i < sizeM; i++ )
    {
        mat[i][sizeM] /= mat[i][i] ;        
        for ( int p = 0; p < sizeM; p++)
        {
            inverse[i][p] /= mat[i][i] ;
        }
        mat[i][i] /= mat[i][i] ;
    }

    cout << endl ;
    for ( int p = 0; p < sizeM; p++ )
    {
        for ( int q = 0; q < sizeM+1; q++ )
        {
            cout << mat[p][q] << "\t" ;
        }
        cout << endl ;
    }   

    cout << "\nValues : \n\n" ;
    for ( int i = 0; i < sizeM; i++ )
    {
        cout << "x" << i+1 << " = " << mat[i][sizeM] << endl ; 
    }
    
    
    cout << endl << "Inverse : \n" << endl ;

    for ( int p = 0; p < sizeM; p++ )
    {
        for ( int q = 0; q < sizeM; q++ )
        {
            cout << inverse[p][q] << "\t" ;
        }
        cout << endl ;
    }   
     
}

/*
1 
-1 
2 
-1 
-8 
2 
-2 
3 
-3 
-20 
1 
1 
1 
0 
-2 
1 
-1 
4 
3 
4 

4
1
1
8
2
5
2
3
1
2
4
11



*/