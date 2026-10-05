#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    //{
    //    int num1, num2, num3, num4, num5, num6, num7 = 0;
    //    cout << "\nВедіть перше число: ";
    //    cin >> num1;
    //    cout << "\nВедіть друге число: ";
    //    cin >> num2;
    //    cout << "\nВедіть третє число: ";
    //    cin >> num3;
    //    cout << "\nВедіть четверте число: ";
    //    cin >> num4;
    //    cout << "\nВедіть п'яте число: ";
    //    cin >> num5;
    //    cout << "\nВедіть шосте число: ";
    //    cin >> num6;
    //    cout << "\nВедіть сьоме число: ";
    //    cin >> num7;


    //    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6 && num1 > num7) {
    //        cout << "\nНайбільше число: " << num1;
    //    }
    //    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6 && num2 > num7) {
    //        cout << "\nНайбільше число: " << num2;
    //    }
    //    else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num3 > num6 && num3 > num7) {
    //        cout << "\nНайбільше число: " << num3;
    //    }
    //    else if (num4 > num1 && num4 > num3 && num4 > num3 && num4 > num5 && num4 > num6 && num4 > num7) {
    //        cout << "\nНайбільше число: " << num4;
    //    }
    //    else if (num5 > num1 && num5 > num3 && num5 > num4 && num5 > num2 && num5 > num6 && num5 > num7) {
    //        cout << "\nНайбільше число: " << num5;
    //    }
    //    else if (num6 > num1 && num6 > num3 && num6 > num4 && num6 > num5 && num6 > num2 && num6 > num7) {
    //        cout << "\nНайбільше число: " << num6;
    //    }
    //    else {
    //        cout << "\nНайбільше число: " << num7;
    //    }  
    //}






    //{
    //    int a_b = 0;
    //    int b_c = 0;
    //    int weight = 0;
    //    const int fuel = 300;
    //    int fuel_ab = 0;
    //    int max_fuel = 0;
    //    cout << "Ведіть вагу вантажу: ";
    //    cin >> weight;
    //    cout << "\nВедіть відстань між пунктом А і B: ";
    //    cin >> a_b;
    //    cout << "\nВедіть відстань між пунктом B і C: ";
    //    cin >> b_c;

    //    if (weight < 2001) {

    //        if (weight < 500) {
    //            if (a_b < 300 && b_c < 300) {
    //                fuel_ab = fuel - a_b;
    //                max_fuel = b_c - fuel_ab;
    //                cout << "Мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С = " << max_fuel << " літрів";

    //            }
    //            else {
    //                cout << "Польот провести неможливо.";
    //            }
    //        }
    //        else if (weight < 1000) {
    //            if (a_b < 300 / 4 && b_c < 300 / 4) {
    //                fuel_ab = fuel / 4 - a_b;
    //                max_fuel = b_c - fuel_ab;
    //                cout << "Мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С = " << max_fuel << " літрів";

    //            }
    //            else {
    //                cout << "Польот провести неможливо.";
    //            }
    //        }
    //        else if (weight < 1500) {
    //            if (a_b < 300 / 7 && b_c < 300 / 7) {
    //                fuel_ab = fuel / 7 - a_b;
    //                max_fuel = b_c - fuel_ab;
    //                cout << "Мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С = " << max_fuel << " літрів";

    //            }
    //            else {
    //                cout << "Польот провести неможливо.";
    //            }
    //        }
    //        else if (weight < 2000) {
    //            if (a_b < 300 / 9 && b_c < 300 / 9) {
    //                fuel_ab = fuel / 9 - a_b;
    //                max_fuel = b_c - fuel_ab;
    //                cout << "Мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С = " << max_fuel << " літрів";

    //            }
    //            else {
    //                cout << "Польот провести неможливо.";
    //            }
    //        }
    //    }
    //    else {
    //        cout << "Максимальна вага вантажу 2000кг";
    //    }
    //}







    //{
    //    int sales_level_1, sales_level_2, sales_level_3 = 0;
    //    float total_cash_1 = 200, total_cash_2 = 200, total_cash_3 = 200;

    //    cout << "\nВедіть рівень продажу першого менеджера: ";
    //    cin >> sales_level_1;

    //    cout << "\nВедіть рівень продажу другого менеджера: ";
    //    cin >> sales_level_2;

    //    cout << "\nВедіть рівень продажу третього менеджера: ";
    //    cin >> sales_level_3;

    //    if (sales_level_1 < 500) {
    //        total_cash_1 += (3 * sales_level_1) / 100;
    //    }
    //    else if (sales_level_1 >= 500 && sales_level_1 < 1000) {
    //        total_cash_1 += (5 * sales_level_1) / 100;
    //    }
    //    else if (sales_level_1 >= 1000) {
    //        total_cash_1 += (8 * sales_level_1) / 100;
    //    }



    //    if (sales_level_2 < 500) {
    //        total_cash_2 += (3 * sales_level_2) / 100;
    //    }
    //    else if (sales_level_2 >= 500 && sales_level_2 < 1000) {
    //        total_cash_2 += (5 * sales_level_2) / 100;
    //    }
    //    else if (sales_level_2 >= 1000) {
    //        total_cash_2 += (8 * sales_level_2) / 100;
    //    }


    //    if (sales_level_3 < 500) {
    //        total_cash_3 += (3 * sales_level_3) / 100;
    //    }
    //    else if (sales_level_3 >= 500 && sales_level_3 < 1000) {
    //        total_cash_3 += (5 * sales_level_3) / 100;
    //    }
    //    else if (sales_level_3 >= 1000) {
    //        total_cash_3 += (8 * sales_level_3) / 100;
    //    }

    //    if (total_cash_1 > total_cash_2 && total_cash_1 > total_cash_3) {
    //        total_cash_1 += 200;
    //    }
    //    else if (total_cash_2 > total_cash_1 && total_cash_2 > total_cash_3) {
    //        total_cash_2 += 200;
    //    }
    //    else if (total_cash_3 > total_cash_1 && total_cash_3 > total_cash_2) {
    //        total_cash_3 += 200;
    //    }
    //    else {
    //        cout << "\nУ всіх однакова ЗП";
    //    }

    //    cout << "\nЗагальна сума у першого менеджера: " << total_cash_1;
    //    cout << "\nЗагальна сума у другого менеджера: " << total_cash_2;
    //    cout << "\nЗагальна сума у третьго менеджера: " << total_cash_3;
    //   
    //}







    {
        int lateness = 0;
        int menu = 0;
        int earnings = 0;
        int lines = 0;
        int remnant = 0;
        cout << "\t\t\t\t\t\t<<Меню>>";
        cout << "\n\t\t\t\t''Щоб виконати дію, веддіть номер дії''";
        cout << "\n1.  Розрахунок кількості рядків коду за доходом і запізненнями";
        cout << "\n2.  Розрахунок допустимих запізнень за кількістю рядків і зарплатою";
        cout << "\n3.  Розрахунок заробітку та перевірка виплати грошей";

        cout << "\nВедіть номер обраної дії: ";
        cin >> menu;

        if (menu == 1 || menu == 2 || menu == 3) {
            if (menu == 1) {
                cout << "\nВедіть бажаний дохід Васі: ";
                cin >> earnings;
                cout << "\nВедіть кількість запізнень Васі: ";
                cin >> lateness;
                cout << "Для отримання бажаної зарплати <<" << earnings << ">>, Васі треба написати " << (earnings + (lateness * 20)) / 50 * 100 << "рядків коду";
            }
            
            else if (menu == 2) {
                cout << "Ведіть кількість рядків коду написаних Васею: ";
                cin >> lines;
                cout << "Ведіть бажаний дохід Васі: ";
                cin >> earnings;
                remnant = (lines / 100 * 50) - earnings;
                if (remnant >= 20) {
                    remnant = remnant / 20;
                    cout << "Вася може запізнитися " << remnant << " разів";
                }
                else {
                    cout << "Вася не може запізнюватися";
                }
                

            }


            else if (menu == 3) {
                cout << "Ведіть кількість рядків коду написаних Васею: ";
                cin >> lines;
                cout << "\nВедіть кількість запізнень Васі: ";
                cin >> lateness;
                
                remnant = (lines / 100 * 50) - (lateness * 20);
                if (remnant > 0) {
                    cout << "Вася отримає зарплату у розмірі " << remnant << "$";
                }
                else if (remnant == 0) {
                    cout << "Вася не отримає зарплату.";
                }
                else {
                    cout << "Вася повинен заплатити своїй компанії гроші.";
                }

            }
        }
        





    }




    

    

}






