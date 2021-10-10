#include <iostream>
#include <vector>
#include <algorithm>

void s_increase (std::vector<int> vec,int size)
{
    for (int i = 0; i < size; ++i)
    {
        int min = i;

        for (int j = 0; j <size; ++j)
        {
            if (vec[j] > vec[min])
            {
                    min = j;
                std::swap(vec[i], vec[min]);
            }

        }

    }

    for ( auto &a : vec)
    {
        std::cout<< a << " ";
    }


}

void s_waning (std::vector<int> vec,int size) {
    for (int i = 0; i < size; ++i)
    {
        int min = i;

        for (int j = 0; j <size; ++j)
        {
            if (vec[j] < vec[min])
            {
                min = j;
                std::swap(vec[i], vec[min]);
            }

        }

    }

    for ( auto &a : vec)
    {
        std::cout<< a << " ";
    }

}


//перегрузка оператора №1
void print (std::vector<int> el3)
{
    for (int &v : el3)
    {
        std::cout << v << ' ';

    }
}

std::vector<int> operator+(std::vector<int> el,std::vector<int> el2)
{

    std::vector<int> newEl;
    for (size_t i = 0; i < el.size(); ++i)
    {
        newEl.push_back(el[i] + el2[i]);
    }
    return newEl;


}

/////////////////////////////////////////////////////////////////////////

int main()
{

std::cout << "enter the size of the vector :"<< std::endl; //введите размер вектора
    int size;
    std::cin>>size;

std::vector<int> vec(size);

std::cout<< "fill the vector with elements \n"; //заполните вектор элементами

    for (int i = 0; i < size; ++i)
    {
        std::cout<< "Enter item № " << i << " : "; //Введите элемент №
        std::cin >> vec[i];
        std::cout<< "Element № " << i <<" = " << vec[i] << std::endl << std::endl; //Элемент №
    }

std::cout<< "choose the sorting type : "<<std::endl; //выберете тип сортировки
    std::cout<< " 0. ascending   "<<std::endl; //0. по возрастанию
    std::cout<< " 1. descending   "<<std::endl; //1. по убыванию

    int w;
    std::cin>>w;

    if(w==0)
    {
        s_increase(vec,size);
        std::cout<<"\n\n";
    }

    else if (w==1)
    {
        s_waning(vec,size);
        std::cout<<"\n\n";
    }

    else
    {
        std::cout<<"type undefined. Try again"<<std::endl; //тип не определен. Повторите попытку
    }

    // №2
int x;
    std::cout << "enter vector size №1 :"<< std::endl; //введите размер вектора №1
    std::cin>>x;

    std::vector<int> el(x);


    std::cout<< "fill vector № 1 with elements \n";  // заполните вектор номер 1 элементами

    for (int i = 0; i < x; ++i)
    {

        std::cout<< "Enter item № " << i << " : "; // Введите элемент №
        std::cin >> el[i];
        std::cout<< "element № " << i <<" = " << el[i] << std::endl << std::endl; // элемент №
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int y;
    std::cout << "enter vector size №1 :"<< std::endl; //введите размер вектора №1
    std::cin>>y;

    std::vector<int> el2(y);


    std::cout<< "fill vector № 2 with elements \n";      // заполните вектор №2 элементами

    for (int i = 0; i < y; ++i)
    {

        std::cout<< "Enter item № " << i << " : "; // Введите элемент №
        std::cin >> el2[i];
        std::cout<< "element № " << i <<" = " << el2[i] << std::endl << std::endl; // Элемент №
    }


    std::cout<<"elementwise addition of 2 vectors :"<<std::endl; //поэлементное сложение 2-х векторов

    print(el+el2);

    std::cout<< "\n\n";

// №3

std::cout<< "select the operating mode of the program "<<std::endl;  //выбирете режим работы пограммы
    std::cout<< " 1. first mode \n "<<" 2. second mode \n " <<std::endl; //1. первый режим  // 2. второй режим
    int v;
    std::cin>>v;

    if(v==1)
    {
        std::cout << "enter the size of the vector :" << std::endl;  //введите размер вектора
        int s;
        std::cin >> s;

        std::vector<int> dVec(s);

        std::cout << "fill the vector with elements \n"; //заполните вектор элементами

        for (int i = 0; i < s; ++i)
        {

            std::cout << "Enter item № " << i << " : "; //Введите элемент №
            std::cin >> dVec[i];
        }

        std::cout<< "your vector :"<<std::endl; //ваш вектор

        for (int i = 0; i < s; ++i)
        {
            std::cout<< dVec[i]<< " ";
        }

        std::cout << "\n\n";

        std::cout << "choose the sorting type : " << std::endl; // выберете тип сортировки
        std::cout << " 0. Ascending  " << std::endl;  //0. по возрастанию
        std::cout << " 1.descending  " << std::endl; //1. по убыванию

        std::cin >> w;

        if (w == 0)
        {
            s_increase(dVec, s);
            std::cout << "\n\n";
        }

        else if (w == 1)
        {
            s_waning(dVec, s);
            std::cout << "\n\n";
        }

        else
        {
            std::cout << "type undefined. Try again" << std::endl; //тип не определен. Повторите попытку
        }

    }

    else if (v==2)
    {
        std::cout<<"size 2 vectors :"<<std::endl; //задайте размер 2-м векторам
        int r;

        std::cin>>r;

        std::vector<int> first (r);
        std::vector<int> second (r);

        std::cout<<"fill the 1-st vector with elements "<<std::endl; //заполните 1-й вектор элементами

        for (int i = 0; i < r; ++i)
        {
            std::cout << "Enter item № " << i << " : "; //Введите элемент №
            std::cin >> first[i];
        }

        std::cout<< "your vector :"<<std::endl; //ваш вектор

        for (int i = 0; i < r; ++i)
        {
            std::cout<< first[i]<< " ";
        }

        std::cout << "\n\n";

        std::cout<<"fill the 2-nd vector with elements "<<std::endl<<std::endl; //заполните 2-й вектор элементами

        for (int i = 0; i < r; ++i)
        {
            std::cout << "Enter item № " << i << " : "; //Введите элемент №
            std::cin >> second[i];
        }

        std::cout<< "your vector :"<<std::endl; //ваш вектор

        for (int i = 0; i < r; ++i)
        {
            std::cout<< second[i]<< " ";
        }

        std::cout << "\n\n";

        std::cout<<"elementwise addition of 2 vectors :"<<std::endl; //поэлементное сложение 2-х векторов

        print(first+second);

    }

    else
    {
        std::cout<< "the program mode is not defined. Try again"<<std::endl;
        //режим программы не определен. Повторите попытку
    }


    return 0;
}
