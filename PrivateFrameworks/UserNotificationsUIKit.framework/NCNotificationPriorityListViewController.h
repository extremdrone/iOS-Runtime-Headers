/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationPriorityListViewController : NCNotificationListViewController {
    <UIViewControllerTransitionCoordinator> * _lastDismissalTransitionCoordinator;
    NCNotificationPriorityList * _notificationRequestList;
    NCNotificationRequest * _notificationRequestWithHintText;
    NCAnimationCoordinator * _requestOperationAnimationCoordinator;
}

@property (nonatomic, retain) <UIViewControllerTransitionCoordinator> *lastDismissalTransitionCoordinator;
@property (nonatomic, retain) NCNotificationPriorityList *notificationRequestList;
@property (nonatomic, retain) NCNotificationRequest *notificationRequestWithHintText;
@property (nonatomic, retain) NCAnimationCoordinator *requestOperationAnimationCoordinator;

- (void).cxx_destruct;
- (void)_createRequestOperationAnimationCoordinatorForInitialContentPresentation:(BOOL)arg1;
- (void)_performRequestOperationAlongsideAnimations;
- (id)_prepareHintTextForNotificationRequest:(id)arg1 movingFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_reloadNotificationViewControllerForHintTextAtIndexPath:(id)arg1;
- (void)_reloadNotificationViewControllerForHintTextAtIndexPaths:(id)arg1;
- (void)_updateRaiseToListenRequest;
- (void)clearAll;
- (void)clearAllNonPersistent;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (void)fadeIn;
- (BOOL)hasContent;
- (BOOL)hasVisibleContent;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)init;
- (BOOL)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)lastDismissalTransitionCoordinator;
- (BOOL)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestList;
- (id)notificationRequestWithHintText;
- (void)notificationViewController:(id)arg1 didCommitToLongLookPresentation:(BOOL)arg2 withCoordinator:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)requestOperationAnimationCoordinator;
- (void)setLastDismissalTransitionCoordinator:(id)arg1;
- (void)setNotificationRequestList:(id)arg1;
- (void)setNotificationRequestWithHintText:(id)arg1;
- (void)setRequestOperationAnimationCoordinator:(id)arg1;
- (BOOL)shouldAddHintTextForNotificationViewController:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;

@end
