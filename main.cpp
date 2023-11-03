#include <iostream>

int romanNumeralConverter(std::string roman)
{
    int result = 0;
    for(int i = 0 ; i < size(roman) ; i++)
    //0 , 1 , 2 , 3 , 4 , ...
    {
        int temp = 0;

        if(roman[i] == 'I')
        {
            if(roman[i+1] == 'V' || roman[i+1] == 'X')
                {temp += 1;temp *= -1;}
            else
                {temp += 1;}

            result += temp;
        }

        else if(roman[i] == 'V')
            {result += 5;}

        else if(roman[i] == 'X')
        {
            if(roman[i+1] == 'L' || roman[i+1] == 'C')
                {temp += 10;temp *= -1;}
            else
                {temp += 10;}

            result += temp;
        }

        else if(roman[i] == 'L')
            {result += 50;}

        else if(roman[i] == 'C')
        {
            if(roman[i+1] == 'D' || roman[i+1] == 'M')
                {temp += 100;temp *= -1;}
            else
                {temp += 100;}

            result += temp;
        }

        else if(roman[i] == 'D')
            {result += 500;}

        else //roman[i] == 'M' (1000)
            {result += 1000;}
    }
    return result;
}

int main()
{
    std::string romanInput;
    std::cout<<"Enter the roman numeral:\n";
    std::cin>>romanInput;
    std::cout<<romanNumeralConverter(romanInput);
}