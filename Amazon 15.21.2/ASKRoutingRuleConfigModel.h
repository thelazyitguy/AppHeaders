//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol ASKRoutingRuleProtocol;

@interface ASKRoutingRuleConfigModel : NSObject
{
    Class _ruleClass;
    NSSet *_ruleTypeSet;
    id <ASKRoutingRuleProtocol> _ruleInstance;
}

@property(readonly, nonatomic) id <ASKRoutingRuleProtocol> ruleInstance; // @synthesize ruleInstance=_ruleInstance;
@property(readonly, nonatomic) NSSet *ruleTypeSet; // @synthesize ruleTypeSet=_ruleTypeSet;
@property(readonly, nonatomic) Class ruleClass; // @synthesize ruleClass=_ruleClass;
- (void).cxx_destruct;
- (void)addRuleTypesFromSet:(id)arg1;
- (id)initWithRuleClass:(Class)arg1 ruleTypes:(id)arg2;

@end
