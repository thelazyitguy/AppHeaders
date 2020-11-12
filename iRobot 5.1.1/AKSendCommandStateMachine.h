//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BraavaCorePlatform/AKStateMachine-Protocol.h>

@class AKBlockXferStateMachine, AKRobot, NSData, NSMutableData, NSString;

@interface AKSendCommandStateMachine : NSObject <AKStateMachine>
{
    int completionStatus;
    int _state;
    int _waitCount;
    int _bytesToReceive;
    int _bytesToReceiveIdx;
    int _bytesToRead;
    NSData *returnData;
    NSData *_commandToSend;
    AKRobot *_robot;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _cancelHandler;
    AKBlockXferStateMachine *_blockFsm;
    NSMutableData *_stageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *stageData; // @synthesize stageData=_stageData;
@property(nonatomic) int bytesToRead; // @synthesize bytesToRead=_bytesToRead;
@property(nonatomic) int bytesToReceiveIdx; // @synthesize bytesToReceiveIdx=_bytesToReceiveIdx;
@property(nonatomic) int bytesToReceive; // @synthesize bytesToReceive=_bytesToReceive;
@property(retain, nonatomic) AKBlockXferStateMachine *blockFsm; // @synthesize blockFsm=_blockFsm;
@property(nonatomic) int waitCount; // @synthesize waitCount=_waitCount;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) AKRobot *robot; // @synthesize robot=_robot;
@property(retain, nonatomic) NSData *commandToSend; // @synthesize commandToSend=_commandToSend;
@property(retain, nonatomic) NSData *returnData; // @synthesize returnData;
@property(nonatomic) int completionStatus; // @synthesize completionStatus;
- (void)cancel:(CDUnknownBlockType)arg1;
- (int)cycleMachineWithParameter:(unsigned int)arg1 bleStatus:(unsigned char)arg2;
- (id)initWithRobot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
