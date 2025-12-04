#include<stdio.h>
#include<string.h>
#include<conio.h>
//file name
const char ACCOUNT_FILE[] = "account.dat";
// account structure
typedef struct {
    char name[50];
    int acc_no;
    float balance;
}Account;
// Functions
void create_account(); 
void withdraw_money(); 
void deposit_money(); 
void Check_balance(); 
// Main function
int main(){
    while(1){
        int choice;
        printf("\n**** Bank Management System ****");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. WithDraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
          case 1:
             create_account();
            break;
        
          case 2:
            deposit_money();
            break;
        
          case 3:
          withdraw_money();
          break;
          case 4:
          Check_balance();
          break;
          case 5:
            printf("\nBank Closed.\n");
            return 0;
            break;
        
          default:
          printf("\nInvalid choice!\n");
            break;
        }
    }
    return 0;
}
// account  function
void create_account(){
    Account acc;
    FILE *file;
    file = fopen(ACCOUNT_FILE,"ab+");
    if(file == NULL){
        printf("File not found !\n");
        return;
    }
    char c = getchar();
    while(c != '\n' && c != EOF );
    printf("\nEnter Username : ");
    fgets(acc.name,sizeof(acc.name),stdin);
    int index = strcspn(acc.name,"\n");
    acc.name[index] = '\0';
    printf("Enter you account number\n");
    scanf("%d", &acc.acc_no);
    acc.balance = 0;
    fwrite(&acc,sizeof(acc),1,file);
    fclose(file);
    printf("Account created successfully.\n");

}
//deposit money
void deposit_money(){
    FILE *file = fopen(ACCOUNT_FILE,"rb+");
    if (file == NULL){
        printf("Unable to open the account file\n");
        return;
    }
    Account acc_r;
    int acc_no;
    float money;
    printf("Enter your account number : \n");
    scanf("%d", &acc_no);
    printf("Enter amount to deposit : \n");
    scanf("%f", &money);
    while(fread(&acc_r,sizeof(acc_r),1,file)){
        if (acc_r.acc_no == acc_no){
            acc_r.balance += money;
            fseek(file,-sizeof(acc_r),SEEK_CUR);
            fwrite(&acc_r,sizeof(acc_r),1,file);
            fclose(file);
            printf("Successfuly deposited Rs.%.2f.Your new balance is %.2f\n",money,acc_r.balance);
            return;
        }
    }
    fclose(file);
    printf("Money deposit Fail! The account No: %d not Found!.\n",acc_no);
}

//withdraw money
void withdraw_money(){
    FILE *file = fopen(ACCOUNT_FILE,"rb+");
    if (file == NULL){
        printf("Unable to openn the file!.\n");
    }
    Account acc_r;
    int acc_no;
    float money;
    printf("Enter account number: ");
    scanf("%d", &acc_no);
    printf("Enter amount to withdraw: ");
    scanf("%f", &money);
    while (fread(&acc_r,sizeof(acc_r),1,file))
    {
        if (acc_r.acc_no == acc_no){
            if(acc_r.balance >= money){
                acc_r.balance -= money;
                fseek(file,-sizeof(acc_r),SEEK_CUR);
                fwrite(&acc_r,sizeof(acc_r),1,file);
                 printf("Successfuly withdraw Rs.%.2f.Your new balance is %.2f\n",money,acc_r.balance);
            }else
            {
                printf("Insufficient balance!.\n");
            }
            fclose(file);
            return;
        }
    }
     fclose(file);
    printf("Money withdraw Fail! The account No: %d not Found!.\n",acc_no);
}

//check balance
void Check_balance(){
    FILE *file = fopen(ACCOUNT_FILE,"rb");
    
    if(file == NULL){
        printf("File not found !\n");
        return;
    }
    int acc_no;
    Account acc_read;
    printf("Enter your account number : \n");
    scanf("%d", &acc_no);
while(fread(&acc_read,sizeof(acc_read),1,file)){
    if(acc_read.acc_no == acc_no){
        printf("Your current balance is Rs. %.2f\n",acc_read.balance);
        fclose(file);
        return;
    }
}
fclose(file);
printf("Account NO: %d was not found !\n",acc_no);
}