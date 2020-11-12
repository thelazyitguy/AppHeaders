//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterNotificationSettingsEntryControlTypeConfig, TFSTwitterNotificationSettingsEntryFeatureSwitchConfig;

@interface TFSTwitterNotificationSettingsTemplateEntry : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_scribeComponent;
    long long _vitType;
    NSString *_descriptionText;
    NSString *_disabledDescriptionText;
    TFSTwitterNotificationSettingsEntryControlTypeConfig *_controlTypeConfig;
    TFSTwitterNotificationSettingsEntryFeatureSwitchConfig *_featureSwitchConfig;
}

+ (id)featureSwitchConfigWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)controlTypeConfigWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterNotificationSettingsEntryFeatureSwitchConfig *featureSwitchConfig; // @synthesize featureSwitchConfig=_featureSwitchConfig;
@property(readonly, nonatomic) TFSTwitterNotificationSettingsEntryControlTypeConfig *controlTypeConfig; // @synthesize controlTypeConfig=_controlTypeConfig;
@property(readonly, copy, nonatomic) NSString *disabledDescriptionText; // @synthesize disabledDescriptionText=_disabledDescriptionText;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) long long vitType; // @synthesize vitType=_vitType;
@property(readonly, copy, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *defaultOnValue;
@property(readonly, nonatomic) NSString *defaultValue;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(id)arg1 scribeComponent:(id)arg2 name:(id)arg3 vitType:(long long)arg4 descriptionText:(id)arg5 disabledDescriptionText:(id)arg6 controlTypeConfig:(id)arg7 featureSwitchConfig:(id)arg8;

@end
