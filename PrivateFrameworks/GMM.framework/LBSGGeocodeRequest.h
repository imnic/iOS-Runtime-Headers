/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest {
    NSInteger _addressLinesLimit;
    LBSGRectangle *_boundingBox;
    BOOL _hasAddressLinesLimit;
    BOOL _hasIncludeBoundingBoxes;
    BOOL _hasNumFeatureLimit;
    BOOL _includeBoundingBoxes;
    NSUInteger _numFeatureLimit;
}

@property(retain) LBSGRectangle *boundingBox;
@property NSInteger addressLinesLimit;
@property(readonly) BOOL hasAddressLinesLimit;
@property(readonly) BOOL hasBoundingBox;
@property(readonly) BOOL hasIncludeBoundingBoxes;
@property(readonly) BOOL hasNumFeatureLimit;
@property BOOL includeBoundingBoxes;
@property NSUInteger numFeatureLimit;

- (NSInteger)addressLinesLimit;
- (id)boundingBox;
- (void)dealloc;
- (id)description;
- (BOOL)hasAddressLinesLimit;
- (BOOL)hasBoundingBox;
- (BOOL)hasIncludeBoundingBoxes;
- (BOOL)hasNumFeatureLimit;
- (BOOL)includeBoundingBoxes;
- (id)init;
- (NSUInteger)numFeatureLimit;
- (BOOL)readFrom:(id)arg1;
- (NSUInteger)requestTypeCode;
- (Class)responseClass;
- (void)setAddressLinesLimit:(NSInteger)arg1;
- (void)setBoundingBox:(id)arg1;
- (void)setIncludeBoundingBoxes:(BOOL)arg1;
- (void)setNumFeatureLimit:(NSUInteger)arg1;
- (void)writeTo:(id)arg1;

@end