#include<bits/stdc++.h>
using namespace std;
char box[3][3];
int i,j,turn=1;
string status="Player1 turn";
void display()
{
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c\t",box[i][j]);
        }
         cout<<"\n\n\n";
    }
}
void reset()
{
    turn=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            box[i][j]='-';
        }
    }
    status="Player1 turn";
}
void check()
{
    for(i=0,j=0;i<3;i++)
    {
        if(box[i][j]==box[i][j+1] && box[i][j+1]==box[i][j+2] && box[i][j]!='-')
        {
            system("cls");
            if(turn==1)
            {
                cout<<"\nPlayer2 won the game\n";
            }
            else{
                cout<<"\nPlayer1 won the game\n";
            }
            reset();
        }
        if(box[j][i]==box[j+1][i] && box[j+1][i]==box[j+2][i] && box[j][i]!='-')
        {
            system("cls");
            if(turn==1)
            {
                cout<<"\nPlayer2 won the game\n";
            }
            else{
                cout<<"\nPlayer1 won the game\n";
            }
            reset();
        }
    }
    if(box[0][0]==box[1][1] && box[1][1]==box[2][2] && box[0][0]!='-')
    {
        system("cls");
            if(turn==1)
            {
                cout<<"\nPlayer2 won the game\n";
            }
            else{
                cout<<"\nPlayer1 won the game\n";
            }
            reset();
    }
    if(box[0][2]==box[1][1] && box[1][1]==box[2][0] && box[0][2]!='-')
    {
        system("cls");
            if(turn==1)
            {
                cout<<"\nPlayer2 won the game\n";
            }
            else{
                cout<<"\nPlayer1 won the game\n";
            }
            reset();
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(box[i][j]!='-')
            {
                if(i==2 && j==2)
                {
                    system("cls");
                    cout<<"\nGame draw\n";
                    reset();
                }
            }
        }
    }
}
int main()
{
    reset();
    int a=1,ch;
    char value;
    while(a==1)
    {
        cout<<status;
        cout<<"\nEnter the place to enter the value\n";
        cin>>ch;
        if(turn==1)
        {
          value='X';
          turn=2;
          status="Player2 turn";
        }
        else
        {
           value='O'; 
           turn=1; 
           status="Player1 turn";
        }
        switch(ch)
        {
            case 1:box[0][0]=value;
            display();
            check();
            break;
            case 2:box[0][1]=value;
            display();
            check();
            break;
            case 3:box[0][2]=value;
            display();
            check();
            break;
            case 4:box[1][0]=value;
            display();
            check();
            break;
            case 5:box[1][1]=value;
            display();
            check();
            break;
            case 6:box[1][2]=value;
            display();
            check();
            break;
            case 7:box[2][0]=value;
            display();
            check();
            break;
            case 8:box[2][1]=value;
            display();
            check();
            break;
            case 9:box[2][2]=value;
            display();
            check();
            break;
            default:cout<<"wrong input!!!\n";
            break;
        }
    }
}