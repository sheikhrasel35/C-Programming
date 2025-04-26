#include <stdio.h>
int main()
{

    int basic_salary ;
    int hra , da , ta , bonus = 0, t_salary ;

    scanf("%d", &basic_salary);

    hra = ( 20 * basic_salary )/ 100;
    da =  (15 * basic_salary ) / 100;
    ta = (10 * basic_salary ) / 100;

    t_salary = basic_salary + hra + da + ta ;

    if (t_salary > 50000)
    {
        bonus = ( 5 * t_salary ) / 100;
        t_salary += bonus;
    }

    printf("HRA = %d \n", hra) ;
    printf("DA = %d \n", da ) ;
    printf("TA = %d \n", ta) ;
    printf("Total Salary = %d \n", t_salary ) ;

    return 0;
}
