#include<bits/stdc++.h>
using namespace std;

struct node
{
    char name[100];
    int age;
    char problem[100];
    char ApDate[100];
    char Address[100];
    char Phone[100];
    char Email[100];
    char CabinNo[100];
    char BloodGroup[5];
    char Fees[100];


    struct node *next;
    struct node *prev;

}*head=NULL;

create(int n)
{
    struct node *new_node,*temp;


    ofstream outfile;
    outfile.open("Patient Record.txt");
    outfile<<"           Total patient : "<<n<<endl<<endl;

    int cnt=0;
    for (int i=1; i<=n; i++)
    {
        new_node = (struct node*) malloc (sizeof (struct node));

        printf("\n\nEnter Details of Patient - %d\n",i);

        printf ("Enter Name : ");
        scanf ("%s",&new_node->name);

        printf ("Enter Age : ");
        scanf ("%d", &new_node->age);

        printf ("Enter Problem Statement : ");
        scanf ("%s",&new_node->problem);

        printf ("Enter Appointment Date : ");
        scanf ("%s",&new_node->ApDate);

        printf ("Enter Address : ");
        scanf ("%s",&new_node->Address);

        printf ("Enter Phone Number : ");
        scanf ("%s",&new_node->Phone);

        printf ("Enter Email Address : ");
        scanf ("%s",&new_node->Email);

        printf ("Enter Cabin Number : ");
        scanf ("%s",&new_node->CabinNo);

        printf ("Enter Blood Group : ");
        scanf ("%s",&new_node->BloodGroup);

        printf ("Enter Total Fees : ");
        scanf ("%s",&new_node->Fees);


        outfile<<"Patient NO : "<<++cnt<<endl;
        outfile<<"Name : "<<new_node->name<<endl;
        outfile<<"Age : "<<new_node->age<<endl;
        outfile<<"Problem Statement : "<<new_node->problem<<endl;

        outfile<<"Appointment Date : "<<new_node->ApDate<<endl;

        outfile<<"Adress : "<<new_node->Address<<endl;

        outfile<<"Phone Number : "<<new_node->Phone<<endl;
        outfile<<"Email Address : "<<new_node->Email<<endl;
        outfile<<"Cabin Number : "<<new_node->CabinNo<<endl;
        outfile<<"Blood Group : "<<new_node->BloodGroup<<endl;
        outfile<<"Fees : "<<new_node->Fees<<endl<<endl<<endl;




        if (i==n) outfile.close();

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
        printf ("Age : %d\n",temp->age);

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
