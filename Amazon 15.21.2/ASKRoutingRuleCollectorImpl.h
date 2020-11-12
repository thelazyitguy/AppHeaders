//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASKExtensionPoint.h"

#import "ASKRoutingRuleCollector-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ASKRoutingRuleCollectorImpl : ASKExtensionPoint <ASKRoutingRuleCollector>
{
    NSMutableDictionary *_registeredRulesDic;
}

@property(retain, nonatomic) NSMutableDictionary *registeredRulesDic; // @synthesize registeredRulesDic=_registeredRulesDic;
- (void).cxx_destruct;
- (_Bool)isRuleTypeListQualified:(id)arg1;
- (_Bool)isRuleClassQualified:(Class)arg1;
- (id)routingRuleConfigModelWithDictionary:(id)arg1;
- (void)setupExtensionPoint;
- (id)ruleClassDicFromExtensionPoint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
