#include "bootscreen.h"

#define EXT ".bmp"

/* Never got around to adding any arguments for drawing
 * just the systems you care about, but doesn't really matter.
 */
int main(int argc, char **argv)
{
	draw_bootscreen(VGX, "vgx"EXT);
	draw_bootscreen(MG1_ENTRY, "mg1_entry"EXT);
	draw_bootscreen(MG1_EXPRESS, "mg1_express"EXT);
	draw_bootscreen(REALITY_ENGINE, "reality_engine"EXT);
	draw_bootscreen(REALITY_ENGINE_NEW, "reality_engine_new"EXT);
	draw_bootscreen(INDIGO, "indigo"EXT);
	draw_bootscreen(INDIGO2, "indigo2"EXT);
	draw_bootscreen(INDY, "indy"EXT);
	draw_bootscreen(POWERINDIGO2, "powerindigo2"EXT);
	draw_bootscreen(INDIGO2R10K, "indigo2r10k"EXT);
	draw_bootscreen(OCTANE, "octane"EXT);
	draw_bootscreen(O2, "o2"EXT);
	draw_bootscreen(FUEL, "fuel"EXT);
	draw_bootscreen(INFINITE_PERFORMANCE, "infinite_performance"EXT);
	draw_bootscreen(INFINITE_REALITY, "infinite_reality"EXT);
	draw_bootscreen(TEZRO, "tezro"EXT);
	draw_bootscreen(ULTIMATE_VISION, "ultimate_vision"EXT);

	return 0;
}
