//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Data.h>

@class NSDictionary, ORCH2OneOfData, ORCH2OneOfDataValue;

@interface GWA2OneOfData : GWA2Data
{
    ORCH2OneOfData *_oneOfDataExtension;
    ORCH2OneOfDataValue *_oneOfDataValueExtension;
    NSDictionary *_options;
    long long _activeOptionID;
    long long _lastEventRuleIdToTriggerDataChange;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastEventRuleIdToTriggerDataChange; // @synthesize lastEventRuleIdToTriggerDataChange=_lastEventRuleIdToTriggerDataChange;
@property(nonatomic) long long activeOptionID; // @synthesize activeOptionID=_activeOptionID;
- (_Bool)conditionMatched:(id)arg1;
- (void)runResultingAction:(id)arg1 triggeredByEventRuleId:(long long)arg2;
- (id)activeDataValues;
- (id)activeChildDataReferences;
- (void)updateDataValue:(id)arg1;
- (void)setActiveOptionID:(long long)arg1 withEventRuleIdForTransition:(long long)arg2;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

@end

