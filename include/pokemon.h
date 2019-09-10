#pragma once

#define MON_DATA_IS_EGG            45

struct PACKED Pokemon {
    u8 unk0[100];
};

u32 GetMonData(struct Pokemon *mon, s32 field);
