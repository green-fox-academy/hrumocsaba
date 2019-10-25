#include <stdio.h>

typedef struct lottery{
    int year;
    int sorsolas_counter;
    char date[30];
    int five_hit_count;
    char five_hit_money[30];
    int four_hit_count;
    char four_hit_money[30];
    int three_hit_count;
    char three_hit_money[30];
    int two_hit_count;
    char two_hit_money[30];
    int one_hit_count;
    char one_hit_money[30];
    int sorsoled_number1;
    int sorsoled_number2;
    int sorsoled_number3;
    int sorsoled_number4;
    int sorsoled_number5;
}lottery_t;

int most_common_numbers_lottery(){
    FILE *fptr;
    if(!(fptr=fopen("../lotterylog.csv", "r")))return -1;
    int lotteryline = 0;
    char c[255];
    while ((fgets(c, 255, fptr)) > 0){
        lotteryline++;
    }
    fclose(fptr);
    if(!(fptr=fopen("../lotterylog.csv", "r")))return -1;
    lottery_t lotterystats[lotteryline];
    for (int i = 0; i < lotteryline; ++i) {
        fscanf(fptr, "%d;%d;%s;%d;%s;%d;%s;%d;%s;%d;%s;%d;%s;%d;%d;%d;%d;%d",
                &lotterystats[i].year, &lotterystats[i].sorsolas_counter, lotterystats[i].date, &lotterystats[i].five_hit_count,
               lotterystats[i].five_hit_money,&lotterystats[i].four_hit_count,lotterystats[i].four_hit_money, &lotterystats[i].three_hit_count,
               lotterystats[i].three_hit_money, &lotterystats[i].two_hit_count,lotterystats[i].two_hit_money, &lotterystats[i].one_hit_count,
               lotterystats[i].one_hit_money, &lotterystats[i].sorsoled_number1, &lotterystats[i].sorsoled_number2, &lotterystats[i].sorsoled_number3,
                &lotterystats[i].sorsoled_number4, &lotterystats[i].sorsoled_number5);
    }

    for (int j = 0; j <5 ; ++j) {
        printf("%s\n", lotterystats[j].date);
    }

    //printf("%d", lotteryline);



}

int main() {
    most_common_numbers_lottery();
    return 0;
}