/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface WiFiUtils : NSObject {
    BOOL  _joinInProgress;
    NSMutableDictionary * _missingBSSIDCounts;
    double  _periodicScanInterval;
    int  _periodicScanType;
    BOOL  _scanInProgress;
    BOOL  _scanOnlyWhenAppActive;
    NSTimer * _scanTimer;
    BOOL  _scanningActive;
    NSDictionary * _unmergedScanInfoDict;
    NSObject<OS_dispatch_semaphore> * _wifiBusy;
    struct WiFiShimContext { } * _wifiShim;
}

@property (nonatomic, retain) NSTimer *_scanTimer;
@property (nonatomic) double periodicScanInterval;
@property (nonatomic) int periodicScanType;

+ (int)barsForRSSI:(int)arg1;
+ (id)copyFilteredNetworks:(id)arg1 ignoreOptions:(int)arg2;
+ (id)getNetworkPassword:(id)arg1;
+ (BOOL)network:(id)arg1 shouldBeIgnored:(int)arg2;
+ (BOOL)networkIsApple:(id)arg1 productID:(unsigned int*)arg2;
+ (BOOL)networkIsSecure:(id)arg1 secMode:(int*)arg2 isEnterprise:(BOOL*)arg3;
+ (id)scanInfoAirPortUniqueIdentifier:(id)arg1;
+ (unsigned int)scanInfoAppleProductID:(id)arg1;
+ (id)scanInfoBSSIDStr:(id)arg1;
+ (BOOL)scanInfoCanJoin2_4GHzNetworks:(id)arg1;
+ (BOOL)scanInfoCanJoin5GHzNetworks:(id)arg1;
+ (int)scanInfoDeviceKind:(id)arg1;
+ (id)scanInfoFriendlyName:(id)arg1;
+ (BOOL)scanInfoIs5GHz:(id)arg1;
+ (BOOL)scanInfoIsAirPlayDevice:(id)arg1;
+ (BOOL)scanInfoIsAudioDevice:(id)arg1;
+ (BOOL)scanInfoIsDWDSCapable:(id)arg1 isDWDSEnabled:(BOOL*)arg2;
+ (BOOL)scanInfoIsGuestNetwork:(id)arg1;
+ (BOOL)scanInfoIsIBSS:(id)arg1;
+ (BOOL)scanInfoIsInSoftReset:(id)arg1;
+ (BOOL)scanInfoIsMFIAirPlayDevice:(id)arg1;
+ (BOOL)scanInfoIsSTAOnly:(id)arg1;
+ (BOOL)scanInfoIsUnconfigured:(id)arg1;
+ (BOOL)scanInfoIsiAPOverWiFiDevice:(id)arg1;
+ (id)scanInfoManufacturerName:(id)arg1;
+ (id)scanInfoModelName:(id)arg1;
+ (id)scanInfoNetworkName:(id)arg1;
+ (id)scanInfoStringFromAppleDeviceIE:(id)arg1 forType:(int)arg2;
+ (unsigned int)scanInfoSubAppleProductID:(id)arg1;
+ (BOOL)scanInfoSupportsACPConfigV1:(id)arg1;
+ (BOOL)scanInfoSupportsMFIConfigV1:(id)arg1;
+ (BOOL)scanInfoSupportsSpruce:(id)arg1;
+ (BOOL)scanInfoTestBitFromAppleDeviceIE:(id)arg1 forType:(int)arg2;
+ (id)sharedInstance;
+ (id)sharedInstanceRef;
+ (void)sharedInstanceRelease;
+ (BOOL)stringArray:(id)arg1 containsBSSID:(id)arg2;

- (long)_asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(BOOL)arg3 maxAge:(unsigned int)arg4 isPeriodic:(BOOL)arg5;
- (id)_scanTimer;
- (void)activateScanning:(BOOL)arg1;
- (BOOL)airPortIsOn;
- (long)asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(BOOL)arg3 maxAge:(unsigned int)arg4;
- (void)asyncWiFiScanThread:(id)arg1;
- (void)cancelAsync;
- (void)clearScanCache;
- (long)clearScanCacheSync;
- (long)closeWiFi;
- (void)dealloc;
- (long)disassociateSync;
- (BOOL)getAutoJoinState;
- (id)getCurrentAssociationInfo;
- (id)getCurrentAssociationInfoOrNil;
- (id)getCurrentAssociationScanInfo;
- (id)getIfList;
- (id)getLinkStatus;
- (id)getNetworkPasswordForNetworkNamed:(id)arg1;
- (id)getPreferredNetworks:(BOOL)arg1;
- (id)init;
- (BOOL)isCurrentlyAssociatedToAnInfrastructureNetwork:(BOOL*)arg1;
- (BOOL)isJoinInProgress;
- (BOOL)isScanInProgress;
- (BOOL)isScanningActive;
- (long)joinNetworkWithNameAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)joinNetworkWithNameThread:(id)arg1;
- (long)joinNetworkWithScanInfoAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (long)joinNetworkWithScanInfoSync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)joinNetworkWithScanInfoThread:(id)arg1;
- (void)mergeScanResults:(id)arg1 ageOut:(BOOL)arg2;
- (id)mergedScanInfoArray;
- (long)openWiFi;
- (double)periodicScanInterval;
- (int)periodicScanType;
- (id)resetScanInfosOfType:(int)arg1;
- (id)scanInfoForMACAddress:(id)arg1;
- (id)scanInfoForName:(id)arg1 wifiType:(int)arg2;
- (void)scanTimerCallback:(id)arg1;
- (long)setAutoJoinState:(BOOL)arg1;
- (void)setJoinInProgress:(BOOL)arg1;
- (void)setPeriodicScanInterval:(double)arg1;
- (void)setPeriodicScanType:(int)arg1;
- (void)setScanInProgress:(BOOL)arg1;
- (void)setScanOnlyWhenAppActive:(BOOL)arg1;
- (void)setUnmergedScanInfoDict:(id)arg1;
- (void)set_scanTimer:(id)arg1;
- (void)triggerScan;
- (id)unconfiguredScanInfosOfType:(int)arg1;
- (id)unmergedScanInfoArray;
- (id)unmergedScanInfoDict;

@end
