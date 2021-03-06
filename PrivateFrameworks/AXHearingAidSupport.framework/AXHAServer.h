/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class <AXHAServerDelegate>, NSArray, NSMutableDictionary, NSObject<OS_xpc_object>, NSString;

@interface AXHAServer : NSObject <AXHARemoteUpdateProtocol> {
    NSArray *_availableControllers;
    NSArray *_availableHearingAids;
    <AXHAServerDelegate> *_delegate;
    BOOL _hearingAidReachable;
    NSMutableDictionary *_updates;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(retain) NSArray * availableControllers;
@property(retain) NSArray * availableHearingAids;
@property(copy,readonly) NSString * debugDescription;
@property <AXHAServerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL hearingAidReachable;
@property(readonly) Class superclass;
@property(retain) NSMutableDictionary * updates;
@property(retain) NSObject<OS_xpc_object> * xpcConnection;

+ (id)sharedInstance;

- (id)availableControllers;
- (void)availableDevicesDidUpdate:(id)arg1;
- (id)availableHearingAids;
- (void)cancelHearingAidConnectionRequest;
- (void)connectToControllerWithID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deviceDidUpdateProperty:(id)arg1;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (BOOL)hearingAidReachable;
- (id)init;
- (void)liveListenDidUpdate:(id)arg1;
- (void)registerListener:(id)arg1 forAvailableDeviceHandler:(id)arg2;
- (void)registerListener:(id)arg1 forLiveListenLevelsHandler:(id)arg2;
- (void)registerListener:(id)arg1 forPropertyUpdateHandler:(id)arg2;
- (void)registerUpdateBlock:(void*)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3;
- (void)requestHearingAidConnection;
- (void)resetConnection;
- (void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (void)setAvailableControllers:(id)arg1;
- (void)setAvailableHearingAids:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHearingAidReachable:(BOOL)arg1;
- (void)setUpdates:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupServerIfNecessary;
- (void)startLiveListen;
- (void)startServerWithDelegate:(id)arg1;
- (void)stopLiveListen;
- (void)terminateConnection;
- (void)unregisterUpdateListener:(id)arg1;
- (void)updateProperty:(int)arg1 forDeviceID:(id)arg2;
- (id)updates;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forDeviceID:(id)arg3;
- (id)xpcConnection;

@end
