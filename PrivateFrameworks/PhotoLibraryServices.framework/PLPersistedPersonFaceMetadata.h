/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedPersonFaceMetadata : NSObject <NSCoding, PLFaceRebuildDescription> {
    NSString * _assetCloudGUID;
    NSString * _assetUUID;
    double  _centerX;
    double  _centerY;
    int  _faceAlgorithmVersion;
    BOOL  _hidden;
    BOOL  _isHidden;
    BOOL  _manual;
    BOOL  _nameSourceAuto;
    BOOL  _representative;
    double  _size;
}

@property (nonatomic, copy) NSString *assetCloudGUID;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int faceAlgorithmVersion;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (getter=isHidden, nonatomic, readonly) BOOL isHidden;
@property (getter=isManual, nonatomic) BOOL manual;
@property (getter=isNameSourceAuto, nonatomic) BOOL nameSourceAuto;
@property (getter=isRepresentative, nonatomic) BOOL representative;
@property (nonatomic) double size;
@property (readonly) Class superclass;

+ (void)_migratePersistedFaces:(id)arg1 fromVersion:(unsigned int)arg2;
+ (id)detectedFacePropertiesToFetch;
+ (id)detectedFaceRelationshipKeyPathsToPrefetch;
+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(id /* block */)arg3;
+ (id)persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(BOOL)arg2;

- (void).cxx_destruct;
- (id)assetCloudGUID;
- (id)assetUUID;
- (double)centerX;
- (double)centerY;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)faceAlgorithmVersion;
- (id)initWithCoder:(id)arg1;
- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isHidden;
- (BOOL)isManual;
- (BOOL)isNameSourceAuto;
- (BOOL)isRepresentative;
- (void)setAssetCloudGUID:(id)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setFaceAlgorithmVersion:(int)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setManual:(BOOL)arg1;
- (void)setNameSourceAuto:(BOOL)arg1;
- (void)setRepresentative:(BOOL)arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end
