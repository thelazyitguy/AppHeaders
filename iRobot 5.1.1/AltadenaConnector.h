//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BraavaCorePlatform/AKRobotDelegate-Protocol.h>

@class AKRobot, NSString, NSTimer;

@interface AltadenaConnector : NSObject <AKRobotDelegate>
{
    _Bool _connecting;
    AKRobot *_connectingRobot;
    double _timeoutInterval;
    CDUnknownBlockType _completionHandler;
    NSTimer *_timeoutTimer;
}

+ (id)connector;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) AKRobot *connectingRobot; // @synthesize connectingRobot=_connectingRobot;
@property(nonatomic, getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
- (void)robot:(id)arg1 didDisconnectRobot:(id)arg2;
- (void)robot:(id)arg1 didReportBluetoothError:(id)arg2;
- (void)robot:(id)arg1 didIdentifyRobot:(id)arg2;
- (void)robot:(id)arg1 didConnectRobot:(id)arg2;
- (void)identifyConnectingRobot;
- (void)connectTimedOut;
- (void)completeAndCleanupWithRobot:(id)arg1 error:(id)arg2;
- (void)cleanupConnector;
- (void)connectToRobot:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

