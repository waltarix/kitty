// unicode data, built from the unicode standard on: 2021-04-22
// see gen-wcwidth.py
#pragma once
#include "data-types.h"

START_ALLOW_CASE_RANGE

#include "unicode-range.h"

static const struct unicode_range_table
emoji_table[] = {
	{0x23, 0x23},
	{0x2a, 0x2a},
	{0x30, 0x39},
	{0xa9, 0xa9},
	{0xae, 0xae},
	{0x203c, 0x203c},
	{0x2049, 0x2049},
	{0x2122, 0x2122},
	{0x2139, 0x2139},
	{0x2194, 0x2199},
	{0x21a9, 0x21aa},
	{0x231a, 0x231b},
	{0x2328, 0x2328},
	{0x23cf, 0x23cf},
	{0x23e9, 0x23f3},
	{0x23f8, 0x23fa},
	{0x24c2, 0x24c2},
	{0x25aa, 0x25ab},
	{0x25b6, 0x25b6},
	{0x25c0, 0x25c0},
	{0x25fb, 0x25fe},
	{0x2600, 0x2604},
	{0x260e, 0x260e},
	{0x2611, 0x2611},
	{0x2614, 0x2615},
	{0x2618, 0x2618},
	{0x261d, 0x261d},
	{0x2620, 0x2620},
	{0x2622, 0x2623},
	{0x2626, 0x2626},
	{0x262a, 0x262a},
	{0x262e, 0x262f},
	{0x2638, 0x263a},
	{0x2640, 0x2640},
	{0x2642, 0x2642},
	{0x2648, 0x2653},
	{0x265f, 0x2660},
	{0x2663, 0x2663},
	{0x2665, 0x2666},
	{0x2668, 0x2668},
	{0x267b, 0x267b},
	{0x267e, 0x267f},
	{0x2692, 0x2697},
	{0x2699, 0x2699},
	{0x269b, 0x269c},
	{0x26a0, 0x26a1},
	{0x26a7, 0x26a7},
	{0x26aa, 0x26ab},
	{0x26b0, 0x26b1},
	{0x26bd, 0x26be},
	{0x26c4, 0x26c5},
	{0x26c8, 0x26c8},
	{0x26ce, 0x26cf},
	{0x26d1, 0x26d1},
	{0x26d3, 0x26d4},
	{0x26e9, 0x26ea},
	{0x26f0, 0x26f5},
	{0x26f7, 0x26fa},
	{0x26fd, 0x26fd},
	{0x2702, 0x2702},
	{0x2705, 0x2705},
	{0x2708, 0x270d},
	{0x270f, 0x270f},
	{0x2712, 0x2712},
	{0x2714, 0x2714},
	{0x2716, 0x2716},
	{0x271d, 0x271d},
	{0x2721, 0x2721},
	{0x2728, 0x2728},
	{0x2733, 0x2734},
	{0x2744, 0x2744},
	{0x2747, 0x2747},
	{0x274c, 0x274c},
	{0x274e, 0x274e},
	{0x2753, 0x2755},
	{0x2757, 0x2757},
	{0x2763, 0x2764},
	{0x2795, 0x2797},
	{0x27a1, 0x27a1},
	{0x27b0, 0x27b0},
	{0x27bf, 0x27bf},
	{0x2934, 0x2935},
	{0x2b05, 0x2b07},
	{0x2b1b, 0x2b1c},
	{0x2b50, 0x2b50},
	{0x2b55, 0x2b55},
	{0x3030, 0x3030},
	{0x303d, 0x303d},
	{0x3297, 0x3297},
	{0x3299, 0x3299},
	{0x1f004, 0x1f004},
	{0x1f0cf, 0x1f0cf},
	{0x1f170, 0x1f171},
	{0x1f17e, 0x1f17f},
	{0x1f18e, 0x1f18e},
	{0x1f191, 0x1f19a},
	{0x1f1e6, 0x1f1ff},
	{0x1f201, 0x1f202},
	{0x1f21a, 0x1f21a},
	{0x1f22f, 0x1f22f},
	{0x1f232, 0x1f23a},
	{0x1f250, 0x1f251},
	{0x1f300, 0x1f321},
	{0x1f324, 0x1f393},
	{0x1f396, 0x1f397},
	{0x1f399, 0x1f39b},
	{0x1f39e, 0x1f3f0},
	{0x1f3f3, 0x1f3f5},
	{0x1f3f7, 0x1f4fd},
	{0x1f4ff, 0x1f53d},
	{0x1f549, 0x1f54e},
	{0x1f550, 0x1f567},
	{0x1f56f, 0x1f570},
	{0x1f573, 0x1f57a},
	{0x1f587, 0x1f587},
	{0x1f58a, 0x1f58d},
	{0x1f590, 0x1f590},
	{0x1f595, 0x1f596},
	{0x1f5a4, 0x1f5a5},
	{0x1f5a8, 0x1f5a8},
	{0x1f5b1, 0x1f5b2},
	{0x1f5bc, 0x1f5bc},
	{0x1f5c2, 0x1f5c4},
	{0x1f5d1, 0x1f5d3},
	{0x1f5dc, 0x1f5de},
	{0x1f5e1, 0x1f5e1},
	{0x1f5e3, 0x1f5e3},
	{0x1f5e8, 0x1f5e8},
	{0x1f5ef, 0x1f5ef},
	{0x1f5f3, 0x1f5f3},
	{0x1f5fa, 0x1f64f},
	{0x1f680, 0x1f6c5},
	{0x1f6cb, 0x1f6d2},
	{0x1f6d5, 0x1f6d7},
	{0x1f6e0, 0x1f6e5},
	{0x1f6e9, 0x1f6e9},
	{0x1f6eb, 0x1f6ec},
	{0x1f6f0, 0x1f6f0},
	{0x1f6f3, 0x1f6fc},
	{0x1f7e0, 0x1f7eb},
	{0x1f90c, 0x1f93a},
	{0x1f93c, 0x1f945},
	{0x1f947, 0x1f978},
	{0x1f97a, 0x1f9cb},
	{0x1f9cd, 0x1f9ff},
	{0x1fa70, 0x1fa74},
	{0x1fa78, 0x1fa7a},
	{0x1fa80, 0x1fa86},
	{0x1fa90, 0x1faa8},
	{0x1fab0, 0x1fab6},
	{0x1fac0, 0x1fac2},
	{0x1fad0, 0x1fad6},
};

