//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDManager, NSData, YTLogAttestationService;
@protocol YTAttestationChallengeService, YTInnerTubeDataEventLogger;

@interface YTGenericAttestationController : NSObject
{
    IGDManager *_iOSGuardManager;
    NSData *_iOSGuardChallengeRequest;
    id <YTAttestationChallengeService> _challengeService;
    YTLogAttestationService *_logAttestationService;
    id <YTInnerTubeDataEventLogger> _eventLogger;
}

- (void).cxx_destruct;
- (void)logExecutionEndState:(int)arg1;
- (void)sendLogAttestationRequest:(id)arg1;
- (id)logAttestationRequestWithChallenge:(id)arg1 snapshot:(id)arg2;
- (id)snapshotWithIOSGuardData:(id)arg1 contentBinding:(id)arg2;
- (void)executeChallenge:(id)arg1 withIosguardData:(id)arg2;
- (void)logUnexecutedChallenge:(id)arg1;
- (void)sendChallengeRequest:(id)arg1;
- (id)iOSGuardChallengeRequest;
- (id)attestationChallengeRequestWithRunAttestationCommand:(id)arg1;
- (void)handleRunAttestationCommand:(id)arg1;
- (id)init;

@end
