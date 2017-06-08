# sensortag.eMD_MPU9250
Porting of the Invensense eML (MPL) on the sensortag platform

This project is based on the porting done by EinSoldiatGott and available at https://github.com/EinSoldiatGott/CC2650_MPU9250_DMP_2

I simply changed the code to optimize the power consumption. Now I2C uses the semaphore, than also the other sensors on the board can be initialized and put in low power mode. I2C rutines are those developed by TI.
To enable the power saving simply define POWER_SAVING in the preprocessor symbols. Anyway the python app suffer of delay when POWER_SAVING is defined, but this is a good starting point to include, for instance, the step counter in the sensortag firmware.

Thanks to EinSoldiatGott for his work.
 