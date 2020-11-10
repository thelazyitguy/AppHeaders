//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "_TtP18AllBoardingFeature30SPTAllBoardingCurationProvider_-Protocol.h"

@class NSString, SPTDataLoader, SPTObserverManager;
@protocol SPTLocalSettings;

@interface SPTFreeTierTasteOnboardingCurator : NSObject <SPTDataLoaderDelegate, _TtP18AllBoardingFeature30SPTAllBoardingCurationProvider_>
{
    SPTDataLoader *_dataLoader;
    id <SPTLocalSettings> _localSettings;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)curateWithType:(id)arg1 sourceIdentifier:(id)arg2 sessionId:(id)arg3;
- (void)curateArtistTasteForSessionId:(id)arg1;
- (id)initWithDataLoader:(id)arg1 localSettings:(id)arg2 observerManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

