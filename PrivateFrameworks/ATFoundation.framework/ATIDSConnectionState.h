/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATIDSSocket, IDSDevice;

@interface ATIDSConnectionState : NSObject {
    BOOL _connecting;
    IDSDevice *_device;
    unsigned int _failureCount;
    double _lastWakeupSentTime;
    int _priority;
    ATIDSSocket *_socket;
    unsigned int _wakeupCount;
}

@property BOOL connecting;
@property(retain) IDSDevice * device;
@property unsigned int failureCount;
@property double lastWakeupSentTime;
@property int priority;
@property(retain) ATIDSSocket * socket;
@property unsigned int wakeupCount;

- (void).cxx_destruct;
- (BOOL)connecting;
- (id)device;
- (unsigned int)failureCount;
- (double)lastWakeupSentTime;
- (int)priority;
- (void)setConnecting:(BOOL)arg1;
- (void)setDevice:(id)arg1;
- (void)setFailureCount:(unsigned int)arg1;
- (void)setLastWakeupSentTime:(double)arg1;
- (void)setPriority:(int)arg1;
- (void)setSocket:(id)arg1;
- (void)setWakeupCount:(unsigned int)arg1;
- (id)socket;
- (unsigned int)wakeupCount;

@end