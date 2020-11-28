#include<bits/stdc++.h>
//#include <windows.h>
//
#include <stdio.h>
using namespace std;

struct node
{
    char name[100];
    char  age[100];
    char problem[100];
    char ApDate[100];
    char Address[100];
    char Phone[100];
    char Email[100];
    char CabinNo[100];
    char BloodGroup[100];
    char Fees[100];


    struct node *next;
    struct node *prev;

}*head=NULL;

create(int n)
{
    struct node *new_node,*temp;


    ofstream outfile;
    outfile.open("Patient Record.txt", ios::app);
    outfile<<"           Total patient : "<<n<<endl<<endl;

    int cnt=0;
    for (int i=1; i<=n; i++)
    {
        char a;
        scanf("%c",&a);
        new_node = (struct node*) malloc (sizeof (struct node));

        printf("\n\nEnter Details of Patient - %d\n",i);

        printf ("Enter Name : ");
        scanf ("%[^\n]%c",&new_node->name,&a);

        printf ("Enter Age : ");
        scanf ("%[^\n]%c", &new_node->age,&a);


        printf ("Enter Problem Statement : ");
        scanf ("%[^\n]%c",&new_node->problem,&a);

        printf ("Enter Appointment Date : ");
        scanf ("%[^\n]%c",&new_node->ApDate,&a);

        printf ("Enter Address : ");
        scanf ("%[^\n]%c",&new_node->Address,&a);

        printf ("Enter Phone Number : ");
        scanf ("%[^\n]%c",&new_node->Phone,&a);

        printf ("Enter Email Address : ");
        scanf ("%[^\n]%c",&new_node->Email,&a);

        printf ("Enter Cabin Number : ");
        scanf ("%[^\n]%c",&new_node->CabinNo,&a);

        printf ("Enter Blood Group : ");
        scanf ("%[^\n]%c",&new_node->BloodGroup,&a);

        printf ("Enter Total Fees : ");
        scanf ("%[^\n]",&new_node->Fees);


        outfile<<"Patient NO : "<<++cnt<<endl;
        outfile<<"Name : "<<new_node->name<<endl;
        outfile<<"Age : "<<new_node->age<<endl;
        outfile<<"Problem Statement : "<<new_node->problem<<endl;

        outfile<<"Appointment Date : "<<new_node->ApDate<<endl;

        outfile<<"Address : "<<new_node->Address<<endl;

        outfile<<"Phone Number : "<<new_node->Phone<<endl;
        outfile<<"Email Address : "<<new_node->Email<<endl;
        outfile<<"Cabin Number : "<<new_node->CabinNo<<endl;
        outfile<<"Blood Group : "<<new_node->BloodGroup<<endl;
        outfile<<"Fees : "<<new_node->Fees<<endl<<endl<<endl;




       if (i==n)
       {outfile.close();
       }
        new_node->next=0;
        new_node->prev=0;

        if (head==0)
        {
            head=new_node;
            temp= head;
        }
        else
        {
            temp->next=new_node;
            new_node->prev = temp;
            temp= new_node;
        }

    }
}


display(int n)
{
    struct node *temp;
    temp=head;
    int cnt=0;
    cout<<endl<<endl;
    printf("----------------OUTPUT-----------------\n\n");
    printf("              Total Patient : %d \n\n",n);
    while(temp!=0)
    {

        printf ("\n\n             Patient Number %d Details \n\n",++cnt);
        printf ("Name : %s\n",temp->name);
        printf ("Age : %s\n",temp->age);

        printf ("Problem Statement : %s\n",temp->problem);
        printf ("Appointment Date : %s\n",temp->ApDate);
        printf ("Address : %s\n",temp->Address);

        printf ("Phone Number : %s\n",temp->Phone);

        printf ("Email Address : %s\n",temp->Email);
        printf ("Cabin Number : %s\n",temp->CabinNo);
        printf ("Blood Group : %s\n",temp->BloodGroup);
        printf ("Total Fees : %s\n",temp->Fees);



        temp=temp->next;
    }
}


int main()
{
    int n;
    printf ("Enter  The Number Of  Total Patient -- ");
    scanf ("%d",&n);

    create(n);
    display(n);
}

