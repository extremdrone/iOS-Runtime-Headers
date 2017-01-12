/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessFriends.framework/FitnessFriends
 */

@interface FFFriendListManager : NSObject {
    NSSet * _allFriends;
    NSCache * _displayContextToSortedSectionsCache;
    int  _friendQueryRetries;
    _HKFitnessFriendsQuery * _friendsQuery;
    HKHealthStore * _healthStore;
    HKActivitySummaryQuery * _meQuery;
    int  _meQueryRetries;
    FIUIModel * _model;
    FIUIClientToken * _modelQueryToken;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    BOOL  _shouldGenerateDemoData;
    FIUIWorkoutDataProvider * _workoutDataProvider;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_calendarDayChangedNotification:(id)arg1;
- (id)_copyFriends;
- (void)_createFakeFriends;
- (id)_createSectionsForFriends:(id)arg1 withDisplayContext:(id)arg2;
- (id)_datesToShowSnapshotsForFriend:(id)arg1 startingFromCurrentDateComponents:(id)arg2;
- (void)_enumerateVisibleDaysForFriends:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_filterFriends:(id)arg1 withActiveFriendshipAtEndOfDay:(id)arg2;
- (id)_filterFriends:(id)arg1 withSnapshotDataAtCacheIndex:(id)arg2;
- (id)_filterFriends:(id)arg1 withWheelchairUseAtCacheIndex:(id)arg2;
- (id)_friendWithUUID:(id)arg1 fromFriends:(id)arg2;
- (BOOL)_isWheelchairUserDisplayModeValidForFriends:(id)arg1 filter:(int)arg2;
- (void)_postFriendsListChangedNotification;
- (void)_queue_handleActivitySummaryUpdate:(id)arg1;
- (void)_queue_handleMyWorkoutsUpdate;
- (id)_queue_me;
- (void)_queue_restartQueryAfterErrorCount:(int)arg1 withBlock:(id /* block */)arg2;
- (void)_queue_startFriendsQuery;
- (void)_queue_startMeQuery;
- (void)_queue_stopQueries;
- (void)_queue_updateWithNewData;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(id /* block */)arg1;
- (id)_sortFriends:(id)arg1 forDisplayMode:(int)arg2 cacheIndex:(id)arg3;
- (void)_startQueries;
- (void)_startQueriesIfRequired;
- (void)_stopQueries;
- (id)allActiveFriendsAsRecipients;
- (id)allDestinationsForActiveOrPendingFriends;
- (void)dealloc;
- (void)enumerateValidDisplayModesForFilter:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)friendWithUUID:(id)arg1;
- (BOOL)hasAnyFriendsSetup;
- (BOOL)hasReachedMaxNumberOfFriends;
- (id)init;
- (id)initWithModel:(id)arg1 andWorkoutDataProvider:(id)arg2;
- (id)me;
- (unsigned int)numberOfFriendsWithInvitesAwaitingResponseFromMe;
- (int)numberOfNewFriendsAllowed;
- (id)sectionForFriendsHidingDataFromMe;
- (id)sectionForFriendsInvitedByMe;
- (id)sectionForFriendsInvitingMe;
- (id)sectionForFriendsMyDataIsHiddenFrom;
- (id)sectionForFriendsWithNoHiding;
- (id)sectionsForDisplayContext:(id)arg1;

@end
