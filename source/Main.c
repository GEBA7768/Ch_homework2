#include <stdio.h>
#include <math.h>

 //��3.33�D
int main() 
{
    int length, breadth;
    printf("�п�J���שM�e��(�Ϊť���j�})�G");
    scanf_s("%d %d", &length, &breadth);

    for (int i = 1; i <= length; i++) 
    {
        for (int j = 1; j <= breadth; j++) 
        {
            if (i == 1 || i == length || j == 1 || j == breadth) 
            {
                printf("+");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


//��4.15�D
int main(void) {
    double amount;         // �C�~�����s�ڪ��B
    double principal = 5000.0;  // ��l�����B
    double rate;           // �~�Q�v

    for (rate = 10.0; rate <= 12.0; rate += 0.5) 
    {
        printf("�Q�v�G%.1f%%\n", rate);

        printf("%4s%21s\n", "�~��", "�s�ڪ��B");

        for (unsigned int year = 1; year <= 15; ++year) 
        {
            amount = principal * pow(1.0 + rate / 100, year);

            printf("%4u%21.2f\n", year, amount);
        }

        printf("\n");  
    }

    return 0;
}


//��4.16�D
int main() 
{
    int i, j;

    // �Ϯ� (A)
    printf("(A)\n");
    for (i = 1; i <= 10; i++) 
    {           
        for (j = 1; j <= i; j++) 
        {        
            printf("%s", "*");
        }
        printf("\n");                      
    }
    printf("\n");                          

    // �Ϯ� (B)
    printf("(B)\n");
    for (i = 10; i >= 1; i--) 
    {            
        for (j = 1; j <= i; j++) 
        {         
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // �Ϯ� (C)
    printf("(C)\n");
    for (i = 1; i <= 10; i++) 
    {
        for (j = 1; j < i; j++) 
        {        
            printf("%s", " ");
        }
        for (j = i; j <= 10; j++) 
        {        
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // �Ϯ� (D)
    printf("(D)\n");
    for (i = 1; i <= 10; i++) 
    {
        for (j = i; j < 10; j++) 
        {         
            printf("%s", " ");
        }
        for (j = 1; j <= i; j++) 
        {         
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}

//3.17


int main(void) {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;


    while (1) {

        printf("Enter account number (-1 to end): ");
        scanf_s("%d", &accountNumber);


        if (accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        scanf_s("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf_s("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf_s("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf_s("%f", &creditLimit);


        newBalance = beginningBalance + totalCharges - totalCredits;

        printf("\nAccount: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded.\n");
        }

        printf("\n");
    }

    return 0;
}




//3.18


int main(void) {
    float sales, salary;

    while (1) {

        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &sales);


        if (sales == -1) {
            break;
        }


        salary = 200 + sales * 0.09;


        printf("Salary is: $%.2f\n", salary);
    }

    return 0;
}


//3.19

int main(void) {

    float loanPrinciple, interestRate, loanInDays, interestCharge;


    while (1) {

        printf("Enter loan Principle (-1 to end): ");
        scanf_s("%f", &loanPrinciple);


        if (loanPrinciple == -1) {
            break;
        }

        printf("Enter interest rate: ");
        scanf_s("%f", &interestRate);

        printf("Enter term of the loan in days: ");
        scanf_s("%f", &loanInDays);

        interestCharge = (loanInDays / 365) * interestRate * loanPrinciple;

        printf("The interest charge is $%.2f \n", interestCharge);




        printf("\n");
    }

    return 0;
}


//3.20

int main(void) {

    float workhours, hourlyRate, salary;


    while (1) {

        printf("Enter # of hours worked (-1 to end): ");
        scanf_s("%f", &workhours);


        if (workhours == -1) {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf_s("%f", &hourlyRate);

        if (workhours <= 40)
        {
            salary = workhours * hourlyRate;
        }
        else {
            salary = 40 * hourlyRate + (workhours - 40) * 1.5 * hourlyRate;
        }

        printf("Salary is %.2f \n", salary);
        printf("\n");





    }

    return 0;
}


//4.27
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int a, b, c;

    // �T���_���j��A���թҦ��i�઺����զX
    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {  // b�qa�}�l�A�קK���ƲզX
            for (c = b; c <= 500; c++) {
                // �P�_�O�_����a^2 + b^2 = c^2
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);  // �C�L�ŦX������T����

                }
            }
        }
    }
    return 0;
}


//4.28

#define _CRT_SECURE_NO_WARNINGS

int main() {
    int code;  // �u��N�X
    double salary;  // �̲��~��

    printf("�п�J���u���u��N�X (1: �g�z, 2: ���~���u, 3: �~�ȭ��u, 4: ����p�S���u�H): ");
    scanf_s("%d", &code);

    switch (code) {
    case 1:
        // �g�z�T�w�~��
        printf("�п�J�g�z���C�g�~��: ");
        scanf_s("%lf", &salary);
        break;

    case 2: {
        // ���~���u�G�W�L40�p�ɳ�����1.5���u��
        double hourly_wage, hours_worked;
        printf("�п�J���~���u���C�p�ɤu��: ");
        scanf_s("%lf", &hourly_wage);
        printf("�п�J���~���u���u�@�ɼ�: ");
        scanf_s("%lf", &hours_worked);

        if (hours_worked > 40) {
            salary = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
        }
        else {
            salary = hours_worked * hourly_wage;
        }
        break;
    }

    case 3: {
        // �~�ȭ��u�G���~250�����[�P���B��5.7%����
        double sales;
        printf("�п�J�~�ȭ��u���P���B: ");
        scanf_s("%lf", &sales);
        salary = 250 + (sales * 0.057);
        break;
    }

    case 4: {
        // ����p�S���u�H�G�C�󲣫~��I�T�w���B
        double pay_per_item;
        int items_produced;
        printf("�п�J�C�󲣫~���u��: ");
        scanf_s("%lf", &pay_per_item);
        printf("�п�J�u�H���������~�ƶq: ");
        scanf_s("%d", &items_produced);
        salary = pay_per_item * items_produced;
        break;
    }

    default:
        printf("�L�Ī��u��N�X\n");
        return 1;
    }

    printf("�ӭ��u���C�g�~����: $%.2lf\n", salary);
    return 0;
}



//4.31

int main() {
    int i, j, n = 5; // n���٧Ϊ����ס]�q���ߨ쳻�ݪ��P����ơ^

    // �L�X�٧Ϊ��W�b����
    for (i = 1; i <= n; i++) {
        // �L�X�Ů�
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // �L�X�P��
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // ����
        printf("\n");
    }

    // �L�X�٧Ϊ��U�b����
    for (i = n - 1; i >= 1; i--) {
        // �L�X�Ů�
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // �L�X�P��
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // ����
        printf("\n");
    }

    return 0;
}

