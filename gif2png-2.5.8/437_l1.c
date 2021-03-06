/******************************************************************************
 *                                                                            *
 * Src: IBM Codepage 437 (US)                                                 *
 *      V1.01 by Kosta Kostis <kosta@blues.sub.de>                            *
 *      Source: Microsoft MS-DOS 5.0, Benutzerhandbuch und Referenz, Page 773 *
 *                                                                            *
 * Dst: ISO 8859-1 (Latin Alphabet No. 1)                                     *
 *      V1.00 by Kosta Kostis <kosta@blues.sub.de>                            *
 *      Source: ECMA-94                                                       *
 *      ISO 2022 Sequence: <ESC>(B<ESC>-A                                     *
 *                                                                            *
 *****************************************************************************/

/*
 * hand-edited to approximate some of the box-drawing characters (AL)
 */

/******************************************************************************

        Character Conversion Table

******************************************************************************/

#define BAD ' '

int     c_437_l1        [] =
{
            0,     1,     2,     3,     4,     5,     6,     7, /* 000-007 */
            8,     9,    10,    11,    12,    13,    14,    15, /* 008-015 */
           16,    17,    18,    19,   182,   167,    22,    23, /* 016-023 */
           24,    25,    26,    27,    28,    29,    30,    31, /* 024-031 */
           32,    33,    34,    35,    36,    37,    38,    39, /* 032-039 */
           40,    41,    42,    43,    44,    45,    46,    47, /* 040-047 */
           48,    49,    50,    51,    52,    53,    54,    55, /* 048-055 */
           56,    57,    58,    59,    60,    61,    62,    63, /* 056-063 */
           64,    65,    66,    67,    68,    69,    70,    71, /* 064-071 */
           72,    73,    74,    75,    76,    77,    78,    79, /* 072-079 */
           80,    81,    82,    83,    84,    85,    86,    87, /* 080-087 */
           88,    89,    90,    91,    92,    93,    94,    95, /* 088-095 */
           96,    97,    98,    99,   100,   101,   102,   103, /* 096-103 */
          104,   105,   106,   107,   108,   109,   110,   111, /* 104-111 */
          112,   113,   114,   115,   116,   117,   118,   119, /* 112-119 */
          120,   121,   122,   123,   124,   125,   126,   127, /* 120-127 */
          199,   252,   233,   226,   228,   224,   229,   231, /* 128-135 */
          234,   235,   232,   239,   238,   236,   196,   197, /* 136-143 */
          201,   230,   198,   244,   246,   242,   251,   249, /* 144-151 */
          255,   214,   220,   162,   163,   165,   BAD,   BAD, /* 152-159 */
          225,   237,   243,   250,   241,   209,   170,   186, /* 160-167 */
          191,   BAD,   172,   189,   188,   161,   171,   187, /* 168-175 */
          '*',   '%',   '#',   '|',   '+',   '+',   '+',   '+', /* 176-183 */
          '+',   '+',   '+',   '|',   '+',   '+',   '+',   '+', /* 184-191 */
          '+',   '+',   '+',   '+',   '-',   '+',   '+',   '+', /* 192-199 */
          '+',   '+',   '+',   '+',   '+',   '=',   '+',   '+', /* 200-207 */
          '+',   '+',   '+',   '+',   '+',   '+',   '+',   '+', /* 208-215 */
          '+',   '+',   '+',   BAD,   BAD,   BAD,   BAD,   BAD, /* 216-223 */
          BAD,   223,   BAD,   BAD,   BAD,   BAD,   181,   BAD, /* 224-231 */
          BAD,   BAD,   BAD,   BAD,   BAD,   BAD,   BAD,   BAD, /* 232-239 */
          BAD,   177,   BAD,   BAD,   BAD,   BAD,   247,   BAD, /* 240-247 */
          176,   BAD,   183,   BAD,   BAD,   178,   BAD,   160  /* 248-255 */
} ;
