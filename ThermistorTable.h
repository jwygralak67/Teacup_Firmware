
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
// ./createTemperatureLookup.py --r0=100000 --t0=22 --r1=0 --r2=9880 --beta=5028 --max-adc=1023 --min-adc=1 --multiplier=4.0 --vadc=4.92

{
// {ADC, temp*4.0 }, // temp         Rtherm     Vtherm      resolution   power
   {   1,   1489}, //  372.27 C,       10 Ohm, 0.005 V, 52.80 C/count, 0.00mW
   {  56,    601}, //  150.41 C,      572 Ohm, 0.269 V, 0.68 C/count, 0.13mW
   {  66,    577}, //  144.27 C,      681 Ohm, 0.317 V, 0.57 C/count, 0.15mW
   {  76,    556}, //  139.08 C,      792 Ohm, 0.365 V, 0.48 C/count, 0.17mW
   {  86,    538}, //  134.59 C,      906 Ohm, 0.413 V, 0.42 C/count, 0.19mW
   {  96,    522}, //  130.64 C,     1022 Ohm, 0.461 V, 0.37 C/count, 0.21mW
   { 106,    508}, //  127.11 C,     1141 Ohm, 0.509 V, 0.34 C/count, 0.23mW
   { 116,    495}, //  123.91 C,     1262 Ohm, 0.557 V, 0.31 C/count, 0.25mW
   { 126,    483}, //  120.99 C,     1386 Ohm, 0.605 V, 0.28 C/count, 0.26mW
   { 136,    473}, //  118.30 C,     1513 Ohm, 0.653 V, 0.26 C/count, 0.28mW
   { 146,    463}, //  115.81 C,     1643 Ohm, 0.701 V, 0.24 C/count, 0.30mW
   { 156,    453}, //  113.49 C,     1776 Ohm, 0.750 V, 0.23 C/count, 0.32mW
   { 166,    445}, //  111.31 C,     1912 Ohm, 0.798 V, 0.21 C/count, 0.33mW
   { 176,    437}, //  109.26 C,     2051 Ohm, 0.846 V, 0.20 C/count, 0.35mW
   { 186,    429}, //  107.31 C,     2193 Ohm, 0.894 V, 0.19 C/count, 0.36mW
   { 196,    421}, //  105.47 C,     2339 Ohm, 0.942 V, 0.18 C/count, 0.38mW
   { 206,    414}, //  103.71 C,     2488 Ohm, 0.990 V, 0.17 C/count, 0.39mW
   { 216,    408}, //  102.03 C,     2641 Ohm, 1.038 V, 0.16 C/count, 0.41mW
   { 226,    401}, //  100.42 C,     2798 Ohm, 1.086 V, 0.16 C/count, 0.42mW
   { 231,    398}, //   99.64 C,     2878 Ohm, 1.110 V, 0.15 C/count, 0.43mW
   { 241,    392}, //   98.13 C,     3041 Ohm, 1.158 V, 0.15 C/count, 0.44mW
   { 251,    386}, //   96.67 C,     3208 Ohm, 1.206 V, 0.14 C/count, 0.45mW
   { 261,    381}, //   95.26 C,     3380 Ohm, 1.254 V, 0.14 C/count, 0.47mW
   { 271,    375}, //   93.89 C,     3556 Ohm, 1.302 V, 0.13 C/count, 0.48mW
   { 281,    370}, //   92.57 C,     3737 Ohm, 1.350 V, 0.13 C/count, 0.49mW
   { 291,    365}, //   91.28 C,     3922 Ohm, 1.398 V, 0.13 C/count, 0.50mW
   { 301,    360}, //   90.03 C,     4113 Ohm, 1.446 V, 0.12 C/count, 0.51mW
   { 311,    355}, //   88.81 C,     4310 Ohm, 1.494 V, 0.12 C/count, 0.52mW
   { 321,    350}, //   87.62 C,     4511 Ohm, 1.542 V, 0.12 C/count, 0.53mW
   { 331,    345}, //   86.46 C,     4719 Ohm, 1.590 V, 0.11 C/count, 0.54mW
   { 341,    341}, //   85.32 C,     4933 Ohm, 1.638 V, 0.11 C/count, 0.54mW
   { 351,    336}, //   84.21 C,     5153 Ohm, 1.686 V, 0.11 C/count, 0.55mW
   { 361,    332}, //   83.12 C,     5380 Ohm, 1.734 V, 0.11 C/count, 0.56mW
   { 371,    328}, //   82.05 C,     5613 Ohm, 1.783 V, 0.11 C/count, 0.57mW
   { 381,    323}, //   81.00 C,     5854 Ohm, 1.831 V, 0.10 C/count, 0.57mW
   { 391,    319}, //   79.97 C,     6103 Ohm, 1.879 V, 0.10 C/count, 0.58mW
   { 401,    315}, //   78.95 C,     6359 Ohm, 1.927 V, 0.10 C/count, 0.58mW
   { 411,    311}, //   77.94 C,     6624 Ohm, 1.975 V, 0.10 C/count, 0.59mW
   { 421,    307}, //   76.95 C,     6898 Ohm, 2.023 V, 0.10 C/count, 0.59mW
   { 431,    303}, //   75.98 C,     7181 Ohm, 2.071 V, 0.10 C/count, 0.60mW
   { 441,    300}, //   75.01 C,     7474 Ohm, 2.119 V, 0.10 C/count, 0.60mW
   { 451,    296}, //   74.06 C,     7776 Ohm, 2.167 V, 0.10 C/count, 0.60mW
   { 461,    292}, //   73.11 C,     8090 Ohm, 2.215 V, 0.09 C/count, 0.61mW
   { 471,    288}, //   72.17 C,     8415 Ohm, 2.263 V, 0.09 C/count, 0.61mW
   { 481,    284}, //   71.25 C,     8752 Ohm, 2.311 V, 0.09 C/count, 0.61mW
   { 491,    281}, //   70.32 C,     9101 Ohm, 2.359 V, 0.09 C/count, 0.61mW
   { 501,    277}, //   69.41 C,     9464 Ohm, 2.407 V, 0.09 C/count, 0.61mW
   { 511,    273}, //   68.50 C,     9841 Ohm, 2.455 V, 0.09 C/count, 0.61mW
   { 521,    270}, //   67.59 C,    10234 Ohm, 2.503 V, 0.09 C/count, 0.61mW
   { 531,    266}, //   66.69 C,    10642 Ohm, 2.551 V, 0.09 C/count, 0.61mW
   { 541,    263}, //   65.80 C,    11066 Ohm, 2.599 V, 0.09 C/count, 0.61mW
   { 551,    259}, //   64.90 C,    11509 Ohm, 2.647 V, 0.09 C/count, 0.61mW
   { 561,    256}, //   64.01 C,    11971 Ohm, 2.695 V, 0.09 C/count, 0.61mW
   { 571,    252}, //   63.12 C,    12454 Ohm, 2.743 V, 0.09 C/count, 0.60mW
   { 581,    248}, //   62.23 C,    12958 Ohm, 2.792 V, 0.09 C/count, 0.60mW
   { 591,    245}, //   61.34 C,    13485 Ohm, 2.840 V, 0.09 C/count, 0.60mW
   { 601,    241}, //   60.45 C,    14038 Ohm, 2.888 V, 0.09 C/count, 0.59mW
   { 611,    238}, //   59.56 C,    14617 Ohm, 2.936 V, 0.09 C/count, 0.59mW
   { 621,    234}, //   58.66 C,    15225 Ohm, 2.984 V, 0.09 C/count, 0.58mW
   { 631,    231}, //   57.76 C,    15863 Ohm, 3.032 V, 0.09 C/count, 0.58mW
   { 641,    227}, //   56.86 C,    16535 Ohm, 3.080 V, 0.09 C/count, 0.57mW
   { 651,    223}, //   55.96 C,    17244 Ohm, 3.128 V, 0.09 C/count, 0.57mW
   { 661,    220}, //   55.05 C,    17991 Ohm, 3.176 V, 0.09 C/count, 0.56mW
   { 671,    216}, //   54.13 C,    18780 Ohm, 3.224 V, 0.09 C/count, 0.55mW
   { 681,    212}, //   53.20 C,    19616 Ohm, 3.272 V, 0.09 C/count, 0.55mW
   { 691,    209}, //   52.27 C,    20502 Ohm, 3.320 V, 0.09 C/count, 0.54mW
   { 701,    205}, //   51.33 C,    21442 Ohm, 3.368 V, 0.09 C/count, 0.53mW
   { 711,    201}, //   50.38 C,    22443 Ohm, 3.416 V, 0.10 C/count, 0.52mW
   { 721,    197}, //   49.41 C,    23510 Ohm, 3.464 V, 0.10 C/count, 0.51mW
   { 731,    193}, //   48.44 C,    24649 Ohm, 3.512 V, 0.10 C/count, 0.50mW
   { 741,    189}, //   47.45 C,    25870 Ohm, 3.560 V, 0.10 C/count, 0.49mW
   { 751,    185}, //   46.44 C,    27179 Ohm, 3.608 V, 0.10 C/count, 0.48mW
   { 761,    181}, //   45.42 C,    28588 Ohm, 3.656 V, 0.10 C/count, 0.47mW
   { 771,    177}, //   44.37 C,    30109 Ohm, 3.704 V, 0.11 C/count, 0.46mW
   { 781,    173}, //   43.31 C,    31754 Ohm, 3.752 V, 0.11 C/count, 0.44mW
   { 791,    168}, //   42.22 C,    33541 Ohm, 3.801 V, 0.11 C/count, 0.43mW
   { 801,    164}, //   41.11 C,    35488 Ohm, 3.849 V, 0.11 C/count, 0.42mW
   { 811,    159}, //   39.97 C,    37618 Ohm, 3.897 V, 0.12 C/count, 0.40mW
   { 821,    155}, //   38.80 C,    39958 Ohm, 3.945 V, 0.12 C/count, 0.39mW
   { 831,    150}, //   37.59 C,    42540 Ohm, 3.993 V, 0.12 C/count, 0.37mW
   { 836,    147}, //   36.97 C,    43934 Ohm, 4.017 V, 0.12 C/count, 0.37mW
   { 841,    145}, //   36.34 C,    45405 Ohm, 4.041 V, 0.13 C/count, 0.36mW
   { 846,    142}, //   35.71 C,    46958 Ohm, 4.065 V, 0.13 C/count, 0.35mW
   { 851,    140}, //   35.05 C,    48600 Ohm, 4.089 V, 0.13 C/count, 0.34mW
   { 856,    137}, //   34.39 C,    50341 Ohm, 4.113 V, 0.13 C/count, 0.34mW
   { 861,    134}, //   33.71 C,    52188 Ohm, 4.137 V, 0.14 C/count, 0.33mW
   { 866,    132}, //   33.02 C,    54152 Ohm, 4.161 V, 0.14 C/count, 0.32mW
   { 871,    129}, //   32.32 C,    56245 Ohm, 4.185 V, 0.14 C/count, 0.31mW
   { 876,    126}, //   31.60 C,    58479 Ohm, 4.209 V, 0.15 C/count, 0.30mW
   { 881,    123}, //   30.86 C,    60869 Ohm, 4.233 V, 0.15 C/count, 0.29mW
   { 886,    120}, //   30.10 C,    63432 Ohm, 4.257 V, 0.15 C/count, 0.29mW
   { 891,    117}, //   29.33 C,    66189 Ohm, 4.281 V, 0.16 C/count, 0.28mW
   { 896,    114}, //   28.53 C,    69160 Ohm, 4.305 V, 0.16 C/count, 0.27mW
   { 901,    110}, //   27.71 C,    72373 Ohm, 4.329 V, 0.17 C/count, 0.26mW
   { 906,    107}, //   26.87 C,    75858 Ohm, 4.353 V, 0.17 C/count, 0.25mW
   { 916,    100}, //   25.09 C,    83797 Ohm, 4.401 V, 0.18 C/count, 0.23mW
   { 926,     92}, //   23.20 C,    93356 Ohm, 4.449 V, 0.20 C/count, 0.21mW
   { 936,     84}, //   21.14 C,   105087 Ohm, 4.497 V, 0.21 C/count, 0.19mW
   { 946,     75}, //   18.90 C,   119827 Ohm, 4.545 V, 0.23 C/count, 0.17mW
   { 956,     65}, //   16.41 C,   138901 Ohm, 4.593 V, 0.26 C/count, 0.15mW
   { 966,     54}, //   13.62 C,   164553 Ohm, 4.641 V, 0.30 C/count, 0.13mW
   { 976,     41}, //   10.39 C,   200893 Ohm, 4.689 V, 0.35 C/count, 0.11mW
   { 986,     26}, //    6.54 C,   256360 Ohm, 4.737 V, 0.42 C/count, 0.09mW
   { 996,      6}, //    1.72 C,   351446 Ohm, 4.785 V, 0.54 C/count, 0.07mW
}
};
