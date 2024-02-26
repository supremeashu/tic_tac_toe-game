//Author- Ashutosh Mohapatra(supremeashu)
#include<iostream>
#include<conio.h>
using namespace std;

char position[9];
char player_1='X';
char player_2='O';
char userChoice;
void interface();
void player(char symbol);
bool win(char symbol);

int main(){
    for(int i=1; i<=9; i++) position[i-1]='.';
    int count=0;
    int q=0;
    cout<<"\t\t\t\tTic-Tak-Toe-game\n\t\t\t\t\t~supremeashu\n\n";
        cout<<"\t\t\t\tPlayer-1 is X \n";
        cout<<"\t\t\t\tPlayer-2 is O \n\n";
        for(int i=0; i<9; i+=3){
            if(i!=0) cout<<"\t\t\t\t  ---------\n";
            cout<<"\t\t\t\t  ";
            cout<<i+1<<" | "<<i+2<<" | "<<i+3<<endl;
        } 
    cout<<"\t\t\t\tPress 1 to start: \n";
    cin>>q;
    do{
        
        interface();
        player('X');
        count++;
        interface(); 
        if(win('X')) {
            cout<<"\t\t\t\tPlayer 1 win";
            break;
        }
        if(count>8){
            cout<<"\t\t\t\tDRAW\n";
            break;
        } 
        player('O');
        count++;
        interface();
        if(win('O')){
            cout<<"\n\t\t\t\tPlayer 2 win";
            break;
        }
    }
    while(true);
    return 0;
}

void interface(){
    system("clear");
    cout<<"\t\t\t\tTic-Tak-Toe-game\n\t\t\t\t\t~supremeashu\n\n";
    cout<<"\t\t\t\tPlayer-1 is X \n";
    cout<<"\t\t\t\tPlayer-2 is O \n\n";
    for(int i=0; i<9; i+=3){
        if(i!=0) cout<<"\t\t\t\t  ---------\n";
        cout<<"\t\t\t\t  ";
        cout<<position[i]<<" | "<<position[i+1]<<" | "<<position[i+2]<<endl;
    }    
}

void player(char symbol){
    cout<<"\n\t\t\t\t"<<symbol<<"'s turn\n";
    cout<<"\t\t\t\tEnter Number from <1> to <9>: ";
    cin>>userChoice;
    if(userChoice=='1'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='2'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='3'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='4'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='5'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='6'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='7'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='8'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else if(userChoice=='9'){
        int intuserChoice=userChoice - '0';
        if(position[intuserChoice-1]!='O' && position[intuserChoice-1]!='X')
            position[intuserChoice-1]=symbol;
        else{
            cout<<"\t\t\t\t !!ALLREADY OCCUPIED try again\n";
            player(symbol);
        }
    }
    else{
        cout<<"\t\t\t\tINVALID INPUT try again\n\n";
        player(symbol);    
    }
}

bool win(char symbol){
    //  0  1  2
    //  3  4  5
    //  6  7  8
    // ---
    for(int i=0; i<9; i+=3){
        if(position[i]==position[i+1] && position[i+1]==position[i+2] && position[i+2]==symbol)
            return true;
    }  
    //|||
    for(int i=0; i<3; i++){
        if(position[i]==position[i+3] && position[i+3]==position[i+6] && position[i+6]==symbol)
            return true;
    }
    // "\ /"
    if(position[0]==position[4] && position[4]==position[8] && position[8]==symbol)
        return true;
    if(position[2]==position[4] && position[4]==position[6] && position[6]==symbol)
        return true;
    return false;
}