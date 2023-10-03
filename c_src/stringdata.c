#include "stringmachine.h"
#include <stddef.h>
int NUM_STRINGS = 140;
int DYNAMIC_STRINGS = 0;
const char* STRINGS[] = {
  "",
  "2,",
  "A_DOWN",
  "A_UP",
  "B_DOWN",
  "B_UP",
  "COLLIDE",
  "DOWN_DOWN",
  "DOWN_UP",
  "HIT",
  "LEFT_DOWN",
  "LEFT_UP",
  "MAIN",
  "PLAYER1",
  "RIGHT_DOWN",
  "RIGHT_UP",
  "ROOT",
  "START",
  "START_DOWN",
  "START_UP",
  "UP_DOWN",
  "UP_UP",
  "WALK",
  "WALK:0",
  "XCOLLISION",
  "X_DOWN",
  "X_UP",
  "YCOLLISION",
  "Y_DOWN",
  "Y_UP",
  "_input_name",
  "arcade",
  "attack_stat",
  "auto_healing",
  "auto_healing_counter",
  "auto_healing_per",
  "background",
  "base_attack",
  "base_speed",
  "bottom",
  "chest",
  "deluxe",
  "demon0_0",
  "demon0_1",
  "demon1_0",
  "demon1_1",
  "demon2_0",
  "demon2_1",
  "direction",
  "fireball0",
  "fireball1",
  "fireball2",
  "fireball3",
  "fireball4",
  "fireball5",
  "fireball56",
  "fireball6",
  "fireball7",
  "fireball8",
  "fireball9",
  "frame",
  "girl0_0",
  "girl0_1",
  "girl1_0",
  "girl1_1",
  "girl2_0",
  "girl2_1",
  "gray",
  "h",
  "height",
  "hp",
  "inpDOWN",
  "inpLEFT",
  "inpRIGHT",
  "inpUP",
  "input",
  "left",
  "lines",
  "machine",
  "max_hp",
  "moving",
  "name",
  "orb0_0",
  "orb0_1",
  "orb0_2",
  "orb0_3",
  "orb0_4",
  "pants",
  "physics",
  "platform",
  "player",
  "player0",
  "player1",
  "red",
  "related",
  "remove",
  "right",
  "root",
  "rotation",
  "rupee",
  "scyth0_0",
  "scyth0_1",
  "scyth0_2",
  "scyth0_3",
  "scyth1_0",
  "scyth1_1",
  "scyth1_2",
  "scyth1_3",
  "self",
  "set",
  "skello0_0",
  "skello0_1",
  "skello1_0",
  "skello1_1",
  "skello2_0",
  "skello2_1",
  "speed_stat",
  "state",
  "tangible",
  "the",
  "these",
  "to",
  "top",
  "updateAutoHeal",
  "updateMovement",
  "w",
  "when",
  "whip0_0",
  "whip0_1",
  "whip0_2",
  "whip0_3",
  "whip1_0",
  "whip1_1",
  "whip1_2",
  "whip1_3",
  "width",
  "x",
  "x_vel",
  "y",
  "y_vel"
};
const int STRING_LENS[] = {
  0,
  2,
  6,
  4,
  6,
  4,
  7,
  9,
  7,
  3,
  9,
  7,
  4,
  7,
  10,
  8,
  4,
  5,
  10,
  8,
  7,
  5,
  4,
  6,
  10,
  6,
  4,
  10,
  6,
  4,
  11,
  6,
  11,
  12,
  20,
  16,
  10,
  11,
  10,
  6,
  5,
  6,
  8,
  8,
  8,
  8,
  8,
  8,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  10,
  9,
  9,
  9,
  9,
  5,
  7,
  7,
  7,
  7,
  7,
  7,
  4,
  1,
  6,
  2,
  7,
  7,
  8,
  5,
  5,
  4,
  5,
  7,
  6,
  6,
  4,
  6,
  6,
  6,
  6,
  6,
  5,
  7,
  8,
  6,
  7,
  7,
  3,
  7,
  6,
  5,
  4,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  3,
  9,
  9,
  9,
  9,
  9,
  9,
  10,
  5,
  8,
  3,
  5,
  2,
  3,
  14,
  14,
  1,
  4,
  7,
  7,
  7,
  7,
  7,
  7,
  7,
  7,
  5,
  1,
  5,
  1,
  5
};
void load_string_indexers() {
  add_indexer("", 0);
  add_indexer("2,", 1);
  add_indexer("A_", 2);
  add_indexer("B_", 4);
  add_indexer("CO", 6);
  add_indexer("DO", 7);
  add_indexer("HI", 9);
  add_indexer("LE", 10);
  add_indexer("MA", 12);
  add_indexer("PL", 13);
  add_indexer("RI", 14);
  add_indexer("RO", 16);
  add_indexer("ST", 17);
  add_indexer("UP", 20);
  add_indexer("WA", 22);
  add_indexer("XC", 24);
  add_indexer("X_", 25);
  add_indexer("YC", 27);
  add_indexer("Y_", 28);
  add_indexer("_i", 30);
  add_indexer("ar", 31);
  add_indexer("at", 32);
  add_indexer("au", 33);
  add_indexer("ba", 36);
  add_indexer("bo", 39);
  add_indexer("ch", 40);
  add_indexer("de", 41);
  add_indexer("di", 48);
  add_indexer("fi", 49);
  add_indexer("fr", 60);
  add_indexer("gi", 61);
  add_indexer("gr", 67);
  add_indexer("h", 68);
  add_indexer("he", 69);
  add_indexer("hp", 70);
  add_indexer("in", 71);
  add_indexer("le", 76);
  add_indexer("li", 77);
  add_indexer("ma", 78);
  add_indexer("mo", 80);
  add_indexer("na", 81);
  add_indexer("or", 82);
  add_indexer("pa", 87);
  add_indexer("ph", 88);
  add_indexer("pl", 89);
  add_indexer("re", 93);
  add_indexer("ri", 96);
  add_indexer("ro", 97);
  add_indexer("ru", 99);
  add_indexer("sc", 100);
  add_indexer("se", 108);
  add_indexer("sk", 110);
  add_indexer("sp", 116);
  add_indexer("st", 117);
  add_indexer("ta", 118);
  add_indexer("th", 119);
  add_indexer("to", 121);
  add_indexer("up", 123);
  add_indexer("w", 125);
  add_indexer("wh", 126);
  add_indexer("wi", 135);
  add_indexer("x", 136);
  add_indexer("x_", 137);
  add_indexer("y", 138);
  add_indexer("y_", 139);
}
