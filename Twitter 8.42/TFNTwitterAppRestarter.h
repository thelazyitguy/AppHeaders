//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterAppRestarter-Protocol.h>

@class NSMutableSet, NSString, TFSTimer;
@protocol OS_dispatch_queue;

@interface TFNTwitterAppRestarter : NSObject <TFNTwitterAppRestarter>
{
    // Error parsing type: Ai, name: _restartRequested
    NSObject<OS_dispatch_queue> *_suppressIDsQueue;
    TFSTimer *_exitTimer;
    unsigned long long _backgroundTaskID;
    long long _terminateChecksCounter;
    NSString *_firstRequestRestartScribeComponent;
    NSMutableSet *_suppressIDs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *suppressIDs; // @synthesize suppressIDs=_suppressIDs;
@property(retain, nonatomic) NSString *firstRequestRestartScribeComponent; // @synthesize firstRequestRestartScribeComponent=_firstRequestRestartScribeComponent;
- (void)_exit;
- (void)_scribeFirstRestartRequest;
- (void)_exitIfPossible;
- (void)_cancelExitTimer;
- (void)_setUpExitTimer;
- (void)_stopRestartTimer;
- (void)_startRestartTimer;
- (unsigned long long)_suppressIDsCount;
- (void)resumeRestartsWithToken:(id)arg1;
- (id)suppressRestarts;
- (void)requestRestartFromComponent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

