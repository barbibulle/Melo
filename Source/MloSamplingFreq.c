/*----------------------------------------------------------------------
|       Includes
+---------------------------------------------------------------------*/
#include "MloSamplingFreq.h"

/*----------------------------------------------------------------------
|       Constants
+---------------------------------------------------------------------*/
const MLO_UInt32 MLO_SamplingFreq_table [MLO_SAMPLING_FREQ_INDEX_NBR_ELT] =
{
    96000,
    88200,
    64000,
    48000,
    44100,
    32000,
    24000,
    22050,
    16000,
    12000,
    11025,
    8000,
    7350,
    0,      /* Reserved */
    0,      /* Reserved */
    0       /* Escape code */
};
