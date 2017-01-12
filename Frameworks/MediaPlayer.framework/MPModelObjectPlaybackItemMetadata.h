/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    MPModelObject * _modelObject;
    <MPModelObjectPlaybackItemMetadataDelegate> * _modelObjectDelegate;
    MPModelSong * _song;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, retain) MPModelObject *modelObject;
@property (nonatomic) <MPModelObjectPlaybackItemMetadataDelegate> *modelObjectDelegate;

+ (id)_requiredPlaylistEntryProperties;
+ (id)_requiredSongProperties;
+ (BOOL)_shouldRespectMusicCellularDataSetting;
+ (BOOL)_shouldRespectStoreCellularDataSetting;
+ (id)requiredPropertiesForModelObjectClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned int*)arg2 protectionType:(unsigned int*)arg3 usesPurchaseBundle:(BOOL*)arg4;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (BOOL)allowsAssetCaching;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned int*)arg1 protectionType:(unsigned int*)arg2 usesPurchaseBundle:(BOOL*)arg3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned int)contentType;
- (id)copyrightText;
- (void)dealloc;
- (long long)downloadIdentifier;
- (int)endpointType;
- (double)expectedDuration;
- (unsigned int)hash;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (id)localNetworkContentURL;
- (id)mediaItem;
- (long long)mediaLibraryPersistentID;
- (id)modelObject;
- (id)modelObjectDelegate;
- (id)modelSong;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned int)arg2 assetQuality:(unsigned int)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setModelObject:(id)arg1;
- (void)setModelObjectDelegate:(id)arg1;
- (BOOL)shouldRememberBookmarkTime;
- (BOOL)shouldReportPlayEventsToStore;
- (BOOL)showComposer;
- (unsigned long long)storeAccountID;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned int)arg1 assetFlavor:(id)arg2 protectionType:(unsigned int)arg3 pathExtension:(id)arg4;
- (float)volumeNormalization;

@end
