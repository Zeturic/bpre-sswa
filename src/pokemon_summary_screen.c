#include "global.h"
#include "pokemon.h"
#include "pokemon_summary_screen.h"

s8 SeekToNextMonInSingleParty(s8 delta)
{
    struct Pokemon *mon = sMonSummaryScreen->monList.mons;
    u8 index = sLastViewedMonIndex;
    u8 numMons = sMonSummaryScreen->maxMonIndex + 1;
    delta += numMons;

    index = (index + delta) % numMons;

    // skip over any Eggs unless on the Info Page
    if (sMonSummaryScreen->currPageIndex != PSS_PAGE_INFO)
        while (GetMonData(&mon[index], MON_DATA_IS_EGG))
            index = (index + delta) % numMons;

    // to avoid "scrolling" to the same Pokemon
    if (index == sLastViewedMonIndex)
        return -1;
    else
        return index;
}
