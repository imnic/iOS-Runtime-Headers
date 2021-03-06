/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSDate, NSString;

@interface PHAssetComment : PHObject {
    BOOL _canBeDeletedByUser;
    NSString *_cloudGUID;
    NSDate *_commentClientDate;
    NSDate *_commentDate;
    NSString *_commentText;
    NSString *_commenterHashedPersonID;
    BOOL _isBatchComment;
    BOOL _isCaption;
    BOOL _isDeletable;
    BOOL _isInterestingToUser;
    BOOL _isLike;
    BOOL _isMyComment;
}

@property(readonly) BOOL canBeDeletedByUser;
@property(readonly) NSString * cloudGUID;
@property(readonly) NSDate * commentClientDate;
@property(readonly) NSDate * commentDate;
@property(readonly) NSString * commentText;
@property(readonly) NSString * commenterDisplayName;
@property(readonly) NSString * commenterEmail;
@property(readonly) NSString * commenterFirstName;
@property(readonly) NSString * commenterFullName;
@property(readonly) NSString * commenterHashedPersonID;
@property(readonly) NSString * commenterLastName;
@property(readonly) BOOL isBatchComment;
@property(readonly) BOOL isCaption;
@property(readonly) BOOL isDeletable;
@property(readonly) BOOL isInterestingForAlbumsSorting;
@property(readonly) BOOL isInterestingToUser;
@property(readonly) BOOL isLike;
@property(readonly) BOOL isMyComment;

+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (BOOL)_isInterestingToUser:(id)arg1;
- (BOOL)canBeDeletedByUser;
- (Class)changeRequestClass;
- (id)cloudGUID;
- (id)commentClientDate;
- (id)commentDate;
- (id)commentText;
- (id)commenterDisplayName;
- (id)commenterEmail;
- (id)commenterFirstName;
- (id)commenterFullName;
- (id)commenterHashedPersonID;
- (id)commenterLastName;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (BOOL)isBatchComment;
- (BOOL)isCaption;
- (BOOL)isDeletable;
- (BOOL)isInterestingForAlbumsSorting;
- (BOOL)isInterestingToUser;
- (BOOL)isLike;
- (BOOL)isMyComment;
- (BOOL)shouldNotifyAsBulletinWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2;

@end
