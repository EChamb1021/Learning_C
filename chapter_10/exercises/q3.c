/* Classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* External Variables */
bool straight, flush, four, three;
int pairs; /* Can be 0,1, or 2 */

/* Prototypes */
void read_cards(int hand[NUM_CARDS][2]);
void analyze_hand(int hand[NUM_CARDS][2]);
void print_result(void);

//Calls read_cards, analyze_hand, and print_result repeatedly
int main(void){

    int hand[NUM_CARDS][2];

    for(;;){
        read_cards(hand);
        analyze_hand(hand);
        print_result();
        
        //Reset hand
        for(int i = 0; i < NUM_CARDS; i++){
            hand[i][0] = -1;
            hand[i][1] = -1;
        }
    }

    return 0;

}

//Reads the cards into the external variables num_in_rank and num_in_suit;
//Checks for bad cards and duplicate cards
void read_cards(int hand[NUM_CARDS][2]){

    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    while(cards_read < NUM_CARDS){
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();

        switch(rank_ch){

            case '0': exit(EXIT_SUCCESS);
            case '2': rank = 0; break;
            case '3': rank = 1; break;
            case '4': rank = 2; break;
            case '5': rank = 3; break;
            case '6': rank = 4; break;
            case '7': rank = 5; break;
            case '8': rank = 6; break;
            case '9': rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default: bad_card = true;

        }

        suit_ch = getchar();

        switch(suit_ch){
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default: bad_card = true;
        }

        while((ch = getchar()) != '\n'){
            if(ch != ' '){
                bad_card = true;
            }
        }

        if(bad_card){
            printf("Bad card; ignored.\n");
        }

        for(int i = 0; i < NUM_CARDS; i++){
            if(hand[i][0] == rank && hand[i][1] == suit){
                printf("Duplicate card; ignored.\n");
                bad_card = true;
            }
        }

        if(!bad_card){
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }

}

//Determines whether the hand contains a straight, flush, four-of-a-kind, and/or three-of-a-kind
//Determines the number of pairs
//stores the results into the external variables straight, flush, four, three and pair
void analyze_hand(int hand[NUM_CARDS][2]){

    int rank, suit;

    straight = false;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /* Check for flush */

    //Get suit of first card to reference
    suit = hand[0][1];

    for(int i = 0; i < NUM_CARDS; i++){
        //If any other card does not match the first suit, not a flush
        if(hand[i][1] != suit){
            flush = false;
        }
    }

    /* Check for straight */
    int next_card = 1;

    for(int i = 0; i < NUM_CARDS; i++){
        rank = hand[i][0];

        for(int j = 0; j < NUM_CARDS; j++){

            if(hand[j][0] == rank + next_card){
                next_card++;
                j = 0;
            }

            if(next_card == 5){
                straight = true;
                break;
            }
        }

        
    }

    /* Check for four of a kind, three of a kind, and pairs */
    int like_cards = 0;

    for(int i = 0; i < NUM_CARDS; i++){
        rank = hand[i][0];

        for(int j = 0; j < NUM_CARDS; j++){
            if(hand[j][0] == rank){
                like_cards++;
            }
        }

        switch(like_cards){
            case 4: four = true; break;
            case 3: three = true; break;
            case 2: pairs++; break;
        }

        like_cards = 0;

    }

    //Due to the way pairs are found, each true pair is counted twice. 
    //For this reason, the final number of pairs must be divided by 2
    pairs /= 2;

}

//Prints the classification of the hand based on the values of the external variables
// straight, flush, four, three, and pairs
void print_result(void){

    if(straight && flush){
        printf("Straight Flush.");
    }
    else if(four){
        printf("Four of a kind.");
    }
    else if(three && pairs == 1){
        printf("Full House.");
    }
    else if(flush){
        printf("Flush.");
    }
    else if(straight){
        printf("Straight.");
    }
    else if(three){
        printf("Three of a kind.");
    }
    else if(pairs == 2){
        printf("Two pair.");
    }
    else if(pairs == 1){
        printf("Pair.");
    }
    else{
        printf("High Card.");
    }

    printf("\n\n");

}


