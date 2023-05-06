.gba
.thumb

.open "rom.gba", "test.gba", 0x08000000

.org allocation
.area allocation_size
    .word 0xFEFEFEFE
    .importobj "build/linked.o"
    .word 0xFEFEFEFE
.endarea

.org 0x0813B20C
.area 0xF0, 0xFE
    ldr r3, =ChangeSummaryPokemonNormal |1
    bx r3
    .pool
.endarea

.close
