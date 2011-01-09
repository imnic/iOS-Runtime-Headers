/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSUnarchiver : NSCoder 
{
    void *datax;
    NSUInteger cursor;
    struct _NSZone { } *objectZone;
    NSUInteger systemVersion;
    BOOL streamerVersion;
    BOOL swap;
    BOOL unused1;
    BOOL unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    NSInteger lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

+ (void)initialize;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
+ (id)classNameDecodedForArchiveClassName:(id)arg1;

- (id)initForReadingWithData:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)_setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (struct _NSZone { }*)objectZone;
- (BOOL)isAtEnd;
- (NSUInteger)systemVersion;
- (NSInteger)versionForClassName:(id)arg1;
- (id)data;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(NSUInteger)arg2 at:(void*)arg3;
- (void*)decodeBytesWithReturnedLength:(NSUInteger*)arg1;
- (id)decodeObject;
- (id)decodeDataObject;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (id)classNameDecodedForArchiveClassName:(id)arg1;

@end