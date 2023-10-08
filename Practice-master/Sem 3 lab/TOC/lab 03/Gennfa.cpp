#include<bits/stdc++.h>
using namespace std;
#define MAX 30

int num_states, num_symbols, num_transition;
char set_of_state[MAX],alphabet[MAX], transition_Table[MAX][MAX][MAX], initial_state, final_state, s[50];
char curr_state;
string Path;
bool ac;

void nfa(char s[], int idx, char curr_state);
int getStateIndex();
int getAlphaIndex();

int main(void){
    cout << "Enter no of states:";
    cin >> num_states;
    set_of_state[num_states];
    cout << "Enter set of states:";
    for(int i = 0; i < num_states; ++i) cin >> set_of_state[i];

    cout << "Enter no of symbols:";
    cin >> num_symbols;
    alphabet[num_symbols];
    printf("Enter symbols: ");
    for(int i = 0; i < num_symbols;++i) cin >> alphabet[i];

    cout << "Enter initial state:";
    cin >> initial_state; 
    cout << "Enter final state:";
    cin >> final_state;

    transition_Table[num_states][num_symbols][num_states];
    int i, j, k;
    for(i = 0; i < num_states;++i){
        cout << "For state: ";
        printf("%c", set_of_state[i]);
        for(j = 0; j < num_symbols; ++j){
            printf(" For symbol, %c Enter no of transition: ",alphabet[j]);
            cin >> num_transition;
            cout << "Transitions: ";
            for(k = 0; k < num_transition; ++k){
                cin >> transition_Table[i][j][k];
            }
        }
        cout << endl;
    }

    for(int i = 0; i < num_states; ++i){
        cout << "state: " << set_of_state[i] << ": ";
        for(int j = 0; j < num_symbols; ++j){
            cout << " symbol: " << alphabet[j] << " transitions: ";
            for(int k = 0; k < num_states; ++k){
                cout << transition_Table[i][j][k] << " "; 
            }
        }
        cout << endl;
    }

    printf("Enter the string: ");
    cin >> s;
    curr_state = initial_state;

    nfa(s,0,curr_state);
    if(ac == false) printf("Rejected!\n");

}

int getStateIndex(char curr_state){
    for( int i=0 ; i < num_states; ++i){
        if(curr_state == set_of_state[i]) return i;
    }
    return -1;
}
int getAlphaIndex(char symbol){
    for(int i = 0; i < num_symbols; ++i){
        if(symbol == alphabet[i]) return i;
    }
    return -1;
}

void nfa(char s[], int idx, char curr_state){

    if(s[idx] == '\0' && curr_state != final_state) return;
    if(curr_state == 'x') return;
    
    Path += curr_state;
    // aa 
    if(s[idx] == '\0' && curr_state == final_state){
        ac = true;
        printf("Accepted!\n");
        printf("Path: ");
        cout << Path << endl;
    }

    int i = getStateIndex(curr_state);
    int j = getAlphaIndex(s[idx]);
    int k = 0;
    while(transition_Table[i][j][k]){
        curr_state = transition_Table[i][j][k];
        nfa(s,idx+1,curr_state);
        k++;
    }
    
}

