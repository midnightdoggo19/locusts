#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define LOCUST '^'
#define DELAY 10

int height, width;

void input();
void setup();
void draw();
int randomCoordinate();

int main (int argc, char** argv) {
    setup();
    while (true) {
        input();
        draw();
        usleep(DELAY);
    }

    return 0;
}

void draw() {
    int x, y;

    x = randomCoordinate();
    y = randomCoordinate();

    mvaddch((int) y, (int) x, LOCUST);

    // surely the best way to go about this
    x = randomCoordinate();
    y = randomCoordinate();

    mvaddch((int) y, (int) x, ' ');

    refresh();
}

int randomCoordinate () {
    return (rand() % (width + 1)) - 1;
}

void setup() {
    initscr();
    curs_set(0);
    nodelay(stdscr, TRUE);
    srand(time(NULL));

    getmaxyx(stdscr, height, width);
}

// handle input
void input() {
    int key = getch();
    if (key == 'q') {
        endwin();
        printf("buzz\n");
        exit(0);
    }
}
