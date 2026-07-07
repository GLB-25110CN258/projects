
// Write a program to create mini library system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int id;
        string name,title;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end;

    do
    {
        cout<<"1-add library record"<<endl;
        cout<<"2-remove library record"<<endl;
        cout<<"3-display a library record"<<endl;
        cout<<"4-update a library record"<<endl;
        cout<<"5-display all library records"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"book number = "<<num<<endl;

            num++;

            cout<<"Enter the book id = ";
            cin>>array[length].id;

            cin.ignore();

            cout<<"Enter author's name = ";
            getline(cin,array[length].name);

            cout<<"Enter book's title = ";
            getline(cin,array[length].title);

            length++;

            cout<<"Record successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter the book id = ";
            cin>>del;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==del)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"book record successfully removed."<<endl;
                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found"<<endl;
            }
        }
        else if(choice==3)
        {
            cout<<"Enter book id = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==display)
                {
                    check=1;

                    cout<<"Book id = "<<array[i].id<<endl;
                    cout<<"Author's name="<<array[i].name<<endl;
                    cout<<"book title = "<<array[i].title<<endl;

                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found"<<endl;
            }
        }
        else if(choice==4)
        {
            cout<<"Enter book id = ";
            cin>>update;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==update)
                {
                    check=1;

                    cout<<"Enter updated book id = ";
                    cin>>array[i].id;

                    cin.ignore();

                    cout<<"Enter updated author's name=";
                    getline(cin,array[i].name);
                    
                    cin.ignore();

                    cout<<"Enter updated book title = ";
                    cin>>(array[i].title);

                    cout<<"Record successfully updated"<<endl;

                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found."<<endl;
            }
        }
        else if(choice==5)
        {
            check=0;

            for(int i=0 ; i<length ; i++)
            {
                check=1;

                cout<<"Book:"<<i+1<<endl;
                cout<<"book id = "<<array[i].id<<endl;
                cout<<"author's name="<<array[i].name<<endl;
                cout<<"book tilte = "<<array[i].title<<endl;   
            }
            if(check==0)
                {
                    cout<<"Record not found."<<endl;
                }
        }
        else
        {
            cout<<"Error! please try again";
        }
        cout<<"do you wish to continue?"<<endl<<"If yes, then press:1"<<endl<<"If no, then press:0"<<endl<<"Choice = ";
        cin>>end;
    }
    while(end==1);

    if(end==0)
    {
        cout<<"Thank you! Have a good day.";
    }
    return 0;
}