static inline bool
is_emoji(char_type code) {
	return unicode_range_bsearch(emoji_table, sizeof(emoji_table) / sizeof(struct unicode_range_table) - 1, code);
}

static const struct unicode_range_table
symbol_table[] = {
	{0x24, 0x24},
	{0x2b, 0x2b},
	{0x3c, 0x3e},
	{0x5e, 0x5e},
	{0x60, 0x60},
	{0x7c, 0x7c},
	{0x7e, 0x7e},
	{0xa2, 0xa6},
	{0xa8, 0xa9},
	{0xac, 0xac},
	{0xae, 0xb1},
	{0xb4, 0xb4},
	{0xb8, 0xb8},
	{0xd7, 0xd7},
	{0xf7, 0xf7},
	{0x2c2, 0x2c5},
	{0x2d2, 0x2df},
	{0x2e5, 0x2eb},
	{0x2ed, 0x2ed},
	{0x2ef, 0x2ff},
	{0x375, 0x375},
	{0x384, 0x385},
	{0x3f6, 0x3f6},
	{0x482, 0x482},
	{0x58d, 0x58f},
	{0x606, 0x608},
	{0x60b, 0x60b},
	{0x60e, 0x60f},
	{0x6de, 0x6de},
	{0x6e9, 0x6e9},
	{0x6fd, 0x6fe},
	{0x7f6, 0x7f6},
	{0x7fe, 0x7ff},
	{0x9f2, 0x9f3},
	{0x9fa, 0x9fb},
	{0xaf1, 0xaf1},
	{0xb70, 0xb70},
	{0xbf3, 0xbfa},
	{0xc7f, 0xc7f},
	{0xd4f, 0xd4f},
	{0xd79, 0xd79},
	{0xe3f, 0xe3f},
	{0xf01, 0xf03},
	{0xf13, 0xf13},
	{0xf15, 0xf17},
	{0xf1a, 0xf1f},
	{0xf34, 0xf34},
	{0xf36, 0xf36},
	{0xf38, 0xf38},
	{0xfbe, 0xfc5},
	{0xfc7, 0xfcc},
	{0xfce, 0xfcf},
	{0xfd5, 0xfd8},
	{0x109e, 0x109f},
	{0x1390, 0x1399},
	{0x166d, 0x166d},
	{0x17db, 0x17db},
	{0x1940, 0x1940},
	{0x19de, 0x19ff},
	{0x1b61, 0x1b6a},
	{0x1b74, 0x1b7c},
	{0x1fbd, 0x1fbd},
	{0x1fbf, 0x1fc1},
	{0x1fcd, 0x1fcf},
	{0x1fdd, 0x1fdf},
	{0x1fed, 0x1fef},
	{0x1ffd, 0x1ffe},
	{0x2044, 0x2044},
	{0x2052, 0x2052},
	{0x207a, 0x207c},
	{0x208a, 0x208c},
	{0x20a0, 0x20bf},
	{0x2100, 0x2101},
	{0x2103, 0x2106},
	{0x2108, 0x2109},
	{0x2114, 0x2114},
	{0x2116, 0x2118},
	{0x211e, 0x2123},
	{0x2125, 0x2125},
	{0x2127, 0x2127},
	{0x2129, 0x2129},
	{0x212e, 0x212e},
	{0x213a, 0x213b},
	{0x2140, 0x2144},
	{0x214a, 0x214d},
	{0x214f, 0x214f},
	{0x218a, 0x218b},
	{0x2190, 0x2307},
	{0x230c, 0x2328},
	{0x232b, 0x2426},
	{0x2440, 0x244a},
	{0x249c, 0x24e9},
	{0x2500, 0x2767},
	{0x2794, 0x27c4},
	{0x27c7, 0x27e5},
	{0x27f0, 0x2982},
	{0x2999, 0x29d7},
	{0x29dc, 0x29fb},
	{0x29fe, 0x2b73},
	{0x2b76, 0x2b95},
	{0x2b97, 0x2bff},
	{0x2ce5, 0x2cea},
	{0x2e50, 0x2e51},
	{0x2e80, 0x2e99},
	{0x2e9b, 0x2ef3},
	{0x2f00, 0x2fd5},
	{0x2ff0, 0x2ffb},
	{0x3004, 0x3004},
	{0x3012, 0x3013},
	{0x3020, 0x3020},
	{0x3036, 0x3037},
	{0x303e, 0x303f},
	{0x309b, 0x309c},
	{0x3190, 0x3191},
	{0x3196, 0x319f},
	{0x31c0, 0x31e3},
	{0x3200, 0x321e},
	{0x322a, 0x3247},
	{0x3250, 0x3250},
	{0x3260, 0x327f},
	{0x328a, 0x32b0},
	{0x32c0, 0x33ff},
	{0x4dc0, 0x4dff},
	{0xa490, 0xa4c6},
	{0xa700, 0xa716},
	{0xa720, 0xa721},
	{0xa789, 0xa78a},
	{0xa828, 0xa82b},
	{0xa836, 0xa839},
	{0xaa77, 0xaa79},
	{0xab5b, 0xab5b},
	{0xab6a, 0xab6b},
	{0xfb29, 0xfb29},
	{0xfbb2, 0xfbc1},
	{0xfdfc, 0xfdfd},
	{0xfe62, 0xfe62},
	{0xfe64, 0xfe66},
	{0xfe69, 0xfe69},
	{0xff04, 0xff04},
	{0xff0b, 0xff0b},
	{0xff1c, 0xff1e},
	{0xff3e, 0xff3e},
	{0xff40, 0xff40},
	{0xff5c, 0xff5c},
	{0xff5e, 0xff5e},
	{0xffe0, 0xffe6},
	{0xffe8, 0xffee},
	{0xfffc, 0xfffd},
	{0x10137, 0x1013f},
	{0x10179, 0x10189},
	{0x1018c, 0x1018e},
	{0x10190, 0x1019c},
	{0x101a0, 0x101a0},
	{0x101d0, 0x101fc},
	{0x10877, 0x10878},
	{0x10ac8, 0x10ac8},
	{0x1173f, 0x1173f},
	{0x11fd5, 0x11ff1},
	{0x16b3c, 0x16b3f},
	{0x16b45, 0x16b45},
	{0x1bc9c, 0x1bc9c},
	{0x1d000, 0x1d0f5},
	{0x1d100, 0x1d126},
	{0x1d129, 0x1d164},
	{0x1d16a, 0x1d16c},
	{0x1d183, 0x1d184},
	{0x1d18c, 0x1d1a9},
	{0x1d1ae, 0x1d1e8},
	{0x1d200, 0x1d241},
	{0x1d245, 0x1d245},
	{0x1d300, 0x1d356},
	{0x1d6c1, 0x1d6c1},
	{0x1d6db, 0x1d6db},
	{0x1d6fb, 0x1d6fb},
	{0x1d715, 0x1d715},
	{0x1d735, 0x1d735},
	{0x1d74f, 0x1d74f},
	{0x1d76f, 0x1d76f},
	{0x1d789, 0x1d789},
	{0x1d7a9, 0x1d7a9},
	{0x1d7c3, 0x1d7c3},
	{0x1d800, 0x1d9ff},
	{0x1da37, 0x1da3a},
	{0x1da6d, 0x1da74},
	{0x1da76, 0x1da83},
	{0x1da85, 0x1da86},
	{0x1e14f, 0x1e14f},
	{0x1e2ff, 0x1e2ff},
	{0x1ecac, 0x1ecac},
	{0x1ecb0, 0x1ecb0},
	{0x1ed2e, 0x1ed2e},
	{0x1eef0, 0x1eef1},
	{0x1f000, 0x1f02b},
	{0x1f030, 0x1f093},
	{0x1f0a0, 0x1f0ae},
	{0x1f0b1, 0x1f0bf},
	{0x1f0c1, 0x1f0cf},
	{0x1f0d1, 0x1f0f5},
	{0x1f10d, 0x1f1ad},
	{0x1f1e6, 0x1f202},
	{0x1f210, 0x1f23b},
	{0x1f240, 0x1f248},
	{0x1f250, 0x1f251},
	{0x1f260, 0x1f265},
	{0x1f300, 0x1f6d7},
	{0x1f6e0, 0x1f6ec},
	{0x1f6f0, 0x1f6fc},
	{0x1f700, 0x1f773},
	{0x1f780, 0x1f7d8},
	{0x1f7e0, 0x1f7eb},
	{0x1f800, 0x1f80b},
	{0x1f810, 0x1f847},
	{0x1f850, 0x1f859},
	{0x1f860, 0x1f887},
	{0x1f890, 0x1f8ad},
	{0x1f8b0, 0x1f8b1},
	{0x1f900, 0x1f978},
	{0x1f97a, 0x1f9cb},
	{0x1f9cd, 0x1fa53},
	{0x1fa60, 0x1fa6d},
	{0x1fa70, 0x1fa74},
	{0x1fa78, 0x1fa7a},
	{0x1fa80, 0x1fa86},
	{0x1fa90, 0x1faa8},
	{0x1fab0, 0x1fab6},
	{0x1fac0, 0x1fac2},
	{0x1fad0, 0x1fad6},
	{0x1fb00, 0x1fb92},
	{0x1fb94, 0x1fbca},
};

static inline bool
is_symbol(char_type code) {
	return unicode_range_bsearch(symbol_table, sizeof(symbol_table) / sizeof(struct unicode_range_table) - 1, code);
}


END_ALLOW_CASE_RANGE
