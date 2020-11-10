//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTLanguageOnboardingTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTLanguageOnboardingTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTLanguageOnboardingTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _languageOnboardingProductStateSignal;
    long long _languageOnboardingProductStateState;
}

- (void).cxx_destruct;
@property(nonatomic) long long languageOnboardingProductStateState; // @synthesize languageOnboardingProductStateState=_languageOnboardingProductStateState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> languageOnboardingProductStateSignal; // @synthesize languageOnboardingProductStateSignal=_languageOnboardingProductStateSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic, getter=isFeatureEnabled) _Bool featureEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupProductStateFlag;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

