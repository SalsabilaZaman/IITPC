#include<bits/stdc++.h>
using namespace std;

#define diagonalArr -1
#define upArr -2
#define leftArr -3
string str1, str2 ;

void printLCS( int sign[][100], int x, int y )
{
    if( x==0 || y==0 )return ;
    if ( sign[x-1][y-1] == diagonalArr )
    {
        printLCS( sign, x-1 , y-1 );
        cout << str1[x-1] << " ";
    }
    else if ( sign[x-1][y-1] == upArr )
    {
        printLCS( sign, x-1 , y ) ;
    }
    else printLCS( sign , x , y-1 ) ;
    
}

int main()
{
    cin >> str1 >> str2 ;
    int m,n,i,j;
    m = str1.size()+1 , n = str2.size()+1 ;
    int arr[100][100] ;
    int sign[100][100] ;
    for ( int i = 0; i < m; i++)
    {
        arr[i][0] = 0 ;
     

    }
    for ( int i = 0; i < n; i++)
    {
        arr[0][i] = 0 ;
    }

 for(i=0;i<m;i++)arr[i][0]=0;
	for(i=0;i<n;i++)arr[0][i]=0;
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){
			if(str1[i-1]==str2[j-1]){
				arr[i][j]=arr[i-1][j-1]+1;
				sign[i-1][j-1]= diagonalArr;		
			}
			else if(arr[i-1][j]>=arr[i][j-1]){
				arr[i][j]=arr[i-1][j];
				sign[i-1][j-1]= upArr;			
			}
			else{
				arr[i][j]=arr[i][j-1];
				sign[i-1][j-1]=leftArr;			
			}
		}
	}

    // for ( int i = 0; i < m; i++ )
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << ","<< sign[i][j] << "  " ;
    //     }
    //     cout << endl ;
    // }

    printLCS( sign, m-1 , n-1 );
}