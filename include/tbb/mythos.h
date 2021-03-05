#ifndef __TBB_mythos_H
#define __TBB_mythos_H


namespace tbb {
  void enableDynamicThreading();
  void disableDynamicThreading();
  bool dynamicThreadingEnabled();
}
#endif /*__TBB_mythos_H*/
