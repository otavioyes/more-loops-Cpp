/*

* 1. for - ok
* 2. while - ok
* 3. do while -
*
* 4.goto
*/

//Loops serve para pensar de onde estou, até onde quero chegar e como vou chegar, entendendo isso, posso
//decidir da melhor qual loop usar para o objetivo


//De onde estou
//Onde quero chegar
//Como vou chegar

#include <iostream>
#include <queue>



int main()
{

    //o laço for se adequada melhor quando eu sei de onde estou e sei até onde chegar e quero
    //fazer isso de um em um.

    for (int i = 0, x = 1; i < 10, x < 10; ++i, ++x)
    {
        std::cout << i << ' ' << x <<  std::endl;
        ++i;
       // if(i > 9)
         //   break;
    }


    //o loop while serve para saber quantos de determinado dado/elemento eu tenho, ou seja,
    //quando eu não sei a quantidade eu posso usar o while
    std::queue<int> q ({0, 1,2,3,4,5, 87, 100});


    while(!q.empty())
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }

    //O "do while" eu uso quando eu quero garantir que determinado conjunto seja executado pelo menos uma vez.
    //o "do while" valida as instruções no final.
    //eu faço o uso do do while quando eu quero garantir que o conjunto de instruções seja executado pelo menos uma vez.
    char cont;
    do
    {
        std::string name;
        std::cout << "Type your name: ";
        std::cin >> name;

        std::cout << name << '!' << std::endl;
        std::cout << "\n Do you want continue? Press Y/n (YES) or N/n (NO):";
        std::cin >> cont;

    }while(cont == 'Y');



    //o "goto" serve para simular um loop também
    int i {0};
BEGIN:
    std::cout << i << '\n';

    if(++i < 20){
        goto BEGIN;
    }


    const std::string pass("ABCD");
    int cout {0};

    for(char a = 'A'; a <= 'Z'; ++a)
    {
        for(char b = 'A'; b <= 'Z'; ++b)
        {
            for(char c = 'A'; c <= 'Z'; ++c)
            {
                for(char d = 'A'; d <= 'Z'; ++d)
                {
                const std::string temPass({a, b, c, d});
                std::cout << temPass << std::endl;
                cout++; //INCREMENTA O CONTADOR A CADA COMBINAÇÃO
                if(temPass == pass)
                {
                    std::cout <<"\n\n\n\t Password found: " << temPass << std::endl;
                    std::cout << "Total of combinations: " << cout << std::endl;
                    goto END;
                }
                }
            }
        }
    }

END:;



    return 0;

}
