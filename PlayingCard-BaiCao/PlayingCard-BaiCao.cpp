#include <iostream>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

class CPlayingCard{
private:
    string suite;
    string rank;
    int val;
public:
    CPlayingCard(){}
    CPlayingCard(int tenQuan, int tenBo){
        if(tenQuan == 11 || tenQuan == 12 || tenQuan == 13) this->val = 10;
        else this->val = tenQuan;

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

    }

    // void Print(){
    //     cout << rank + " of " + suite << endl;
    // }

    int getVal(){
        return this->val;
    }
    friend class CPlayingDeck;
    friend ostream& operator<<(ostream& COUT, CPlayingCard& ps);
};

ostream& operator<<(ostream& COUT, CPlayingCard& card){
    COUT << card.rank + " of " + card.suite << endl;
    return COUT;
}
class CPlayingDeck{
private:
    vector<CPlayingCard> cards;
    int n;
public:
    CPlayingDeck(){
        srand(time(NULL));  //Khoi dong bo ngau nhien
        n = 52;
        for(int i = 1; i <= 13; i++){ // tenQuan
            for(int j = 1; j <= 4; j++){ //tenBo
                CPlayingCard temp(i,j);  // tenQuan of  tenBo
                cards.push_back(temp);
            }
        }
    }

    // void Print(){
    //     for(int i = 0; i < n; i++){
    //         // cards[i].Print();
    //         cout << cards[i];
    //     }
    // }

    CPlayingCard DrawRandom(){
        int i = rand() % n;
        CPlayingCard card = cards[i];

        for(int j = i; j < n-1; j++){
            cards[j] = cards[j+1];
        }
        n--;
        return card;
    }
    friend ostream& operator<<(ostream& COUT, CPlayingDeck& deck);
};

ostream& operator<<(ostream& COUT, CPlayingDeck& deck){
    for(int i = 0; i < deck.n; i++){
        // cards[i].Print();
        cout << deck.cards[i];
    }
    return COUT;
}

class CPlayer{
private:
    int score;
    CPlayingCard cards[3];
public:
    CPlayer(){}
    void DrawHand(CPlayingDeck& deckCards){
        score = 0;
        for(int j = 1; j <= 3; j++){ 
            CPlayingCard tempCard = deckCards.DrawRandom();
            // tempCard.Print();
            cout << tempCard;
            score += tempCard.getVal(); 
        }
        cout << "Score: " << score % 10 << '\n';
    }
};

int main(){
    CPlayingDeck deckCards;
    int n, score;

    cout << "Enter the number of player: ";
    do{
        cin >> n;
        if(n > 17) cout <<  "\nNot enough card for " << n << " players\nPlease enter again: ";
    }while(n > 17);

    for(int i = 1; i <= n ; i ++){
        CPlayer players; 
        // score = 0;
        cout << "-----------------------------\n";
        cout << "Player " << i << ":\n";
        players.DrawHand(deckCards);
        // // Each players take 3 random cards
        // for(int j = 1; j <= 3; j++){ 
        //     CPlayingCard tempCard = deckCards.DrawRandom();
        //     // tempCard.Print();
        //     cout << tempCard;
        //     score += tempCard.getVal(); 
        // }
        // cout << "Score: " << score % 10 << '\n';
        cout << "-----------------------------\n\n";
    }

    cout << "The remaining cards: " << endl << deckCards;
    // deckCards.Print();

    return 0;
}