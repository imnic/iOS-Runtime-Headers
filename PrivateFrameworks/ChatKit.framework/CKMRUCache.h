/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary, NSMutableArray;



@interface CKMRUCache : NSObject 
{
    NSUInteger _capacity;
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_orderArray;
}

@property(readonly) NSUInteger count;
@property NSUInteger capacity;


- (id)description;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;
- (NSUInteger)count;
- (void)dealloc;
- (NSUInteger)capacity;
- (void)_removeLRUObject;
- (void)setCapacity:(NSUInteger)arg1;

@end