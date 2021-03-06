/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(id)arg2 queue:(id)arg3;
- (void)device:(id)arg1 pairingAdded:(BOOL)arg2;
- (void)device:(id)arg1 pairingDeleted:(BOOL)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(id)arg1 queue:(id)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(id)arg1 queue:(id)arg2;
- (id)init;
- (void)localDeviceInfo:(id)arg1;
- (void)pairedDeviceInfo:(id)arg1;
- (void)savePublicKey:(id)arg1 forIdentifier:(id)arg2;

@end
