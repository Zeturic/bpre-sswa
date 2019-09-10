#pragma once

#define PSS_PAGE_INFO       0

struct PACKED PokemonSummaryScreen {
    u8 unk0[0x3210];
    u8 maxMonIndex;
    u8 unk3211[0x03];
    u8 currPageIndex;
    u8 unk3215[0xDF];
    struct { struct Pokemon *mons; } monList;
    u8 unk32F8[0x10];
};

extern struct PokemonSummaryScreen *sMonSummaryScreen;
extern u8 sMonSummaryScreenCurrMonIndex;

_Static_assert(sizeof(struct PokemonSummaryScreen) == 0x3308, "ass");
