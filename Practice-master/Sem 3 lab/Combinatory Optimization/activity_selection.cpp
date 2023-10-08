#include<bits/stdc++.h>
using namespace std;

struct job
{
    char id[20];
    int startTime, finishTime;
    int compatibility;
} jobs[100];

int numOfJobs ;

void readInput()
{
    cin >> numOfJobs ;

    for( int i=0 ; i<numOfJobs; i++ )
    {
        cin >> jobs[i].id >> jobs[i].startTime >> jobs[i].finishTime ;
        jobs[i].compatibility = 1 ;
    }

    cout << endl ;
    for( int i=0 ; i<numOfJobs; i++ )
    {
        cout << jobs[i].id << " " << jobs[i].startTime << " " << jobs[i].finishTime << " " << jobs[i].compatibility << endl;
    }
    cout << endl ;
    
}

bool compare(struct job job1, struct job job2)
{
    return job1.finishTime<job2.finishTime;
}

void iterative( )
{
    for (int i = 0; i < numOfJobs; i++)
    {
        if( jobs[i].compatibility != 0 )
        for (int j = i+1; j<numOfJobs; j++)
        {
            if ( jobs[j].startTime < jobs[i].finishTime  )
            {
                jobs[j].compatibility = 0 ;
            }
        }    
    }   
}

void recursive( int i )
{
    int n = i+1 ;
    while ( n<=numOfJobs && jobs[n].startTime<jobs[i].finishTime )
    {
        jobs[n].compatibility = 0 ;
        n ++ ;
    }
    if ( n <= numOfJobs )
    {
        recursive(n);
    }
    else return ;
    
}

int main()
{
    freopen("input.txt", "r", stdin ) ;
    readInput() ;
    sort(jobs, jobs+numOfJobs, compare);
    for( int i=0 ; i<numOfJobs; i++ )
    {
        cout << jobs[i].id << " " << jobs[i].startTime << " " << jobs[i].finishTime << " " << jobs[i].compatibility << endl;
    }
    cout << endl ;
    //iterative();
    recursive(0);
    for( int i=0 ; i<numOfJobs; i++ )
    {
        if( jobs[i].compatibility == 1 )
        cout << jobs[i].id << " " << jobs[i].startTime << " " << jobs[i].finishTime << " " << jobs[i].compatibility << endl;
    }

    return 0 ;
}
