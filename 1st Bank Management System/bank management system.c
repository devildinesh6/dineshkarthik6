#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//by dinesh
typedef struct Emp{
    int id;
    char name[30];
    struct DOB{int day,month,year;}dob;
    long int eno;
    int Aadhar;
    char pan[9];
    char Address[100];
    char pass[100];
    struct Emp* next;
}cus;
cus* head=NULL;
cus* tail=NULL;
FILE* fileptr;

void T_and_C(){
    fileptr=fopen("t_and_c.txt", "r");
    if ( fileptr == NULL || fgetc(fileptr)==EOF )
    {
        perror("");
        return;
    }
    else{
        fread
    }
}

void add(){
    system("CLS");
    cus* ncus = (cus*)malloc(sizeof(cus)); //allocate memory for the new node
    ncus->next=NULL;

    printf("\n\t\tPlease Enter details of new customer\n");
    printf("\n\tEnter the customer new ID :- ");
    scanf("%d",&cus->id);
    printf("\n\tEnter the name of the customer :- ");
    scanf("%[^\n]s",cus->name);
    printf("\n\tEnter the phone number :- ");
    scanf("%d",&cus->eno);
    printf("\n\tEnter the Aadhar number :- ");
    scanf("%d",&cus->Aadhar);
    printf("\n\tEnter the Pan card number :- ");
    scanf("%s",cus->pan);
    printf("\n\tEnter the Address :- ");
    scanf("%[^\n]s",cus->Address);
    printf("\n\tUser please Enter the password for your new account :- ");
    scanf("%[^\n]s",cus->pass);

    fileptr = fopen("customer.dat","ab+"); // opening file.
    if ( fileptr == NULL || fgetc(fileptr)==EOF )
    {
        perror("");
        return;
    }

    fwrite(nemp,sizeof(cus),1,fileptr); // writing the whole structure into the file.
    fclose(fileptr);
    if (head==NULL)
        head=nEmp;
    else
        tail->next=nemp;
    tail=nemp;
}

void search(){
}

void update(){
}

void delete(){
}

void dp_wd_cb(){
}



int main(){
    system("CLS");
    int option,op2;
    char *id,*pass;
    while(1){
        printf("\n\t\t\2\2\2Welcome to Bank Management System\2\2\2 ");
        printf("\n\t1) Admin");
        printf("\n\t2) User");
        printf("\n\t3) Terms and conditions");
        printf("\n\t4) Exit");
        printf("\n\tPlease Enter your choice :- ");
        scanf("%d",&option);
        if(option==1){
            printf("\n\tEnter user Id :- ");
            scanf("%s",id);
            printf("\n\tPlease enter password :- ");
            scanf("%s",pass);
            if(id==ADMIN && pass==ADMIN){
                system("CLS");
                while(1){
                    printf("\n\t\t\2\2Welcome to ADMIN Portal\2\2");
                    printf("\n\t1) Create new Account");
                    printf("\n\t2) Search account");
                    printf("\n\t3) Update Account");
                    printf("\n\t4) Delete Account");
                    printf("\n\t5) Exit");
                    printf("\n\t Please Enter the option you want to Choose :- ");
                    scanf("%d",&op2);
                    switch (op2)
                    {
                        case 1:
                            add();
                            break;
                        case 2:
                            search();
                            break;
                        case 3:
                            update();
                            break;
                        case 4:
                            delete();
                            break;
                        default:
                            printf("\n\n\tYou Entered wrong option please enter again")
                            break;
                    }
                }
            }
        }
        else if (option==2){
        }
        else if (option==3){
            system("CLS");
            T_and_C();
        }
        else if (option==4)
            exit(1);
        else
            printf("\n\n\tYou Entered wrong option Please enter again");
    }
}
