PATCH_BEGIN("D2Common.dll", 0xe3fd0984)

/* Eastern Sun 3.00 R6D - Jewelry stuff, no idea */
PATCH(0x29D58, 'r', 'n', '3', ' ')
PATCH(0x29D6B, 'a', 'u', '3', ' ')

PATCH_ORIG(0x29D58, 0x72, 0x69, 0x6E, 0x20)
PATCH_ORIG(0x29D6B, 0x61, 0x6D, 0x75, 0x20)

/* Marrowwalk for 1.12a, as Eastern Sun uses it as a feature. */
PATCH(0xC626, 0x90, 0x90)

PATCH_END()
