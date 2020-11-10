//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashDetector-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, SPTCrashDetectorDelegate;

@interface SPTCrashlyticsCrashDetector : NSObject <SPTCrashDetector>
{
    _Bool _terminated;
    id <SPTCrashDetectorDelegate> _delegate;
    NSString *_coreVersionString;
    NSString *_clientVersionString;
    NSMutableDictionary *_stateKeys;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_appState;
    NSString *_userIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) NSString *appState; // @synthesize appState=_appState;
@property(nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(readonly, nonatomic) NSMutableDictionary *stateKeys; // @synthesize stateKeys=_stateKeys;
@property(readonly, copy, nonatomic) NSString *clientVersionString; // @synthesize clientVersionString=_clientVersionString;
@property(readonly, copy, nonatomic) NSString *coreVersionString; // @synthesize coreVersionString=_coreVersionString;
@property(nonatomic) __weak id <SPTCrashDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (CDUnknownBlockType)provideProductionAssertionHandler;
- (void)recordNonFatalError:(id)arg1;
- (id)crashReportURLForUUID:(id)arg1;
- (void)synchronizeState;
- (void)_setValue:(id)arg1 forStateKey:(id)arg2;
- (void)setValue:(id)arg1 forStateKey:(id)arg2;
- (void)setValuesForStateKeysWithDictionary:(id)arg1;
- (void)leaveBreadcrumb:(id)arg1;
- (void)appOperational;
- (void)appShutdown;
- (void)userDidEnterAuthenticationFlow;
- (void)userDidLogIn:(id)arg1;
- (void)start;
@property(readonly, nonatomic) NSString *detectorIdentifier;
- (id)initWithCoreVersionString:(id)arg1 clientVersionString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

