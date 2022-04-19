#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CPlayingCard{
private:
    string suite;
    string rank;
public:
    CPlayingCard(){}
    CPlayingCard(int tenQuan, int tenBo){
        switch(tenBo){
            case 1:
                suite = "Heart";
                break;
            case 2:
                suite = "Diamond";
                break;
            case 3:
                suite = "Club";
                break;
            case 4:
                suite = "Spade";
                break;
        }

        switch(tenQuan){
            case 1: 
                rank = "Ace";
                break;
            case 11:
                rank = "Jack";
                break;
            case 12:
                rank = "Queen";
                break;
            case 13:
                rank = "King";
                break;
            default:
                rank = to_string(tenQuan);
        }
    }

    void Print(){
        cout << rank + " of " + suite << endl;
    }
    friend class CPlayingDeck;
};

class CPlayingDeck{
private:
    vector<CPlayingCard> cards;
    int n;
public:
    CPlayingDeck(){
        n = 52;
        for(int i = 1; i <= 13; i++){ // tenQuan
            for(int j = 1; j <= 4; j++){ //tenBo
                CPlayingCard temp(i,j);  // tenQuan of  tenBo
                cards.push_back(temp);
            }
        }
    }

    void Print(){
        for(int i = 0; i < n; i++){
            cards[i].Print();
        }
    }

    CPlayingCard DrawRandom(){
        int i = rand() % n;
        CPlayingCard card = cards[i];

        for(int j = i; j < n-1; j++){
            cards[j] = cards[j+1];
        }
        n--;
        return card;
    }
};

int main(){
    // CPlayingCard c1(2, 11); c1.Print();   //   kết quả:  Jack of Diamond
    // CPlayingCard c2(3, 1); c2.Print();   // kết quả: Ace of Club
    // CPlayingCard c3(3, 5); c3.Print();   // kết quả: 5 of Club
    CPlayingDeck deckCards;
    // deckCards.Print();
    deckCards.DrawRandom().Print();
    return 0;
}