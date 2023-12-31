#include "stringmachine.h"
#include <stddef.h>
int NUM_STRINGS = 320;
int DYNAMIC_STRINGS = 0;
const char* STRINGS[] = {
  "",
  "2,",
  "A_DOWN",
  "A_UP",
  "BLACK",
  "BLACKHB",
  "BYE",
  "B_DOWN",
  "B_UP",
  "COLLECT",
  "COLLIDE",
  "COLLIDE?",
  "DEAD",
  "DEMON0",
  "DEMON1",
  "DEMON2",
  "DOWN_DOWN",
  "DOWN_UP",
  "EXP",
  "FOLLOW",
  "GIRL0",
  "GIRL1",
  "GIRL2",
  "HIT",
  "HURT",
  "LEFT_DOWN",
  "LEFT_UP",
  "MAIN",
  "PINK",
  "PINKHB",
  "PLAYER1",
  "RAND?",
  "RED",
  "REDHB",
  "RIGHT_DOWN",
  "RIGHT_UP",
  "ROOT",
  "SCYTHE0",
  "SCYTHE0:0",
  "SKELLO0",
  "SKELLO1",
  "SKELLO2",
  "START",
  "START_DOWN",
  "START_UP",
  "UP_DOWN",
  "UP_UP",
  "WAIT",
  "WALK",
  "WALK:0",
  "WHIP0",
  "WHIP1",
  "XCOLLISION",
  "X_DOWN",
  "X_UP",
  "YCOLLISION",
  "Y_DOWN",
  "Y_UP",
  "_0",
  "_1",
  "_input_name",
  "arcade",
  "attack_stat",
  "auto_healing",
  "auto_healing_counter",
  "auto_healing_per",
  "background",
  "base_attack",
  "base_speed",
  "be",
  "bottom",
  "calc",
  "calcx",
  "calcy",
  "chest",
  "deluxe",
  "demon",
  "demon0_0",
  "demon0_1",
  "demon1_0",
  "demon1_1",
  "demon2_0",
  "demon2_1",
  "direction",
  "dist",
  "drop",
  "drops",
  "empty",
  "everyFour0",
  "everyFour1",
  "everyFour2",
  "everyFour3",
  "exp",
  "exp0",
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
  "follow",
  "followPlayer",
  "frame",
  "girl",
  "girl0_0",
  "girl0_1",
  "girl1_0",
  "girl1_1",
  "girl2_0",
  "girl2_1",
  "gray",
  "h",
  "health_bar_segment",
  "health_bar_segment0",
  "health_bar_segment1",
  "health_bar_segment10",
  "health_bar_segment11",
  "health_bar_segment12",
  "health_bar_segment13",
  "health_bar_segment14",
  "health_bar_segment15",
  "health_bar_segment16",
  "health_bar_segment17",
  "health_bar_segment2",
  "health_bar_segment3",
  "health_bar_segment4",
  "health_bar_segment5",
  "health_bar_segment6",
  "health_bar_segment7",
  "health_bar_segment8",
  "health_bar_segment9",
  "height",
  "hp",
  "image",
  "inpDOWN",
  "inpLEFT",
  "inpRIGHT",
  "inpUP",
  "input",
  "left",
  "letter",
  "lines",
  "loadingzone",
  "lowerbound",
  "machine",
  "max_hp",
  "max_nme",
  "moving",
  "name",
  "nme",
  "nme0",
  "nmeManager",
  "nmeManager0",
  "nmeRelocator",
  "nmeRelocator0",
  "nmeRelocator1",
  "nmeRelocator2",
  "nmeRelocator3",
  "nmeSpawner",
  "nmeSpawner0",
  "nmeSpawner1",
  "nmeSpawner10",
  "nmeSpawner11",
  "nmeSpawner12",
  "nmeSpawner13",
  "nmeSpawner14",
  "nmeSpawner15",
  "nmeSpawner16",
  "nmeSpawner17",
  "nmeSpawner18",
  "nmeSpawner19",
  "nmeSpawner2",
  "nmeSpawner20",
  "nmeSpawner21",
  "nmeSpawner22",
  "nmeSpawner23",
  "nmeSpawner24",
  "nmeSpawner25",
  "nmeSpawner26",
  "nmeSpawner27",
  "nmeSpawner28",
  "nmeSpawner29",
  "nmeSpawner3",
  "nmeSpawner30",
  "nmeSpawner31",
  "nmeSpawner32",
  "nmeSpawner33",
  "nmeSpawner34",
  "nmeSpawner35",
  "nmeSpawner36",
  "nmeSpawner37",
  "nmeSpawner38",
  "nmeSpawner39",
  "nmeSpawner4",
  "nmeSpawner40",
  "nmeSpawner41",
  "nmeSpawner42",
  "nmeSpawner43",
  "nmeSpawner44",
  "nmeSpawner45",
  "nmeSpawner46",
  "nmeSpawner47",
  "nmeSpawner48",
  "nmeSpawner49",
  "nmeSpawner5",
  "nmeSpawner50",
  "nmeSpawner51",
  "nmeSpawner52",
  "nmeSpawner53",
  "nmeSpawner54",
  "nmeSpawner55",
  "nmeSpawner56",
  "nmeSpawner57",
  "nmeSpawner6",
  "nmeSpawner7",
  "nmeSpawner8",
  "nmeSpawner9",
  "nme_level",
  "nme_name",
  "nme_number",
  "nme_toggle",
  "num",
  "number",
  "off_x",
  "off_y",
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
  "script",
  "scyth0_0",
  "scyth0_1",
  "scyth0_2",
  "scyth0_3",
  "scyth1_0",
  "scyth1_1",
  "scyth1_2",
  "scyth1_3",
  "scythe",
  "scythe0",
  "scythe_bonus_damage",
  "scythe_counter",
  "scythe_dir",
  "scythe_level",
  "scythe_per",
  "self",
  "set",
  "skello",
  "skello0_0",
  "skello0_1",
  "skello1_0",
  "skello1_1",
  "skello2_0",
  "skello2_1",
  "sname",
  "spawn",
  "spawnNumber",
  "spawner",
  "spawns",
  "speed",
  "speed_stat",
  "state",
  "tangible",
  "the",
  "these",
  "this",
  "timer",
  "to",
  "top",
  "updateAutoHeal",
  "updateMovement",
  "updateScythe",
  "updateSpawn",
  "updateWhip",
  "upperbound",
  "w",
  "we",
  "when",
  "where",
  "whip",
  "whip0",
  "whip0_0",
  "whip0_1",
  "whip0_2",
  "whip0_3",
  "whip1",
  "whip1_0",
  "whip1_1",
  "whip1_2",
  "whip1_3",
  "whip_bonus_damage",
  "whip_counter",
  "whip_level",
  "whip_per",
  "width",
  "will",
  "wname",
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
  5,
  7,
  3,
  6,
  4,
  7,
  7,
  8,
  4,
  6,
  6,
  6,
  9,
  7,
  3,
  6,
  5,
  5,
  5,
  3,
  4,
  9,
  7,
  4,
  4,
  6,
  7,
  5,
  3,
  5,
  10,
  8,
  4,
  7,
  9,
  7,
  7,
  7,
  5,
  10,
  8,
  7,
  5,
  4,
  4,
  6,
  5,
  5,
  10,
  6,
  4,
  10,
  6,
  4,
  2,
  2,
  11,
  6,
  11,
  12,
  20,
  16,
  10,
  11,
  10,
  2,
  6,
  4,
  5,
  5,
  5,
  6,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  9,
  4,
  4,
  5,
  5,
  10,
  10,
  10,
  10,
  3,
  4,
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
  6,
  12,
  5,
  4,
  7,
  7,
  7,
  7,
  7,
  7,
  4,
  1,
  18,
  19,
  19,
  20,
  20,
  20,
  20,
  20,
  20,
  20,
  20,
  19,
  19,
  19,
  19,
  19,
  19,
  19,
  19,
  6,
  2,
  5,
  7,
  7,
  8,
  5,
  5,
  4,
  6,
  5,
  11,
  10,
  7,
  6,
  7,
  6,
  4,
  3,
  4,
  10,
  11,
  12,
  13,
  13,
  13,
  13,
  10,
  11,
  11,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  11,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  11,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  11,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  11,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  12,
  11,
  11,
  11,
  11,
  9,
  8,
  10,
  10,
  3,
  6,
  5,
  5,
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
  6,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  6,
  7,
  19,
  14,
  10,
  12,
  10,
  4,
  3,
  6,
  9,
  9,
  9,
  9,
  9,
  9,
  5,
  5,
  11,
  7,
  6,
  5,
  10,
  5,
  8,
  3,
  5,
  4,
  5,
  2,
  3,
  14,
  14,
  12,
  11,
  10,
  10,
  1,
  2,
  4,
  5,
  4,
  5,
  7,
  7,
  7,
  7,
  5,
  7,
  7,
  7,
  7,
  17,
  12,
  10,
  8,
  5,
  4,
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
  add_indexer("BL", 4);
  add_indexer("BY", 6);
  add_indexer("B_", 7);
  add_indexer("CO", 9);
  add_indexer("DE", 12);
  add_indexer("DO", 16);
  add_indexer("EX", 18);
  add_indexer("FO", 19);
  add_indexer("GI", 20);
  add_indexer("HI", 23);
  add_indexer("HU", 24);
  add_indexer("LE", 25);
  add_indexer("MA", 27);
  add_indexer("PI", 28);
  add_indexer("PL", 30);
  add_indexer("RA", 31);
  add_indexer("RE", 32);
  add_indexer("RI", 34);
  add_indexer("RO", 36);
  add_indexer("SC", 37);
  add_indexer("SK", 39);
  add_indexer("ST", 42);
  add_indexer("UP", 45);
  add_indexer("WA", 47);
  add_indexer("WH", 50);
  add_indexer("XC", 52);
  add_indexer("X_", 53);
  add_indexer("YC", 55);
  add_indexer("Y_", 56);
  add_indexer("_0", 58);
  add_indexer("_1", 59);
  add_indexer("_i", 60);
  add_indexer("ar", 61);
  add_indexer("at", 62);
  add_indexer("au", 63);
  add_indexer("ba", 66);
  add_indexer("be", 69);
  add_indexer("bo", 70);
  add_indexer("ca", 71);
  add_indexer("ch", 74);
  add_indexer("de", 75);
  add_indexer("di", 83);
  add_indexer("dr", 85);
  add_indexer("em", 87);
  add_indexer("ev", 88);
  add_indexer("ex", 92);
  add_indexer("fi", 94);
  add_indexer("fo", 105);
  add_indexer("fr", 107);
  add_indexer("gi", 108);
  add_indexer("gr", 115);
  add_indexer("h", 116);
  add_indexer("he", 117);
  add_indexer("hp", 137);
  add_indexer("im", 138);
  add_indexer("in", 139);
  add_indexer("le", 144);
  add_indexer("li", 146);
  add_indexer("lo", 147);
  add_indexer("ma", 149);
  add_indexer("mo", 152);
  add_indexer("na", 153);
  add_indexer("nm", 154);
  add_indexer("nu", 226);
  add_indexer("of", 228);
  add_indexer("or", 230);
  add_indexer("pa", 235);
  add_indexer("ph", 236);
  add_indexer("pl", 237);
  add_indexer("re", 241);
  add_indexer("ri", 244);
  add_indexer("ro", 245);
  add_indexer("ru", 247);
  add_indexer("sc", 248);
  add_indexer("se", 264);
  add_indexer("sk", 266);
  add_indexer("sn", 273);
  add_indexer("sp", 274);
  add_indexer("st", 280);
  add_indexer("ta", 281);
  add_indexer("th", 282);
  add_indexer("ti", 285);
  add_indexer("to", 286);
  add_indexer("up", 288);
  add_indexer("w", 294);
  add_indexer("we", 295);
  add_indexer("wh", 296);
  add_indexer("wi", 313);
  add_indexer("wn", 315);
  add_indexer("x", 316);
  add_indexer("x_", 317);
  add_indexer("y", 318);
  add_indexer("y_", 319);
}
