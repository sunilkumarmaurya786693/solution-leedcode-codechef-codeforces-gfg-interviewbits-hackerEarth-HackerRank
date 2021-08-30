#include<bits/stdc++.h>
#include "game.cpp"

using namespace std;

int main(){
    Board *b1= new Board();
    b1->setNumSnake(-12);
    cout<<b1->num_snakes<<"\n";
    cout<<b1->game_status<<"\n";

    b1->insert_ladder(2,4);
    b1->insert_ladder(6,9);
    b1->printLadders();
    // snake *s1 = new snake(2,5);
    // cout<<s1->start<<" "<<s1->end;
    // s1->print();

    // int arr[5];
    // snake snakes[2];
    // for(int i=0;i<2;i++){
    //     snakes[i].start=i;
    //     snakes[i].end=i*10;
    //     cout<<snakes[i].start<<" "<<snakes[i].end<<"\n";
    // }
    
}