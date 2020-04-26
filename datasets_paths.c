/** @file datasets_paths.c
 ** **author:** Palaiologos Efstathios  
 **
 ** @brief Paths of the datasets.  
 **
 ** Defines two char const*[] objects, the first has the paths of the selected original
 ** dataset(uncompressed) and the other has the paths the corresponding cocompressed dataset.
 **
 ** define exactly one of the macros __MIT_DATASET__ and __CUSTOM_DATASET___ 
 */



//#define __MIT_DATASET__ ///< Sets the paths of directories  for the compression of MIT Database
#define __CUSTOM_DATASET__ ///< Sets the paths of directories for the compression of a CUSTOM Database 

#ifdef __CUSTOM_DATASET__

#define REC_FILES_NUM 8 ///< defines the number of the itterations that will be needed to compress the whole of the selected dataset
/** Paths of the original uncompressed custom dataset
*/
char const* samples_dir[] = {"samples/ecgA04apnea.bin",
	"samples/ecgB05apnea.bin",
	"samples/ecgEkgMove.bin",
	"samples/orig_ecgUoP.bin",
	"samples/eegchb070707mit.bin",
	"samples/eegchb141414mit.bin",
	"samples/orig_eegF4UoP.bin",
	"samples/orig_eegOZUoP.bin" };

/** Paths of the compressed custom dataset
*/
char const* cmpr_samples_dir[] ={"cmprsamples/C_ecgA04apnea.bin",
	"cmprsamples/C_ecgB05apnea.bin",
	"cmprsamples/C_ecgEkgMove.bin",
	"cmprsamples/C_orig_ecgUoP.bin",
	"cmprsamples/C_eegchb070707mit.bin",
	"cmprsamples/C_eegchb141414mit.bin",
	"cmprsamples/C_orig_eegF4UoP.bin",
	"cmprsamples/C_orig_eegOZUoP.bin", };

#endif /* __CUSTOM_DATASET__ */


#ifdef __MIT_DATASET__


#define REC_FILES_NUM 96 ///< defines the number of the itteration that will be needed to compress the whole of the selected dataset
/** Paths of the original uncompressed MIT ARYTHMIA dataset
*/
char const* samples_dir[] = {
	"mit/100m1.bin",
	"mit/100m2.bin",
	"mit/101m1.bin",
	"mit/101m2.bin",
	"mit/102m1.bin",
	"mit/102m2.bin",
	"mit/103m1.bin",
	"mit/103m2.bin",
	"mit/104m1.bin",
	"mit/104m2.bin",
	"mit/105m1.bin",
	"mit/105m2.bin",
	"mit/106m1.bin",
	"mit/106m2.bin",
	"mit/107m1.bin",
	"mit/107m2.bin",
	"mit/108m1.bin",
	"mit/108m2.bin",
	"mit/109m1.bin",
	"mit/109m2.bin",
	"mit/111m1.bin",
	"mit/111m2.bin",
	"mit/112m1.bin",
	"mit/112m2.bin",
	"mit/113m1.bin",
	"mit/113m2.bin",
	"mit/114m1.bin",
	"mit/114m2.bin",
	"mit/115m1.bin",
	"mit/115m2.bin",
	"mit/116m1.bin",
	"mit/116m2.bin",
	"mit/117m1.bin",
	"mit/117m2.bin",
	"mit/118m1.bin",
	"mit/118m2.bin",
	"mit/119m1.bin",
	"mit/119m2.bin",
	"mit/121m1.bin",
	"mit/121m2.bin",
	"mit/122m1.bin",
	"mit/122m2.bin",
	"mit/123m1.bin",
	"mit/123m2.bin",
	"mit/124m1.bin",
	"mit/124m2.bin",
	"mit/200m1.bin",
	"mit/200m2.bin",
	"mit/201m1.bin",
	"mit/201m2.bin",
	"mit/202m1.bin",
	"mit/202m2.bin",
	"mit/203m1.bin",
	"mit/203m2.bin",
	"mit/205m1.bin",
	"mit/205m2.bin",
	"mit/207m1.bin",
	"mit/207m2.bin",
	"mit/208m1.bin",
	"mit/208m2.bin",
	"mit/209m1.bin",
	"mit/209m2.bin",
	"mit/210m1.bin",
	"mit/210m2.bin",
	"mit/212m1.bin",
	"mit/212m2.bin",
	"mit/213m1.bin",
	"mit/213m2.bin",
	"mit/214m1.bin",
	"mit/214m2.bin",
	"mit/215m1.bin",
	"mit/215m2.bin",
	"mit/217m1.bin",
	"mit/217m2.bin",
	"mit/219m1.bin",
	"mit/219m2.bin",
	"mit/220m1.bin",
	"mit/220m2.bin",
	"mit/221m1.bin",
	"mit/221m2.bin",
	"mit/222m1.bin",
	"mit/222m2.bin",
	"mit/223m1.bin",
	"mit/223m2.bin",
	"mit/228m1.bin",
	"mit/228m2.bin",
	"mit/230m1.bin",
	"mit/230m2.bin",
	"mit/231m1.bin",
	"mit/231m2.bin",
	"mit/232m1.bin",
	"mit/232m2.bin",
	"mit/233m1.bin",
	"mit/233m2.bin",
	"mit/234m1.bin",
	"mit/234m2.bin",};
