
// Write a program to create student record system using array and strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int roll,marks;
        string name;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end;

    do
    {
        cout<<"1-add student record"<<endl;
        cout<<"2-remove student record"<<endl;
        cout<<"3-display a students record"<<endl;
        cout<<"4-update a students record"<<endl;
        cout<<"5-display all students record"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"student number = "<<num<<endl;

            num++;

            cout<<"Enter the roll number = ";
            cin>>array[length].roll;

            cin.ignore();

            cout<<"Enter student's name = ";
            getline(cin,array[length].name);

            cout<<"Enter student's total marks obtained out of 500 = ";
            cin>>array[length].marks;

            length++;

            cout<<"Record successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter the roll number = ";
            cin>>del;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].roll==del)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"Student record successfully removed."<<endl;
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
            cout<<"Enter the roll number of student = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].roll==display)
                {
                    check=1;

                    cout<<"roll number = "<<array[i].roll<<endl;
                    cout<<"name="<<array[i].name<<endl;
                    cout<<"marks = "<<array[i].marks<<endl;

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
            cout<<"Enter the roll number = ";
            cin>>update;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].roll==update)
                {
                    check=1;

                    cout<<"Enter updated roll number = ";
                    cin>>array[i].roll;

                    cin.ignore();

                    cout<<"Enter updated name=";
                    getline(cin,array[i].name);
                    
                    cout<<"Enter updated marks = ";
                    cin>>(array[i].marks);

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

                cout<<"Student:"<<i+1<<endl;
                cout<<"roll number = "<<array[i].roll<<endl;
                cout<<"name="<<array[i].name<<endl;
                cout<<"marks = "<<array[i].marks<<endl;   
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