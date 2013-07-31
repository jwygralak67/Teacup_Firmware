
// Thermistor lookup table for two different thermistors.

/*
   This table doesn't depend on the type of electronics, but on the type of
   thermistor(s) you use. You want one table for each thermistor type you use.
*/

// How many thermistor tables we have.
#define NUMTABLES 2

// Names for our tables, so you can use them in config.h.
// Table numbering starts at 0.
#define THERMISTOR_EXTRUDER   0
#define THERMISTOR_BED        1

/*
   You may be able to improve the accuracy of this table in various ways.

   1. Measure the actual resistance of the resistor. It's "nominally" 4.7K,
      but that's ± 5%.
   2. Measure the actual beta of your thermistor:
      http://reprap.org/wiki/MeasuringThermistorBeta
   3. Generate more table entries than you need, then trim down the ones
      in uninteresting ranges.

   In either case you'll have to regenerate this table with
   createTemperatureLookup.py, which requires python, which is difficult to
   install on windows. Since you'll have to do some testing to determine the
   correct temperature for your application anyway, you may decide that the
   effort isn't worth it. Who cares if it's reporting the "right" temperature
   as long as it's keeping the temperature steady enough to print, right?
*/

// The number of value pairs in our table.
// Must be the same for all tables.
#define NUMTEMPS 104

