//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTUICompletionNotifierObserver-Protocol.h"

@class NSString, SPTResubModalProductExpiry;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLocalSettings, SPTResubModalShowManagerDelegate, SPTUICompletionNotifier;

@interface SPTResubModalShowManager : NSObject <SPTFeatureFlagSignalObserver, SPTUICompletionNotifierObserver>
{
    _Bool _UIReady;
    id <SPTResubModalShowManagerDelegate> _delegate;
    SPTResubModalProductExpiry *_expiry;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
    id <SPTFeatureFlagSignal> _enabledSignal;
    long long _enabledState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool UIReady; // @synthesize UIReady=_UIReady;
@property(nonatomic) long long enabledState; // @synthesize enabledState=_enabledState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSignal; // @synthesize enabledSignal=_enabledSignal;
@property(retain, nonatomic) id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) SPTResubModalProductExpiry *expiry; // @synthesize expiry=_expiry;
@property(nonatomic) __weak id <SPTResubModalShowManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loggedInUIDidBecomeUnloaded;
- (void)loggedInUIDidBecomeLoaded;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (long long)daysLeft;
- (id)localStorageKeyForToday;
- (void)checkIfModalShouldBeShown;
- (_Bool)hasShownForCurrentPeriod;
- (_Bool)shouldShowForCurrentPeriod;
- (_Bool)shouldShowModal;
- (void)modalShown;
- (void)startObserving;
- (void)setupEnabledSignal;
- (id)initWithProductExpiry:(id)arg1 featureFlagFactory:(id)arg2 localSettings:(id)arg3 UICompletionNotifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

