/*
Written by Thomas Reilly (thomas.edreilly@gmail.com)
Program which takes starting and destination coordinates as inputs and outputs directions for 'pacman'
to follow.
*/

#include <stdio.h>

void Go(int steps);

int main(void){
  int sx, sy, dx, dy;
  int diff_x, diff_y;

  sx = 6;
  sy = 4;
  dx = 1;
  dy = 1;

  diff_x = sx - dx;
  diff_y = sy - dy;

  if (diff_x > 0 && diff_y > 0) {
    printf("L L ");
    int a;
    for (a = 0; a < diff_y; a++) {
      printf("Waka ");
      printf("R ");
      printf("Waka ");
      printf("L ");
    }
    printf("R ");
    Go(diff_x - diff_y);
  }
  if (diff_x > 0 && diff_y < 0) {
    int a;
    for (a = 0; a < -diff_y; a++) {
      printf("Waka ");
      printf("L ");
      printf("Waka ");
      printf("R ");
    }
    printf("L ");
    Go(diff_x + diff_y);
  }
  if (diff_x < 0 && diff_y > 0) {
    printf("L L ");
    int a;
    for (a = 0; a < diff_y; a++) {
      printf("Waka ");
      printf("L ");
      printf("Waka ");
      printf("R ");
    }
    printf("L ");
    Go(-diff_x - diff_y);

  }
  if (diff_x < 0 && diff_y < 0) {
    int a;
    for (a = 0; a < -diff_y; a++) {
      printf("Waka ");
      printf("R ");
      printf("Waka ");
      printf("L ");
    }
    printf("R ");
    Go(-diff_x + diff_y);
  }

  if (diff_x == 0 && diff_y > 0){
    printf("R R ");
    Go(diff_y);
  }

  if (diff_x == 0 && diff_y < 0){
    Go(-diff_y);
  }

  if (diff_y == 0 && diff_x < 0){
    printf("L ");
    Go(-diff_x);
  }

  if (diff_y == 0 && diff_x > 0){
    printf("R ");
    Go(diff_x);
  }

  printf("\n");
  return 0;
}

void Go(int steps) {
  int i;
  for (i = 0; i < steps; i++) {
    printf("Waka ");
  }
}
