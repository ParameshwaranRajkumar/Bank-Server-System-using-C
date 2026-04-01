#include<stdio.h>
#include<string.h>
#include "Bank management system_exit.c"
#include "Bank management system_login.c"
extern void login();
extern void myexit();
void account_reg();
int service;
int main()
{

    printf("WELCOME TO THE BANK\n");
    printf("\t\t\t                              Developer name - Parameshwaran Rajkumar\n");
    printf("Internet Banking\n");
    printf("\tChoose the options\n");
    printf("1. Account Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    scanf("%d",&service);


    switch(service)
    {
        case 1:
        account_reg();
        break;
        case 2:
        login();
        break;
        case 3:
        myexit();
        break;
        default:
        printf("SORRY Wrong option selected\n");

    }
}

// Account Register function
void account_reg()
{

    FILE *fptr;
    fptr=fopen("C:\\Users\\Dell\\Desktop\\New Custumer_Details.txt","w");
    if(fptr==NULL)
    {
        printf("File can't open");
    }

struct custumer_det
{   char username[20];
    char password[50];
    char conf_password[50];
    char first_name[20];
    char last_name[20];
    int dob_date;
    int dob_month;
    int dob_year;
    char gender[10];
    char phone_num[15];
    char email[50];
    char address[50];
    char aadhaar[20];
    char acc_type[30];
    char branch[30];
    char acc_no[25];
    int amount;

};

    struct custumer_det cus;
  printf("Enter details to start your journey now!\n\f");

     printf("\t   Login & Security details\n");
     printf("Create username \n");
     scanf("%s",cus.username);
     printf("Create password \n");
     scanf("%s",cus.password);
     printf("Conform password \n");
     scanf("%s",cus.conf_password);

   printf("\t   Personal details\n");
     printf("Enter first name \n");
     scanf("%s",cus.first_name);
     printf("Enter last name \n");
     scanf("%s",cus.last_name);
     printf("Enter DOB \n");
     scanf("%d/%d/%d",&cus.dob_date,&cus.dob_month,&cus.dob_year);
     printf("Enter Gender \n");
     scanf("%s",cus.gender);

   printf("\t   Contact Informations\n");
     printf("Enter Phone number \n");
     scanf("%s",cus.phone_num);
     printf("Enter Email id \n");
     scanf("%s",cus.email);
     printf("Enter Address \n");
     scanf("%s",cus.address);

   printf("\t   Identity Proof\n");
     printf("Enter Aadhaar number \n");
     scanf("%s",cus.aadhaar);

   printf("\t   Account Details\n");
     printf("Enter Account type(Saving/Current/NRI) \n");
     scanf("%s",cus.acc_type);
     printf("Enter branch \n");
     scanf("%s",cus.branch);
   printf("Enter initial deposit amount \n");
     scanf("%d",&cus.amount);





     strcpy(cus.acc_no,"920010026500856");
     printf("\f\t     Hey..Account number generated successfully - %s\n\"Thank you for registering\"\n\f",cus.acc_no);

//Display customer details
   printf("\t   Login & Security details\n");
     printf("Username\n%s\n",cus.username);

     printf("Password\n%s\n",cus.password);

    printf("\t   Personal details\n");
     printf("First name \n%s\n",cus.first_name);

     printf("Last name\n%s\n",cus.last_name);

     printf("DOB\n%d/%d/%d\n",cus.dob_date,cus.dob_month,cus.dob_year);

     printf("Gender\n%s\n",cus.gender);


   printf("\t   Contact Informations\n");
     printf("Phone number\n%s\n",cus.phone_num);

     printf("Email id\n%s\n",cus.email);

     printf("Address\n%s\n",cus.address);


   printf("\t   Identity Proof\n");
     printf("Aadhaar number \n%s\n",cus.aadhaar);


   printf("\t   Account Details\n");
     printf("Account type\n%s\n",cus.acc_type);

     printf("Branch \n%s\n",cus.branch);

     printf("Account number\n%s\n",cus.acc_no);

     printf("Initial deposit amount \n%d\n",cus.amount);



// Saving details in file

     fprintf(fptr,"%s\n",cus.username);

     fprintf(fptr,"%s\n",cus.password);


     fprintf(fptr,"%s\n",cus.first_name);

     fprintf(fptr,"%s\n",cus.last_name);

     fprintf(fptr,"%d/%d/%d\n",cus.dob_date,cus.dob_month,cus.dob_year);

     fprintf(fptr,"%s\n",cus.gender);



     fprintf(fptr,"%s\n",cus.phone_num);

     fprintf(fptr,"%s\n",cus.email);

     fprintf(fptr,"%s\n",cus.address);


     fprintf(fptr,"%s\n",cus.aadhaar);



     fprintf(fptr,"%s\n",cus.acc_type);

     fprintf(fptr,"%s\n",cus.branch);

     fprintf(fptr,"%s\n",cus.acc_no);
     fprintf(fptr,"2%d\n",cus.amount);


     fclose(fptr);


    printf("Internet Banking\n");
    printf("\tChoose the options\n");
    printf("1. Account Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    scanf("%d",&service);


    switch(service)
    {
        case 1:
        account_reg();
        break;
        case 2:
        login();
        break;
        case 3:
        myexit();
        default:
        printf("SORRY Wrong option selected\n");

    }

}











