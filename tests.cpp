/** 
* Spring 2023 - Lab 12
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("TASK A")
{
    std::vector<int> vector1 = makeVector(20);
    CHECK(vector1.size() == 19);
    for(int i = 0; i < vector1.size(); i++)
    {
        CHECK(vector1.at(i) == i);
    }

    std::vector<int> vector2 = makeVector(75);
    CHECK(vector2.size() == 74);
    for(int i = 0; i < vector2.size(); i++)
    {
        CHECK(vector2.at(i) == i);
    }

    std::vector<int> vector3 = makeVector(0);
    CHECK(vector3.size() == 0);
}

TEST_CASE("TASK B")
{
std::vector<int> vectorVibes = goodVibes({10, 20, -30, 40, -20, -100, 90, 200, -10, 32, 45, 213, -526, -482, 487});
std::vector<int> correctVector = {10, 20, 40, 90, 200, 32, 45, 213, 487};
std::vector<int> vectorVibes2 = goodVibes({-123, 0, 21, -30489, -213, -5435, -325432, -135, -11, 1343});
std::vector<int> correctVector2 = {0, 21, 1343};

CHECK(vectorVibes == correctVector);
CHECK(vectorVibes2 == correctVector2);
}

TEST_CASE("TASK C")
{
std::vector<int> v1{1,2,3};
std::vector<int> v2{4,5};
std::vector<int> v3{4,5};
std::vector<int> v4{1,2,3};
std::vector<int> v5{-10,14,23,5,6,23,241,10};
std::vector<int> v6{96,23,46,11,-100,213,-213};
std::vector<int> correct{1,2,3,4,5};
std::vector<int> correct2{4,5,1,2,3};
std::vector<int> correct3{-10,14,23,5,6,23,241,10,96,23,46,11,-100,213,-213};
gogeta(v1, v2);
gogeta(v3, v4);
gogeta(v5, v6);

CHECK(v1 == correct);
CHECK(v2.empty());
CHECK(v3 == correct2);
CHECK(v4.empty());
CHECK(v5 == correct3);
CHECK(v6.empty());
}

TEST_CASE("TASK D")
{
    std::vector<int> v1{30,-10,40,50};
    std::vector<int> v2{40,50,10,20,40,60};
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};
    std::vector<int> v5{-10, -200, -1, 230, 40, 0, 0, 100};
    std::vector<int> v6{4, 2, 300, 100, 20};
    std::vector<int> correct{70,40,50,70,40,60};
    std::vector<int> correct2{5,7,3};
    std::vector<int> correct3{-6,-198,299,330,60,0,0,100};

    CHECK(sumPairWise(v1, v2) == correct);
    CHECK(sumPairWise(v3, v4) == correct2);
    CHECK(sumPairWise(v5, v6) == correct3);
}