/** Paths of the compressed MIT ARYTHMIA dataset
*/
char const* cmpr_samples_dir[] = {
	"cmpmit/100m1.bin",
	"cmpmit/100m2.bin",
	"cmpmit/101m1.bin",
	"cmpmit/101m2.bin",
	"cmpmit/102m1.bin",
	"cmpmit/102m2.bin",
	"cmpmit/103m1.bin",
	"cmpmit/103m2.bin",
	"cmpmit/104m1.bin",
	"cmpmit/104m2.bin",
	"cmpmit/105m1.bin",
	"cmpmit/105m2.bin",
	"cmpmit/106m1.bin",
	"cmpmit/106m2.bin",
	"cmpmit/107m1.bin",
	"cmpmit/107m2.bin",
	"cmpmit/108m1.bin",
	"cmpmit/108m2.bin",
	"cmpmit/109m1.bin",
	"cmpmit/109m2.bin",
	"cmpmit/111m1.bin",
	"cmpmit/111m2.bin",
	"cmpmit/112m1.bin",
	"cmpmit/112m2.bin",
	"cmpmit/113m1.bin",
	"cmpmit/113m2.bin",
	"cmpmit/114m1.bin",
	"cmpmit/114m2.bin",
	"cmpmit/115m1.bin",
	"cmpmit/115m2.bin",
	"cmpmit/116m1.bin",
	"cmpmit/116m2.bin",
	"cmpmit/117m1.bin",
	"cmpmit/117m2.bin",
	"cmpmit/118m1.bin",
	"cmpmit/118m2.bin",
	"cmpmit/119m1.bin",
	"cmpmit/119m2.bin",
	"cmpmit/121m1.bin",
	"cmpmit/121m2.bin",
	"cmpmit/122m1.bin",
	"cmpmit/122m2.bin",
	"cmpmit/123m1.bin",
	"cmpmit/123m2.bin",
	"cmpmit/124m1.bin",
	"cmpmit/124m2.bin",
	"cmpmit/200m1.bin",
	"cmpmit/200m2.bin",
	"cmpmit/201m1.bin",
	"cmpmit/201m2.bin",
	"cmpmit/202m1.bin",
	"cmpmit/202m2.bin",
	"cmpmit/203m1.bin",
	"cmpmit/203m2.bin",
	"cmpmit/205m1.bin",
	"cmpmit/205m2.bin",
	"cmpmit/207m1.bin",
	"cmpmit/207m2.bin",
	"cmpmit/208m1.bin",
	"cmpmit/208m2.bin",
	"cmpmit/209m1.bin",
	"cmpmit/209m2.bin",
	"cmpmit/210m1.bin",
	"cmpmit/210m2.bin",
	"cmpmit/212m1.bin",
	"cmpmit/212m2.bin",
	"cmpmit/213m1.bin",
	"cmpmit/213m2.bin",
	"cmpmit/214m1.bin",
	"cmpmit/214m2.bin",
	"cmpmit/215m1.bin",
	"cmpmit/215m2.bin",
	"cmpmit/217m1.bin",
	"cmpmit/217m2.bin",
	"cmpmit/219m1.bin",
	"cmpmit/219m2.bin",
	"cmpmit/220m1.bin",
	"cmpmit/220m2.bin",
	"cmpmit/221m1.bin",
	"cmpmit/221m2.bin",
	"cmpmit/222m1.bin",
	"cmpmit/222m2.bin",
	"cmpmit/223m1.bin",
	"cmpmit/223m2.bin",
	"cmpmit/228m1.bin",
	"cmpmit/228m2.bin",
	"cmpmit/230m1.bin",
	"cmpmit/230m2.bin",
	"cmpmit/231m1.bin",
	"cmpmit/231m2.bin",
	"cmpmit/232m1.bin",
	"cmpmit/232m2.bin",
	"cmpmit/233m1.bin",
	"cmpmit/233m2.bin",
	"cmpmit/234m1.bin",
	"cmpmit/234m2.bin",	};

#endif /*__MIT_DATASET__*/