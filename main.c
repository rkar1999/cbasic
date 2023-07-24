#include<stdio.h>
#include<string.h>

int main() {
    char team1[] = "Wrexham";
    char team2[] = "Brighton";
    char input_team[100];
    
    printf ("Enter team name - ");
    scanf("%s", &input_team);

    if (strcmp(input_team, team1) == 0) {
        printf("Chelsea (5-0) Wrexham  (friendly)\n-Chelsea's first pre-season match for 2023/24 season\n-Ian Matseen scored two goals & Conor Gallagher,Nkunku,Ben Chilwell also scored\n ");
    }

    else if (strcmp(input_team, team2) == 0) {
        printf("Chelsea (4-3) Brighton  (friendly)\n-PL summer series for Chelsea starts with a win\n-Nkunku,Mudryk,Gallagher & Jackson scored goals for the team\n-Jackson came from the bench ,scored one and assisted two\n ");
    }

    else {
        printf("There is no data for that match.\n");
    }
    return 0;

}
