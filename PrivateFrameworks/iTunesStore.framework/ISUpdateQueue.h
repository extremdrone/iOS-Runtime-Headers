/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISItemInfoDataSource, ISRemoteObserver, NSMutableArray;

@interface ISUpdateQueue : NSObject {
    unsigned int _fetching : 1;
    unsigned int _haveUnreadUpdates : 1;
    unsigned int _hasFetchedUpdates : 1;
    unsigned int _markAsReadAfterFetch : 1;
    id _delegate;
    ISItemInfoDataSource *_itemInfoDataSource;
    ISRemoteObserver *_remoteObserver;
    NSMutableArray *_updates;
}

@property(retain,readonly) NSArray *updates; /* unknown property attribute: V_updates */
@property(retain) ISItemInfoDataSource *itemInfoDataSource; /* unknown property attribute: V_itemInfoDataSource */
@property id delegate; /* unknown property attribute: V_delegate */
@property(readonly) BOOL fetchedUpdates;
@property(getter=isFetching,readonly) BOOL fetching;
@property(readonly) BOOL haveUnreadUpdates;

+ (void)_externalApplicationChange:(id)arg1;
+ (BOOL)allowQueueCheck;
+ (id)checkTriggerApplicationName;
+ (double)checkTriggerDelay;
+ (BOOL)haveScheduledQueueChecks;
+ (void)scheduleQueueCheckAfterDelay:(double)arg1;
+ (void)setWatchesForExternalChanges:(BOOL)arg1;

- (id)_dateOfNewestUpdate;
- (void)_loadFromDaemon;
- (BOOL)_markAsRead;
- (void)_queueChanged:(id)arg1;
- (void)_queueError:(id)arg1;
- (NSUInteger)_updateCountFromDaemon:(NSUInteger)arg1 forClient:(NSUInteger)arg2;
- (id)_updateFromDaemon:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 forClient:(NSUInteger)arg3;
- (BOOL)beginWatchingDaemonForObserver:(id)arg1;
- (BOOL)checkQueue;
- (void)dealloc;
- (id)delegate;
- (void)endWatchingDaemonForObserver:(id)arg1 afterDeath:(BOOL)arg2;
- (BOOL)fetchedUpdates;
- (BOOL)haveUnreadUpdates;
- (id)initWithDataSource:(id)arg1;
- (BOOL)isFetching;
- (id)itemInfoDataSource;
- (BOOL)markAllAsRead;
- (BOOL)reallyCheckQueue;
- (void)setDelegate:(id)arg1;
- (void)setItemInfoDataSource:(id)arg1;
- (id)updates;

@end