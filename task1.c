/*
Я реалізував калькулятор так щоб після виводу результату можно продовжувати ще далі 
з ним працюати поки користувач не натисне 0. Завдяки цьому можно вирішити декілька дій
за раз, непочинаючи кожен раз програму знову і вирішувати такі рівняння як: 10+2-5... і так далі
*/

#include <stdio.h>

int main() {
    float n1, n2, rezult;
    char action = '1';
    printf("Enter first digit: \n"); //перше число
    scanf(" %f", &n1);

    while ( action != '0') //цикл поки користувач 0 не напице
    {
        printf("Enter next action: (to stop type 0)\n");
        scanf(" %c", &action); //введеля дії

        if(action == '0' || action == '+' || action == '-' || action == '*' || action == '/'){ //перевірка на допустимі символи
            if (action == '0'){//завершення програми
                return 0;
            }

            printf("Enter next digit: \n"); //наступне число
            scanf(" %f", &n2);
            //далі дії додавання, віднімання і так далі
            if(action == '+'){ 
                rezult = n1 + n2;
                n1 = rezult; 
                printf("Rezult: %f", rezult);
                printf("\n");
            }

            if(action == '-'){
                rezult = n1 - n2;
                n1 = rezult;
                printf("Rezult: %f", rezult);
                printf("\n");
            }

            if(action == '*'){
                rezult = n1 * n2;
                n1 = rezult;
                printf("Rezult: %f", rezult);
                printf("\n");
            }

            if(action == '/'){
                if(n2 == 0){ // перевірка на 0 при діленні
                    printf("\nYou can't divide by 0. Try one more time \n");
                    printf("Rezult: %f", rezult);
                    printf("\n");
                }
                else {
                    rezult = n1 / n2;
                    n1 = rezult;
                    printf("Rezult: %f", rezult);
                    printf("\n");
                }
            }
        }
        else {
            printf("\nUnknown action. Try one more time \n"); //помилка якщо невідому дію користувач ввів
        }

    }
}