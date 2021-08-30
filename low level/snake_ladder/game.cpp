#include<bits/stdc++.h>
#include "ladder_class.cpp"
#include "snake_class.cpp"
#include "game_status.cpp"
using namespace std;

class Board {
    public:
    int size1;
    int num_ladder;
    int num_snakes;
    int num_dice;
    Game_status game_status;

    //use vector for array of snakes
    // vector<snake>snakes;
    // snake *snakes;
    // snake snakes[100];
    // ladder ladders[100];
    snake *snakes;
    vector<ladder>ladders;

    Board(){
        size1=100;
        num_snakes=100;
        num_dice=1;
        game_status = CANCEL;
    }
    void setNumSnake(int num_snakes) {
        try {
            if(num_snakes<0){
                throw num_snakes;
                // throw "sunil";  this will call default exception
            }
        this->num_snakes = num_snakes;
        snakes = new snake[num_snakes];

        }
        catch (int x){
            cout<<"num snake never be less than 0\n";
        }
        catch(...){
            //this will call if we throw "sunil", and above catch can not handle it because it take interger
            cout<<"default Exception\n";
        }
    }
    void setSnake(snake *snakes){
        this->snakes=snakes;
    }
    void insert_ladder(int start, int end){
        ladder temp = ladder(start,end);
        ladders.push_back(temp);
    }
    void printLadders(){
        for(int i=0;i<ladders.size();i++){
            cout<<ladders[i].start<<" "<<ladders[i].end<<"\n";
        }
    }
};