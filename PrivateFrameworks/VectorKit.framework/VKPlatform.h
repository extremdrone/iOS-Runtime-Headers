/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPlatform : NSObject {
    BOOL _lowPerformanceDevice;
    unsigned int _memSize;
    int _numCPUs;
    BOOL _proceduralRoadAlpha;
    BOOL _supports3DBuildingStrokes;
    BOOL _supportsBuildingStrokes;
    BOOL _supportsCoastlineGlows;
    BOOL _useCheapTrafficShader;
}

@property (nonatomic, readonly) BOOL canMakeSharingThumbnails;
@property (nonatomic, readonly) BOOL isPad;
@property (nonatomic, readonly) BOOL lowPerformanceDevice;
@property (nonatomic, readonly) float mainScreenPPI;
@property (nonatomic, readonly) float mainScreenScale;
@property (nonatomic, readonly) float maxContentScaleForRendering;
@property (nonatomic, readonly) unsigned int memorySize;
@property (nonatomic, readonly) BOOL proceduralRoadAlpha;
@property (nonatomic, readonly) BOOL roadsWithSimpleLineMeshesAvailable;
@property (nonatomic, readonly) double routeLineSimplificationEpsilon;
@property (nonatomic, readonly) BOOL shouldDrawWhenReady;
@property (nonatomic, readonly) BOOL shouldLayoutLabelsInParallel;
@property (nonatomic, readonly) BOOL shouldPregenerateLabelGlyphs;
@property (nonatomic, readonly) BOOL shouldStyleLabelsInParallel;
@property (nonatomic, readonly) BOOL supports3DBuildingStrokes;
@property (nonatomic, readonly) BOOL supports3DBuildings;
@property (nonatomic, readonly) BOOL supportsBuildingShadows;
@property (nonatomic, readonly) BOOL supportsBuildingStrokes;
@property (nonatomic, readonly) BOOL supportsCoastlineGlows;
@property (nonatomic, readonly) BOOL supportsHiResBuildings;
@property (nonatomic, readonly) BOOL supportsHiResRTT;
@property (nonatomic, readonly) unsigned char tileDecodeQueueWidth;
@property (nonatomic, readonly) unsigned int tileMaximumLimit;
@property (nonatomic, readonly) unsigned int tilePrefetchNumberOfScreens;
@property (nonatomic, readonly) BOOL useCheapTrafficShader;

+ (id)sharedPlatform;

- (unsigned int)_calculateMemSize;
- (void)_determineHardware;
- (BOOL)canMakeSharingThumbnails;
- (void)dealloc;
- (id)init;
- (BOOL)isPad;
- (BOOL)lowPerformanceDevice;
- (float)mainScreenPPI;
- (float)mainScreenScale;
- (float)maxContentScaleForRendering;
- (unsigned int)memorySize;
- (BOOL)proceduralRoadAlpha;
- (BOOL)roadsWithSimpleLineMeshesAvailable;
- (double)routeLineSimplificationEpsilon;
- (BOOL)shouldDrawWhenReady;
- (BOOL)shouldLayoutLabelsInParallel;
- (BOOL)shouldPregenerateLabelGlyphs;
- (BOOL)shouldStyleLabelsInParallel;
- (BOOL)supports3DBuildingStrokes;
- (BOOL)supports3DBuildings;
- (BOOL)supportsBuildingShadows;
- (BOOL)supportsBuildingStrokes;
- (BOOL)supportsCoastlineGlows;
- (BOOL)supportsHiResBuildings;
- (BOOL)supportsHiResRTT;
- (unsigned char)tileDecodeQueueWidth;
- (unsigned int)tileMaximumLimit;
- (unsigned int)tilePrefetchNumberOfScreens;
- (unsigned int)tileReserveLimit:(BOOL)arg1;
- (BOOL)useCheapTrafficShader;

@end