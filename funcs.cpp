/** 
* Spring 2023 - Lab 12
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include "funcs.h"

//Task A
std::vector<int> makeVector(int n)
{
    std::vector<int> newVector;
    for(int i = 0; n > 0 && i < n - 1; i++)
    {
       newVector.push_back(i);
    }
    return newVector;
}

//Task B
std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector<int> newVector;
    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) >= 0)
        {
            newVector.push_back(v.at(i));
        }
    }
    return newVector;
}

//Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    std::vector<int> newVector;
    for(int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta.at(i));
    }
    vegeta.clear();
}

//Task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    std::vector<int> newVector, larger, smaller;
    if(v1.size() > v2.size())
    {
        larger = v1;
        smaller = v2;
    }
    else
    {
        larger = v2;
        smaller = v1;
    }

    for(int i = 0; i < larger.size(); i++)
    {
        if(i < smaller.size()){
            newVector.push_back(larger.at(i) + smaller.at(i));
        }
        else
        {
            newVector.push_back(larger.at(i));
        }

    }

    return newVector;
}