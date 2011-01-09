/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSIndexPath : NSObject <NSCopying, NSCoding>
{
    NSUInteger *_indexes;
    NSUInteger _hash;
    NSUInteger _length;
    void *_reserved;
}

@property(readonly) NSUInteger section;
@property(readonly) NSUInteger row;

+ (id)_fastUniquer;
+ (id)_uniquer;
+ (id)indexPathWithIndex:(NSUInteger)arg1;
+ (id)indexPathWithIndexes:(NSUInteger*)arg1 length:(NSUInteger)arg2;
+ (id)indexPathForRow:(NSUInteger)arg1 inSection:(NSUInteger)arg2;
+ (id)_mapkit_tileZoomLevelZero;
+ (id)_mapkit_tileZoomLevelTwo;
+ (id)_mapkit_indexPathWithTileLocation:(struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })arg1;
+ (id)_mapkit_indexPathWithZoomLevel:(NSUInteger)arg1 x:(NSUInteger)arg2 y:(NSUInteger)arg3;

- (id)init;
- (id)initWithIndex:(NSUInteger)arg1;
- (id)initWithIndexes:(NSUInteger*)arg1 length:(NSUInteger)arg2;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(NSUInteger)arg1;
- (NSUInteger)length;
- (NSUInteger)indexAtPosition:(NSUInteger)arg1;
- (void)getIndexes:(NSUInteger*)arg1;
- (id)description;
- (NSInteger)compare:(id)arg1;
- (NSUInteger)section;
- (NSUInteger)row;
- (id)_mapkit_initWithTileLocation:(struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })arg1;
- (id)_mapkit_initWithZoomLevel:(NSUInteger)arg1 x:(NSUInteger)arg2 y:(NSUInteger)arg3;
- (NSUInteger)_mapkit_zoomLevel;
- (BOOL)_mapkit_hasCoordinate;
- (NSUInteger)_mapkit_x;
- (NSUInteger)_mapkit_y;
- (struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })_mapkit_tileLocation;

@end