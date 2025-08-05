#include <stdio.h>
struct Player {
    char name[50];
    int matches;
    int runs;
    int wickets;
};
void acceptPlayers(struct Player players[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details Player %d:\n", i + 1);
        printf("name ");
        //scanf(" %[^\n]", players[i].name);  
        gets(players[i].name);
        printf("Matches Played: ");
        scanf("%d", &players[i].matches);
        printf("Runs: ");
        scanf("%d", &players[i].runs);
        printf("Wickets: ");
        scanf("%d", &players[i].wickets);
    }
}
void displayPlayers(struct Player players[], int n) {
    printf("\n%-20s %-10s %-10s %-10s\n", "name", "matches", "Runs", "Wickets");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-10d %-10d\n",
               players[i].name,
               players[i].matches,
               players[i].runs,
               players[i].wickets);
    }
}
void displayMaxRunsPlayer(struct Player players[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (players[i].runs > players[maxIndex].runs) {
            maxIndex = i;
        }
    }

    printf("\nPlayer with Maximum Runs:\n");
    printf("Name: %s\nRuns: %d\n", players[maxIndex].name, players[maxIndex].runs);
}
void displayMaxWicketsPlayer(struct Player players[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (players[i].wickets > players[maxIndex].wickets) {
            maxIndex = i;
        }
    }

    printf("Player takes Max Wickets:\n");
    printf("Name: %s\nWickets: %d\n", players[maxIndex].name, players[maxIndex].wickets);
}
int main() {
    struct Player players[10];
    acceptPlayers(players, 10);
    displayPlayers(players, 10);

    displayMaxRunsPlayer(players, 10);
    displayMaxWicketsPlayer(players, 10);

    return 0;
}
