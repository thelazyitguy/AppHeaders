//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureSettingsUIProvider-Protocol.h"

@class NSArray, NSString, SPTFeatureSettingsItem;

@interface SPTMultipleChoiceFeatureSettingsItemUIProvider : NSObject <SPTFeatureSettingsUIProvider>
{
    SPTFeatureSettingsItem *_featureSettingsItem;
    CDUnknownBlockType _action;
    NSArray *_choiceTitles;
    NSArray *_choiceKeys;
    id _selectedStateKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id selectedStateKey; // @synthesize selectedStateKey=_selectedStateKey;
@property(readonly, copy, nonatomic) NSArray *choiceKeys; // @synthesize choiceKeys=_choiceKeys;
@property(readonly, copy, nonatomic) NSArray *choiceTitles; // @synthesize choiceTitles=_choiceTitles;
@property(readonly, copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak SPTFeatureSettingsItem *featureSettingsItem; // @synthesize featureSettingsItem=_featureSettingsItem;
- (void)featureSettingsItem:(id)arg1 changedValueFrom:(id)arg2 to:(id)arg3;
- (void)featureSettingsPresentation:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsForFeatureSettingsItem:(id)arg1;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (void)setSelectionState:(_Bool)arg1 onCell:(id)arg2;
- (id)initWithChoices:(id)arg1 initialState:(id)arg2 action:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

