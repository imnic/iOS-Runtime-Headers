/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSFileHandle, NSLock, NSRegularExpression, NSString;

@interface SBKLogger : NSObject {
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    NSString *_filter;
    NSLock *_lock;
    int _pid;
    NSString *_procName;
    NSString *_runtimeOverride;
    NSRegularExpression *_runtimeOverrideRegex;
}

@property(copy) NSString * filter;
@property(copy) NSString * runtimeOverride;

+ (BOOL)debugLoggingEnabled;
+ (id)sharedLogger;
+ (BOOL)verboseLoggingEnabled;

- (void).cxx_destruct;
- (void)_updateSettingsFromPreferences:(id)arg1;
- (void)addRuntimeOverride:(id)arg1;
- (id)auxPath;
- (void)dealloc;
- (id)filter;
- (id)init;
- (void)logFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;
- (void)logFunction:(const char *)arg1 format:(id)arg2;
- (void)logString:(id)arg1;
- (void)performLoggingBlock:(id)arg1;
- (void)removeRuntimeOverride:(id)arg1;
- (id)runtimeOverride;
- (void)setAuxPath:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setRuntimeOverride:(id)arg1;
- (BOOL)shouldOverrideCondition:(id)arg1 file:(id)arg2;

@end