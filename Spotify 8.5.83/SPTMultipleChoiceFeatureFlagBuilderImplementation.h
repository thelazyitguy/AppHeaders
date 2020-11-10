//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMultipleChoiceFeatureFlagBuilder-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureSettingsItemFactory;

@interface SPTMultipleChoiceFeatureFlagBuilderImplementation : NSObject <SPTMultipleChoiceFeatureFlagBuilder>
{
    _Bool _requiresRestartWhenSettingsChanged;
    NSString *_localSettingsKey;
    NSString *_settingsPageTitle;
    NSString *_settingsItemTitle;
    NSString *_settingsItemDescription;
    NSArray *_options;
    NSDictionary *_optionDisplayNames;
    NSString *_defaultValue;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsFactory; // @synthesize featureSettingsFactory=_featureSettingsFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSDictionary *optionDisplayNames; // @synthesize optionDisplayNames=_optionDisplayNames;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) _Bool requiresRestartWhenSettingsChanged; // @synthesize requiresRestartWhenSettingsChanged=_requiresRestartWhenSettingsChanged;
@property(copy, nonatomic) NSString *settingsItemDescription; // @synthesize settingsItemDescription=_settingsItemDescription;
@property(copy, nonatomic) NSString *settingsItemTitle; // @synthesize settingsItemTitle=_settingsItemTitle;
@property(copy, nonatomic) NSString *settingsPageTitle; // @synthesize settingsPageTitle=_settingsPageTitle;
@property(copy, nonatomic) NSString *localSettingsKey; // @synthesize localSettingsKey=_localSettingsKey;
- (void)setupSettingsPageWithItem:(id)arg1;
- (id)provideFeatureSettingsItem;
- (CDUnknownBlockType)provideMultipleChoiceSignalMapperForKey:(id)arg1;
- (void)validateParameters;
- (id)swift_withSettingsPageTitle:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3 optionDisplayNames:(id)arg4 requiresRestart:(_Bool)arg5;
- (id)swift_withOptions:(id)arg1;
- (id)swift_withLocalSettingsKey:(id)arg1;
- (id)swift_withDefaultValue:(id)arg1;
- (id)buildSignals;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
