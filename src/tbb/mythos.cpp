#include "tbb/mythos.h"

static bool dynamicThreading = false;

void tbb::enableDynamicThreading() { dynamicThreading = true; }
void tbb::disableDynamicThreading() { dynamicThreading = false; }
bool tbb::dynamicThreadingEnabled() { return dynamicThreading; }