uint16_t const temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {

// Table for the Extruder.

// ./createTemperatureLookup.py --r0=2100000 --t0=15 --r1=0 --r2=10000 --beta=4857 --max-adc=1023 --min-adc=1 --multiplier=4 --vadc=4.92
{
// {ADC, temp*4 }, // temp         Rtherm     Vtherm      resolution   power
   {   0,   9999}, //  Error, shorted thermistor
   {  41,   1239}, //  309.81 C,      417 Ohm, 0.197 V, 1.80 C/count, 0.09mW
   {  46,   1206}, //  301.52 C,      470 Ohm, 0.221 V, 1.57 C/count, 0.10mW
   {  51,   1176}, //  294.25 C,      524 Ohm, 0.245 V, 1.38 C/count, 0.11mW
   {  56,   1151}, //  287.78 C,      579 Ohm, 0.269 V, 1.24 C/count, 0.13mW
   {  61,   1127}, //  281.97 C,      633 Ohm, 0.293 V, 1.12 C/count, 0.14mW
   {  66,   1106}, //  276.69 C,      689 Ohm, 0.317 V, 1.02 C/count, 0.15mW
   {  71,   1087}, //  271.86 C,      745 Ohm, 0.341 V, 0.93 C/count, 0.16mW
   {  76,   1069}, //  267.41 C,      802 Ohm, 0.365 V, 0.86 C/count, 0.17mW
   {  81,   1053}, //  263.29 C,      859 Ohm, 0.389 V, 0.80 C/count, 0.18mW
   {  86,   1037}, //  259.46 C,      917 Ohm, 0.413 V, 0.75 C/count, 0.19mW
   {  91,   1023}, //  255.87 C,      975 Ohm, 0.437 V, 0.70 C/count, 0.20mW
   {  96,   1009}, //  252.50 C,     1034 Ohm, 0.461 V, 0.66 C/count, 0.21mW
   { 101,    997}, //  249.32 C,     1094 Ohm, 0.485 V, 0.62 C/count, 0.22mW
   { 106,    985}, //  246.32 C,     1155 Ohm, 0.509 V, 0.59 C/count, 0.22mW
   { 111,    973}, //  243.47 C,     1216 Ohm, 0.533 V, 0.56 C/count, 0.23mW
   { 116,    963}, //  240.76 C,     1278 Ohm, 0.557 V, 0.53 C/count, 0.24mW
   { 121,    952}, //  238.18 C,     1340 Ohm, 0.581 V, 0.51 C/count, 0.25mW
   { 126,    942}, //  235.71 C,     1403 Ohm, 0.605 V, 0.48 C/count, 0.26mW
   { 131,    933}, //  233.35 C,     1467 Ohm, 0.629 V, 0.46 C/count, 0.27mW
   { 136,    924}, //  231.09 C,     1532 Ohm, 0.653 V, 0.45 C/count, 0.28mW
   { 141,    915}, //  228.91 C,     1597 Ohm, 0.677 V, 0.43 C/count, 0.29mW
   { 146,    907}, //  226.82 C,     1663 Ohm, 0.701 V, 0.41 C/count, 0.30mW
   { 151,    899}, //  224.80 C,     1730 Ohm, 0.726 V, 0.40 C/count, 0.30mW
   { 156,    891}, //  222.85 C,     1797 Ohm, 0.750 V, 0.38 C/count, 0.31mW
   { 161,    883}, //  220.97 C,     1866 Ohm, 0.774 V, 0.37 C/count, 0.32mW
   { 166,    876}, //  219.14 C,     1935 Ohm, 0.798 V, 0.36 C/count, 0.33mW
   { 171,    869}, //  217.38 C,     2005 Ohm, 0.822 V, 0.35 C/count, 0.34mW
   { 176,    862}, //  215.66 C,     2075 Ohm, 0.846 V, 0.34 C/count, 0.34mW
   { 181,    856}, //  214.00 C,     2147 Ohm, 0.870 V, 0.33 C/count, 0.35mW
   { 186,    849}, //  212.38 C,     2220 Ohm, 0.894 V, 0.32 C/count, 0.36mW
   { 191,    843}, //  210.81 C,     2293 Ohm, 0.918 V, 0.31 C/count, 0.37mW
   { 196,    837}, //  209.28 C,     2367 Ohm, 0.942 V, 0.30 C/count, 0.37mW
   { 201,    831}, //  207.79 C,     2442 Ohm, 0.966 V, 0.30 C/count, 0.38mW
   { 206,    825}, //  206.33 C,     2518 Ohm, 0.990 V, 0.29 C/count, 0.39mW
   { 211,    819}, //  204.91 C,     2595 Ohm, 1.014 V, 0.28 C/count, 0.40mW
   { 216,    814}, //  203.52 C,     2673 Ohm, 1.038 V, 0.28 C/count, 0.40mW
   { 221,    808}, //  202.16 C,     2752 Ohm, 1.062 V, 0.27 C/count, 0.41mW
   { 226,    803}, //  200.84 C,     2832 Ohm, 1.086 V, 0.26 C/count, 0.42mW
   { 231,    798}, //  199.54 C,     2913 Ohm, 1.110 V, 0.26 C/count, 0.42mW
   { 236,    793}, //  198.26 C,     2995 Ohm, 1.134 V, 0.25 C/count, 0.43mW
   { 241,    788}, //  197.02 C,     3078 Ohm, 1.158 V, 0.25 C/count, 0.44mW
   { 246,    783}, //  195.79 C,     3162 Ohm, 1.182 V, 0.24 C/count, 0.44mW
   { 251,    778}, //  194.59 C,     3247 Ohm, 1.206 V, 0.24 C/count, 0.45mW
   { 256,    773}, //  193.42 C,     3333 Ohm, 1.230 V, 0.23 C/count, 0.45mW
   { 261,    769}, //  192.26 C,     3421 Ohm, 1.254 V, 0.23 C/count, 0.46mW
   { 266,    764}, //  191.12 C,     3509 Ohm, 1.278 V, 0.23 C/count, 0.47mW
   { 271,    760}, //  190.01 C,     3599 Ohm, 1.302 V, 0.22 C/count, 0.47mW
   { 276,    755}, //  188.91 C,     3690 Ohm, 1.326 V, 0.22 C/count, 0.48mW
   { 281,    751}, //  187.83 C,     3782 Ohm, 1.350 V, 0.21 C/count, 0.48mW
   { 286,    747}, //  186.76 C,     3875 Ohm, 1.374 V, 0.21 C/count, 0.49mW
   { 291,    742}, //  185.71 C,     3970 Ohm, 1.398 V, 0.21 C/count, 0.49mW
   { 296,    738}, //  184.68 C,     4066 Ohm, 1.422 V, 0.21 C/count, 0.50mW
   { 301,    734}, //  183.66 C,     4163 Ohm, 1.446 V, 0.20 C/count, 0.50mW
   { 306,    730}, //  182.66 C,     4262 Ohm, 1.470 V, 0.20 C/count, 0.51mW
   { 311,    726}, //  181.67 C,     4362 Ohm, 1.494 V, 0.20 C/count, 0.51mW
   { 316,    722}, //  180.69 C,     4463 Ohm, 1.518 V, 0.19 C/count, 0.52mW
   { 321,    718}, //  179.73 C,     4566 Ohm, 1.542 V, 0.19 C/count, 0.52mW
   { 326,    715}, //  178.77 C,     4670 Ohm, 1.566 V, 0.19 C/count, 0.53mW
   { 331,    711}, //  177.83 C,     4776 Ohm, 1.590 V, 0.19 C/count, 0.53mW
   { 336,    707}, //  176.90 C,     4884 Ohm, 1.614 V, 0.18 C/count, 0.53mW
   { 341,    703}, //  175.99 C,     4993 Ohm, 1.638 V, 0.18 C/count, 0.54mW
   { 346,    700}, //  175.08 C,     5103 Ohm, 1.662 V, 0.18 C/count, 0.54mW
   { 351,    696}, //  174.18 C,     5215 Ohm, 1.686 V, 0.18 C/count, 0.55mW
   { 356,    693}, //  173.29 C,     5329 Ohm, 1.710 V, 0.18 C/count, 0.55mW
   { 361,    689}, //  172.41 C,     5445 Ohm, 1.734 V, 0.18 C/count, 0.55mW
   { 366,    686}, //  171.54 C,     5562 Ohm, 1.759 V, 0.17 C/count, 0.56mW
   { 371,    682}, //  170.68 C,     5681 Ohm, 1.783 V, 0.17 C/count, 0.56mW
   { 376,    679}, //  169.83 C,     5802 Ohm, 1.807 V, 0.17 C/count, 0.56mW
   { 381,    675}, //  168.98 C,     5925 Ohm, 1.831 V, 0.17 C/count, 0.57mW
   { 386,    672}, //  168.15 C,     6050 Ohm, 1.855 V, 0.17 C/count, 0.57mW
   { 391,    669}, //  167.32 C,     6177 Ohm, 1.879 V, 0.17 C/count, 0.57mW
   { 396,    665}, //  166.49 C,     6306 Ohm, 1.903 V, 0.16 C/count, 0.57mW
   { 401,    662}, //  165.68 C,     6437 Ohm, 1.927 V, 0.16 C/count, 0.58mW
   { 406,    659}, //  164.87 C,     6570 Ohm, 1.951 V, 0.16 C/count, 0.58mW
   { 411,    656}, //  164.07 C,     6705 Ohm, 1.975 V, 0.16 C/count, 0.58mW
   { 416,    653}, //  163.27 C,     6842 Ohm, 1.999 V, 0.16 C/count, 0.58mW
   { 421,    649}, //  162.48 C,     6982 Ohm, 2.023 V, 0.16 C/count, 0.59mW
   { 426,    646}, //  161.69 C,     7124 Ohm, 2.047 V, 0.16 C/count, 0.59mW
   { 431,    643}, //  160.91 C,     7268 Ohm, 2.071 V, 0.16 C/count, 0.59mW
   { 436,    640}, //  160.14 C,     7415 Ohm, 2.095 V, 0.15 C/count, 0.59mW
   { 446,    634}, //  158.60 C,     7716 Ohm, 2.143 V, 0.15 C/count, 0.60mW
   { 456,    628}, //  157.09 C,     8028 Ohm, 2.191 V, 0.15 C/count, 0.60mW
   { 476,    616}, //  154.11 C,     8686 Ohm, 2.287 V, 0.15 C/count, 0.60mW
   { 496,    604}, //  151.18 C,     9394 Ohm, 2.383 V, 0.15 C/count, 0.60mW
   { 506,    598}, //  149.74 C,     9768 Ohm, 2.431 V, 0.14 C/count, 0.61mW
   { 516,    593}, //  148.31 C,    10157 Ohm, 2.479 V, 0.14 C/count, 0.61mW
   { 526,    587}, //  146.88 C,    10562 Ohm, 2.527 V, 0.14 C/count, 0.60mW
   { 536,    581}, //  145.47 C,    10984 Ohm, 2.575 V, 0.14 C/count, 0.60mW
   { 546,    576}, //  144.06 C,    11423 Ohm, 2.623 V, 0.14 C/count, 0.60mW
   { 556,    570}, //  142.65 C,    11880 Ohm, 2.671 V, 0.14 C/count, 0.60mW
   { 566,    565}, //  141.25 C,    12358 Ohm, 2.719 V, 0.14 C/count, 0.60mW
   { 576,    559}, //  139.86 C,    12857 Ohm, 2.768 V, 0.14 C/count, 0.60mW
   { 596,    548}, //  137.08 C,    13925 Ohm, 2.864 V, 0.14 C/count, 0.59mW
   { 606,    542}, //  135.69 C,    14498 Ohm, 2.912 V, 0.14 C/count, 0.58mW
   { 616,    537}, //  134.29 C,    15098 Ohm, 2.960 V, 0.14 C/count, 0.58mW
   { 626,    531}, //  132.90 C,    15729 Ohm, 3.008 V, 0.14 C/count, 0.58mW
   { 646,    520}, //  130.10 C,    17090 Ohm, 3.104 V, 0.14 C/count, 0.56mW
   { 666,    509}, //  127.28 C,    18603 Ohm, 3.200 V, 0.14 C/count, 0.55mW
   { 686,    497}, //  124.43 C,    20296 Ohm, 3.296 V, 0.14 C/count, 0.54mW
   { 726,    474}, //  118.57 C,    24362 Ohm, 3.488 V, 0.15 C/count, 0.50mW
   {1011,    132}, //   33.04 C,   777692 Ohm, 4.858 V, 1.46 C/count, 0.03mW
   {1016,     95}, //   23.86 C,  1270000 Ohm, 4.882 V, 2.17 C/count, 0.02mW
   {1024,      0}, //   Error, open thermistor
},

// Thermistor table for the Heatbed.
// The thermistor used for this table was an Epocs B57560G104F

// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4580 --beta=4092 --max-adc=1023
{
   {0, 9999}, // Error, Shorted thermistor
   {1, 3318}, // 829.616016745 C
   {11, 1582}, // 395.653631407 C
   {21, 1323}, // 330.84097107 C
   {31, 1188}, // 297.209646621 C
   {41, 1100}, // 275.07218256 C
   {51, 1035}, // 258.789398125 C
   {61, 984}, // 246.008594145 C
   {71, 942}, // 235.537654412 C
   {81, 906}, // 226.694443884 C
   {91, 876}, // 219.054455222 C
   {101, 849}, // 212.336691817 C
   {111, 825}, // 206.346127832 C
   {121, 803}, // 200.942223904 C
   {131, 784}, // 196.020563493 C
   {141, 766}, // 191.50157718 C
   {151, 749}, // 187.323319967 C
   {161, 733}, // 183.436677733 C
   {171, 719}, // 179.802088411 C
   {181, 705}, // 176.387240163 C
   {191, 692}, // 173.165418421 C
   {201, 680}, // 170.114295013 C
   {211, 668}, // 167.215025351 C
   {221, 657}, // 164.451564622 C
   {231, 647}, // 161.810142471 C
   {241, 637}, // 159.278854262 C
   {251, 627}, // 156.847339317 C
   {261, 618}, // 154.50652494 C
   {271, 608}, // 152.248420783 C
   {281, 600}, // 150.065952166 C
   {291, 591}, // 147.952823858 C
   {301, 583}, // 145.903407888 C
   {311, 575}, // 143.912650487 C
   {321, 567}, // 141.975994383 C
   {331, 560}, // 140.089313499 C
   {341, 552}, // 138.248857757 C
   {351, 545}, // 136.451206156 C
   {361, 538}, // 134.693226674 C
   {371, 531}, // 132.972041812 C
   {381, 525}, // 131.284998864 C
   {391, 518}, // 129.629644111 C
   {401, 512}, // 128.003700342 C
   {411, 505}, // 126.405047164 C
   {421, 499}, // 124.831703684 C
   {431, 493}, // 123.281813201 C
   {441, 487}, // 121.753629616 C
   {451, 480}, // 120.2455053 C
   {461, 475}, // 118.755880215 C
   {471, 469}, // 117.283272105 C
   {481, 463}, // 115.826267593 C
   {491, 457}, // 114.383514072 C
   {501, 451}, // 112.953712236 C
   {511, 446}, // 111.535609196 C
   {521, 440}, // 110.127992041 C
   {531, 434}, // 108.729681803 C
   {541, 429}, // 107.339527723 C
   {551, 423}, // 105.956401766 C
   {561, 418}, // 104.579193313 C
   {571, 412}, // 103.206803975 C
   {581, 407}, // 101.838142455 C
   {591, 401}, // 100.472119415 C
   {601, 396}, // 99.1076422777 C
   {611, 390}, // 97.7436098948 C
   {621, 385}, // 96.3789070256 C
   {631, 380}, // 95.0123985415 C
   {641, 374}, // 93.6429232791 C
   {651, 369}, // 92.2692874506 C
   {661, 363}, // 90.8902575047 C
   {671, 358}, // 89.5045523189 C
   {681, 352}, // 88.1108345795 C
   {691, 346}, // 86.7077011852 C
   {701, 341}, // 85.2936724726 C
   {711, 335}, // 83.8671800249 C
   {721, 329}, // 82.4265527738 C
   {731, 323}, // 80.9700010386 C
   {741, 317}, // 79.4955980642 C
   {751, 312}, // 78.0012585145 C
   {761, 305}, // 76.4847132388 C
   {771, 299}, // 74.9434794495 C
   {781, 293}, // 73.3748252113 C
   {791, 287}, // 71.7757268294 C
   {801, 280}, // 70.1428172972 C
   {811, 273}, // 68.4723233868 C
   {821, 267}, // 66.7599881711 C
   {831, 260}, // 65.0009746545 C
   {841, 252}, // 63.189744608 C
   {851, 245}, // 61.3199044379 C
   {861, 237}, // 59.3840065713 C
   {871, 229}, // 57.3732898485 C
   {881, 221}, // 55.2773347518 C
   {891, 212}, // 53.0835972837 C
   {901, 203}, // 50.7767658983 C
   {911, 193}, // 48.3378535447 C
   {921, 182}, // 45.7428809535 C
   {931, 171}, // 42.9609064421 C
   {941, 159}, // 39.9509663295 C
   {951, 146}, // 36.6571055471 C
   {961, 131}, // 32.9998468755 C
   {971, 115}, // 28.8604816153 C
   {981, 96}, // 24.0493448775 C
   {991, 72}, // 18.2330297294 C
   {1001, 42}, // 10.732298885 C
   {1010, 4} // 1.11618417895 C
   {1024, 0} // Error, open Thermistor
}
};
