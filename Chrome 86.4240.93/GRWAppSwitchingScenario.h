//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWApp, GRWAppSwitchingCooldownManager, GRWAppSwitchingImpressionCounter, GRWIntentDescriptor, GRWLinkOpenerOptions, GRWPreferences, GRWPromptEvaluation, NSArray, NSString;

@interface GRWAppSwitchingScenario : NSObject
{
    NSString *_promptTitle;
    NSArray *_googleAppsToPrompt;
    GRWApp *_appToOpen;
    GRWPreferences *_preferences;
    GRWApp *_defaultAppToPrompt;
    GRWIntentDescriptor *_intentDescriptor;
    GRWLinkOpenerOptions *_linkOpenerOptions;
    GRWAppSwitchingCooldownManager *_cooldownManager;
    GRWAppSwitchingImpressionCounter *_impressionCounter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GRWAppSwitchingImpressionCounter *impressionCounter; // @synthesize impressionCounter=_impressionCounter;
@property(readonly, nonatomic) GRWAppSwitchingCooldownManager *cooldownManager; // @synthesize cooldownManager=_cooldownManager;
@property(retain, nonatomic) GRWLinkOpenerOptions *linkOpenerOptions; // @synthesize linkOpenerOptions=_linkOpenerOptions;
@property(readonly, nonatomic) GRWIntentDescriptor *intentDescriptor; // @synthesize intentDescriptor=_intentDescriptor;
@property(retain, nonatomic) GRWApp *defaultAppToPrompt; // @synthesize defaultAppToPrompt=_defaultAppToPrompt;
@property(retain, nonatomic) GRWPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) GRWApp *appToOpen; // @synthesize appToOpen=_appToOpen;
@property(retain, nonatomic) NSArray *googleAppsToPrompt; // @synthesize googleAppsToPrompt=_googleAppsToPrompt;
@property(retain, nonatomic) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
@property(readonly, nonatomic) GRWPromptEvaluation *promptEvaluation;
- (_Bool)shouldOfferGoogleApp;
- (_Bool)impressionsMaxed;
- (_Bool)isInCooldown;
- (_Bool)preferredAppUninstalled;
- (_Bool)alwaysAsk;
- (_Bool)firstLaunch;
- (_Bool)intentOverride;
- (_Bool)intentTypeDisabled;
@property(readonly, nonatomic) int intentType;
@property(readonly, nonatomic) GRWApp *appToOpenIfAppSwitchingHeldBack;
- (id)allPromptedApps;
- (id)initWithIntentDescriptor:(id)arg1 productsManager:(id)arg2 preferences:(id)arg3 cooldownManager:(id)arg4 impressionCounter:(id)arg5 linkOpenerOptions:(id)arg6;

@end
