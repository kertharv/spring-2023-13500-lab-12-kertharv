/** 
* Spring 2023 - Lab 12
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include "funcs.h"

int main(){

    //Task A
    std::vector<int> vector1 = makeVector(10);
    std::cout << vector1.size() << "\n";

    //Task B
    std::vector<int> vector2{10, 20, -30, 40, -20, -100, 90, 200, -10};
    std::vector<int> vectorVibes = goodVibes(vector2);
    for(int i = 0; i < vectorVibes.size(); i++)
    {
        std::cout << vectorVibes.at(i) << ", ";
    }
    std::cout << "\n";

    //Task C
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1, v2);
    for(int i = 0; i < v1.size(); i++)
    {
        std::cout << v1.at(i) << ", ";
    }
    std::cout << "\n";

    //Task D
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};
    std::vector<int> vector3 = sumPairWise(v3, v4);
        for(int i = 0; i < vector3.size(); i++)
        {
        std::cout << vector3.at(i) << ", ";
    }
    std::cout << "\n";
    return 0;
}