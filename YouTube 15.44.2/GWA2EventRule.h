//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWA2PageContext, NSMutableArray;

@interface GWA2EventRule : NSObject
{
    int _triggerID;
    GWA2PageContext *_pageContext;
    NSMutableArray *_conditions;
    NSMutableArray *_triggers;
    long long _eventRuleID;
    NSMutableArray *_resultingActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *resultingActions; // @synthesize resultingActions=_resultingActions;
@property(nonatomic) long long eventRuleID; // @synthesize eventRuleID=_eventRuleID;
- (_Bool)isLoggingEnabledForEventRuleEvalution;
- (void)logEventRuleEvaluationWithTriggerID:(int)arg1 failedConditionID:(id)arg2;
- (_Bool)evaluateConditionsForTriggerID:(int)arg1;
- (void)registerTrigger:(int)arg1;
- (void)registerResultingActionRunner:(id)arg1 forResultingAction:(id)arg2;
- (void)registerChecker:(id)arg1 forCondition:(id)arg2;
- (id)initWithEventRuleID:(long long)arg1 pageContext:(id)arg2;

@end

