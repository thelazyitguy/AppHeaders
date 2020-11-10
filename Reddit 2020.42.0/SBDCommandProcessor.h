//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBDOperationQueue, SBDTimerBoard;

@interface SBDCommandProcessor : NSObject
{
    SBDTimerBoard *_ackTimerBoard;
    SBDOperationQueue *_queue;
}

@property(retain, nonatomic) SBDOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SBDTimerBoard *ackTimerBoard; // @synthesize ackTimerBoard=_ackTimerBoard;
- (void).cxx_destruct;
- (void)waitAckTimeout:(id)arg1;
- (void)response:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processDeclineInvitiation:(id)arg1;
- (void)processInvite:(id)arg1;
- (void)processUpdateOperators:(id)arg1;
- (void)processChannelMetaCounter:(id)arg1;
- (void)processChannelMetaData:(id)arg1;
- (void)processChannelDeleted:(id)arg1;
- (void)processChannelPropsChanged:(id)arg1;
- (void)processChannelEvent:(id)arg1 offset:(id)arg2 isHidden:(_Bool)arg3;
- (void)processChannelEvent:(id)arg1 isFrozen:(_Bool)arg2;
- (void)processChannelEvent:(id)arg1 isBan:(_Bool)arg2;
- (void)processChannelEvent:(id)arg1 isMute:(_Bool)arg2;
- (void)processChannelEvent:(id)arg1 isEnter:(_Bool)arg2;
- (void)processChannelEvent:(id)arg1 isJoin:(_Bool)arg2;
- (void)processTyping:(id)arg1 start:(_Bool)arg2;
- (void)processError:(id)arg1 sender:(id)arg2;
- (void)processSystemEvent:(id)arg1 sender:(id)arg2;
- (void)processUserEvent:(id)arg1 sender:(id)arg2;
- (void)processReaction:(id)arg1 sender:(id)arg2;
- (void)processThread:(id)arg1 sender:(id)arg2;
- (void)processDelivery:(id)arg1 sender:(id)arg2;
- (void)processRead:(id)arg1 sender:(id)arg2;
- (void)processDeletedMessage:(id)arg1;
- (void)processUpdatedMessage:(id)arg1 sender:(id)arg2;
- (void)processNewMessage:(id)arg1 sender:(id)arg2;
- (void)processSentFromCurrentDevice:(id)arg1 sender:(id)arg2;
- (void)processCommand:(id)arg1 shouldHandleBlock:(CDUnknownBlockType)arg2;
- (void)sendCommand:(id)arg1 lazy:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cleanUp;
- (id)init;

@end
