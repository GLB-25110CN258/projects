
// Write a program to develop complete mini project using array,string and functions

#include <iostream>
#include <string>
using namespace std;

char array[3][3];

void display()
{ 
    cout<<"____________"<<endl;

    for(int k=0 ; k<3 ; k++)
    {
    for(int p=0 ; p<3 ; p++)
    {
        cout<<array[k][p]<<" | ";
    }
    cout<<endl;
    cout<<"____________"<<endl;
    }
}
int main()
{
    cout<<"Tic Tac Toe game"<<endl;

    string play1,play2;
    int position,play=0,end=1;
    char win;

    cout<<"Enter player1(X) name = ";
    cin>>play1;

    cout<<"Enter player2(O) name = ";
    cin>>play2;

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            array[i][j]=' ';
        }
    }

    cout<<"position guide = "<<endl;

    cout<<"____________"<<endl;
    cout<<"|1 | 2 | 3 |"<<endl;
    cout<<"____________"<<endl;
    cout<<"|4 | 5 | 6 |"<<endl;
    cout<<"____________"<<endl;
    cout<<"|7 | 8 | 9 |"<<endl;
    cout<<"____________"<<endl;

    cout<<"player1 = X"<<endl;
    cout<<"player2 = O"<<endl;

    do
    {
        if(play==9)
        {
            cout<<"draw!";
            end=0;
        }
        cout<<"Enter the position :";
        cin>>position;

        play++;

        if(position==1)
        {
            if(array[0][0]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[0][0]='O';
            }
            else
            {
                win='X';
                array[0][0]='X';
            }

            display();

        }
        else if(position==2)
        {
            if(array[0][1]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[0][1]='O';
            }
            else
            {
                win='X';
                array[0][1]='X';
            }

            display();
        }
        else if(position==3)
        {
            if(array[0][2]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[0][2]='O';
            }
            else
            {
                win='X';
                array[0][2]='X';
            }

            display();
        }
        else if(position==4)
        {
           if(array[1][0]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            } 
            if(play%2==0)
            {
                win='O';
                array[1][0]='O';
            }
            else
            {
                win='X';
                array[1][0]='X';
            }

            display();
        }
        else if(position==5)
        {
            if(array[1][1]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[1][1]='O';
            }
            else
            {
                win='X';
                array[1][1]='X';
            }

            display();
        }
        else if(position==6)
        {
            if(array[1][2]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[1][2]='O';
            }
            else
            {
                win='X';
                array[1][2]='X';
            }

            display();
        }
        else if(position==7)
        {
            if(array[2][0]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[2][0]='O';
            }
            else
            {
                win='X';
                array[2][0]='X';
            }

            display();
        }
        else if(position==8)
        {
            if(array[2][1]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[2][1]='O';
            }
            else
            {
                win='X';
                array[2][1]='X';
            }

            display();
        }
        else if(position==9)
        {
            if(array[2][2]!=' ')
            {
                cout<<"Position already occupied!"<<endl;
                play--;
                continue;
            }
            if(play%2==0)
            {
                win='O';
                array[2][2]='O';
            }
            else
            {
                win='X';
                array[2][2]='X';
            }

            display();
        }
        else
        {
            cout<<"Invalid position!"<<endl;
            play--;
            continue;
        }
        for(int u=0 ; u<3 ; u++)
        {
            if(array[u][0]==win && array[u][1]==win && array[u][2]==win || array[0][u]==win && array[1][u]==win && array[2][u]==win || array[0][0]==win && array[1][1]==win && array[2][2]==win || array[0][2]==win && array[1][1]==win && array[2][0]==win)
            {
                end=0;

                if(win=='X')
                {
                    cout<<"Congratulations! "<<play1<<" won"<<endl;
                    break;
                }
                else
                {
                   cout<<"Congratulations! "<<play2<<" won"<<endl;
                   break;
                }
            }
        }
    }
    while(end==1);

    if(end==0)
    {
        cout<<"Thank you! Have a good day.";
    }
    return 0;
}