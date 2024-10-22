#include <stdio.h>
#include <math.h>

 //第3.33題
int main() 
{
    int length, breadth;
    printf("請輸入長度和寬度(用空白鍵隔開)：");
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


//第4.15題
int main(void) {
    double amount;         // 每年末的存款金額
    double principal = 5000.0;  // 初始投資金額
    double rate;           // 年利率

    for (rate = 10.0; rate <= 12.0; rate += 0.5) 
    {
        printf("利率：%.1f%%\n", rate);

        printf("%4s%21s\n", "年份", "存款金額");

        for (unsigned int year = 1; year <= 15; ++year) 
        {
            amount = principal * pow(1.0 + rate / 100, year);

            printf("%4u%21.2f\n", year, amount);
        }

        printf("\n");  
    }

    return 0;
}


//第4.16題
int main() 
{
    int i, j;

    // 圖案 (A)
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

    // 圖案 (B)
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

    // 圖案 (C)
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

    // 圖案 (D)
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

    // 三重巢狀迴圈，嘗試所有可能的邊長組合
    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {  // b從a開始，避免重複組合
            for (c = b; c <= 500; c++) {
                // 判斷是否滿足a^2 + b^2 = c^2
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);  // 列印符合的畢氏三元數

                }
            }
        }
    }
    return 0;
}


//4.28

#define _CRT_SECURE_NO_WARNINGS

int main() {
    int code;  // 工資代碼
    double salary;  // 最終薪資

    printf("請輸入員工的工資代碼 (1: 經理, 2: 時薪員工, 3: 業務員工, 4: 按件計酬的工人): ");
    scanf_s("%d", &code);

    switch (code) {
    case 1:
        // 經理固定薪水
        printf("請輸入經理的每週薪水: ");
        scanf_s("%lf", &salary);
        break;

    case 2: {
        // 時薪員工：超過40小時部分為1.5倍工資
        double hourly_wage, hours_worked;
        printf("請輸入時薪員工的每小時工資: ");
        scanf_s("%lf", &hourly_wage);
        printf("請輸入時薪員工的工作時數: ");
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
        // 業務員工：底薪250美元加銷售額的5.7%提成
        double sales;
        printf("請輸入業務員工的銷售額: ");
        scanf_s("%lf", &sales);
        salary = 250 + (sales * 0.057);
        break;
    }

    case 4: {
        // 按件計酬的工人：每件產品支付固定金額
        double pay_per_item;
        int items_produced;
        printf("請輸入每件產品的工資: ");
        scanf_s("%lf", &pay_per_item);
        printf("請輸入工人完成的產品數量: ");
        scanf_s("%d", &items_produced);
        salary = pay_per_item * items_produced;
        break;
    }

    default:
        printf("無效的工資代碼\n");
        return 1;
    }

    printf("該員工的每週薪水為: $%.2lf\n", salary);
    return 0;
}



//4.31

int main() {
    int i, j, n = 5; // n為菱形的高度（從中心到頂端的星號行數）

    // 印出菱形的上半部分
    for (i = 1; i <= n; i++) {
        // 印出空格
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // 印出星號
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // 換行
        printf("\n");
    }

    // 印出菱形的下半部分
    for (i = n - 1; i >= 1; i--) {
        // 印出空格
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // 印出星號
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // 換行
        printf("\n");
    }

    return 0;
}

