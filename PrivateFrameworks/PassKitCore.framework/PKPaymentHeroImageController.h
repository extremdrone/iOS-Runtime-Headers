/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentHeroImageController : NSObject {
    NSMutableArray * _currentNetworksDownloading;
    <PKPaymentHeroImageControllerDelegate> * _delegate;
    NSArray * _featuredNetworks;
    PKPaymentHeroImageManifest * _manifest;
    int  _watchSize;
}

@property (nonatomic) <PKPaymentHeroImageControllerDelegate> *delegate;
@property (nonatomic) int watchSize;

+ (void)_addNetworkImageDownloadError:(id)arg1 downloadedSha1:(id)arg2;
+ (BOOL)_networkImageHasDownloadedWithError:(id)arg1;
+ (id)defaultPaymentCredentials;

- (void).cxx_destruct;
- (void)_alertDelgateOfDownloadedImageData:(id)arg1 network:(id)arg2 error:(id)arg3;
- (id)_builtInNetworksCardImageData;
- (id)_debugString;
- (void)beginDownloadingRemoteImages;
- (void)beginDownloadingRemoteImagesWithCompletion:(id /* block */)arg1;
- (BOOL)containsPaymentCredentialType:(int)arg1;
- (id)delegate;
- (void)downloadRemoteImageForNetwork:(id)arg1 completion:(id /* block */)arg2;
- (id)featuredNetworksImageData;
- (struct CGSize { float x1; float x2; })imageSizeForScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 webService:(id)arg3;
- (id)primaryFeaturedNetwork;
- (void)setDelegate:(id)arg1;
- (void)setWatchSize:(int)arg1;
- (int)watchSize;

@end
