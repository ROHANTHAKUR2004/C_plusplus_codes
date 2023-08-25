#include<iostream>
using namespace std;

class player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }

    void sethealth(int health){
        this->health = health;
    }
    void setage(int age){
        this->age = age;
    }
    void setscore(int score){
        this->score = score;
    }
    void setisalive(bool alive){
        this->alive = alive;
    }
};



    int addscore(player a,player b){
        return a.getscore() + b.getscore();
    }





    int main(){

        player harsh;
        player raghav;

        harsh.setage(21);
        harsh.setscore(100);
        harsh.setisalive(true);
        harsh.sethealth(70);

        raghav.setage(22);
        raghav.setscore(20);
        raghav.setisalive(true);
        raghav.sethealth(100);

        cout<<addscore(harsh , raghav);



    }