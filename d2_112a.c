#include "common.h"
#include <patch.h>

#include "d2.h"
#include "es300.h"

#define HEADER "d2_112a_common.h"
#define NAME d2common_112a
#include "declPatch.h"

#define HEADER "d2_112a_game.h"
#define NAME d2game_112a
#include "declPatch.h"

int patch_112a(void)
{
	if (patch_d2common_112a()) goto err_common;
	if (patch_d2game_112a()) goto err_game;
	return 0;

err_game:
	unpatch_d2common_112a();
err_common:
	return -1;
}

void unpatch_112a(void)
{
	unpatch_d2game_112a();
	unpatch_d2common_112a();
}
