/* Include files */

#include "CommSysSimulink_Project2_cgxe.h"
#include "m_PuUBGzY6rFiTyBmofEgeeE.h"

unsigned int cgxe_CommSysSimulink_Project2_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 1214781741 &&
      ssGetChecksum1(S) == 1528243938 &&
      ssGetChecksum2(S) == 1269349139 &&
      ssGetChecksum3(S) == 990103944) {
    method_dispatcher_PuUBGzY6rFiTyBmofEgeeE(S, method, data);
    return 1;
  }

  return 0;
}
