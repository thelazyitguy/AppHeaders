//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSTwitterOnboardingSettingsValueDictionaryTranslatable-Protocol.h>

@class NSArray, NSString;

@interface TFSTwitterOnboardingSettingsValueListData : NSObject <TFSTwitterOnboardingSettingsValueDictionaryTranslatable>
{
    NSArray *_allowedValues;
    NSArray *_selectedValues;
    _Bool _isSearchEnabled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *selectedValues; // @synthesize selectedValues=_selectedValues;
@property(readonly, nonatomic) NSArray *allowedValues; // @synthesize allowedValues=_allowedValues;
@property(readonly, nonatomic) _Bool isSearchEnabled; // @synthesize isSearchEnabled=_isSearchEnabled;
- (id)settingsDictionariesWithIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithAllowedValues:(id)arg1 selectedValues:(id)arg2 isSearchEnabled:(_Bool)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

