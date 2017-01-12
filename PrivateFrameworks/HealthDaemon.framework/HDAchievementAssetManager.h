/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementAssetManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver> {
    NSHashTable * _assetObservers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _waitingToRun;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForOSUpdate;
- (id)_lastSuccessfulUpdateDate;
- (void)_performAchievementsUpdateIfWaitingWithCompletion:(id /* block */)arg1;
- (void)_performActivity:(id)arg1;
- (BOOL)_queue_isWaitingToRun;
- (void)_queue_notifyObservers;
- (void)_queue_performAchievementsUpdateWithCompletion:(id /* block */)arg1;
- (void)_queue_setWaitingToRun:(BOOL)arg1;
- (void)_registerActivity;
- (void)_requestNanoSyncAfterAssetUpdates;
- (void)_setLastSuccessfulUpdateDate:(id)arg1;
- (void)_setNeedsUpdateWithCompletion:(id /* block */)arg1;
- (void)achievementsAdded:(id)arg1;
- (void)addAssetObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2;
- (void)nanoSyncManagerDidChangeState:(id)arg1;
- (void)removeAssetObserver:(id)arg1;
- (id)serverURLWithError:(id*)arg1;
- (void)setServerURL:(id)arg1;
- (void)updateAllAssetsWithCompletion:(id /* block */)arg1;

@end
