/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyReportingController : NSObject {
    MPCJinglePlayActivityReportingController * _jinglePlayActivityReportingController;
    MPCMediaPlayerLegacyPlayer * _player;
    MPCReportingPlaybackObserver * _reportingPlaybackObserver;
}

@property (nonatomic, retain) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (nonatomic) MPCMediaPlayerLegacyPlayer *player;
@property (nonatomic, retain) MPCReportingPlaybackObserver *reportingPlaybackObserver;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_cloudServiceControllerCloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_cloudServiceControllerSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_storefrontDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (id)jinglePlayActivityReportingController;
- (id)player;
- (id)reportingPlaybackObserver;
- (void)setJinglePlayActivityReportingController:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setReportingPlaybackObserver:(id)arg1;

@end
