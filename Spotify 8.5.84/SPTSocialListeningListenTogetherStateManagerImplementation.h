//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningListenTogetherStateManager-Protocol.h"
#import "SPTSocialListeningModelObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTSocialListeningTestManager;

@interface SPTSocialListeningListenTogetherStateManagerImplementation : NSObject <SPTSocialListeningListenTogetherStateManager, SPTSocialListeningModelObserver>
{
    long long _joinFlowState;
    long long _sessionState;
    SPTObserverManager *_observerManager;
    id <SPTSocialListeningTestManager> _testManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) long long joinFlowState; // @synthesize joinFlowState=_joinFlowState;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2 updateEvent:(id)arg3;
- (void)socialListeningModel:(id)arg1 didFinishLoadingScannable:(id)arg2 sessionColor:(id)arg3 error:(id)arg4;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningModel:(id)arg1 didDeleteSession:(id)arg2;
- (void)updateSessionState:(long long)arg1 error:(id)arg2;
- (void)updateJoinFlowState:(long long)arg1;
- (void)removeListenTogetherStateObserver:(id)arg1;
- (void)addListenTogetherStateObserver:(id)arg1;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

