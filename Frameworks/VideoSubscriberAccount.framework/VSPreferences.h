/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPreferences : NSObject {
    VSDevice * _device;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic) int cachedAvailabilityStatus;
@property (nonatomic) int cachedDeveloperProviderStatus;
@property (nonatomic) int cachedStoreProviderStatus;
@property (nonatomic, retain) VSDevice *device;
@property (nonatomic, readonly) BOOL hasSentWelcomeMessage;
@property (nonatomic, readonly, copy) NSURL *overridingAppBootURL;
@property (nonatomic, readonly) BOOL shouldAlwaysAllowRemoteInspection;
@property (nonatomic, readonly) BOOL shouldDisableRequestTimeouts;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (int)cachedAvailabilityStatus;
- (int)cachedDeveloperProviderStatus;
- (int)cachedStoreProviderStatus;
- (id)device;
- (BOOL)hasAcknowledgedUnsupportedIdentityProvider:(id)arg1;
- (BOOL)hasSentWelcomeMessage;
- (void)noteDidAcknowledgeUnsupportedIdentityProvider:(id)arg1;
- (void)noteDidSendWelcomeMessage;
- (id)overridingAppBootURL;
- (void)setCachedAvailabilityStatus:(int)arg1;
- (void)setCachedDeveloperProviderStatus:(int)arg1;
- (void)setCachedStoreProviderStatus:(int)arg1;
- (void)setDevice:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (BOOL)shouldAlwaysAllowRemoteInspection;
- (BOOL)shouldDisableRequestTimeouts;
- (id)userDefaults;

@end
