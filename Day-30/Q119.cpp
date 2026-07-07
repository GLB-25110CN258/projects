
// Write a program to create mini employee management system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int id,salary;
        string name;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end;

    do
    {
        cout<<"1-add employee record"<<endl;
        cout<<"2-remove employee record"<<endl;
        cout<<"3-display a employee record"<<endl;
        cout<<"4-update a employee record"<<endl;
        cout<<"5-display all employee record"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Employee number = "<<num<<endl;

            num++;

            cout<<"Enter employee id = ";
            cin>>array[length].id;

            cin.ignore();

            cout<<"Enter employee's name = ";
            getline(cin,array[length].name);

            cout<<"Employee salary = ";
            cin>>array[length].salary;

            length++;

            cout<<"Record successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter employee id = ";
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

                    cout<<"Employee record successfully removed."<<endl;
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
            cout<<"Enter employee id = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==display)
                {
                    check=1;

                    cout<<"id = "<<array[i].id<<endl;
                    cout<<"name="<<array[i].name<<endl;
                    cout<<"salary = "<<array[i].salary<<endl;

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
            cout<<"Enter employee id = ";
            cin>>update;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==update)
                {
                    check=1;

                    cout<<"Enter updated id = ";
                    cin>>array[i].id;

                    cin.ignore();

                    cout<<"Enter updated name=";
                    getline(cin,array[i].name);
                    
                    cout<<"Enter updated salary = ";
                    cin>>(array[i].salary);

                    cout<<"Record successfully updated";

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

                cout<<"employee:"<<i+1<<endl;
                cout<<"id = "<<array[i].id<<endl;
                cout<<"name="<<array[i].name<<endl;
                cout<<"salary = "<<array[i].salary<<endl;   
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