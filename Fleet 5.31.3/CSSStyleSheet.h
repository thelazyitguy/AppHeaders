//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSRule, CSSRuleList;

@interface CSSStyleSheet : NSObject
{
    CSSRule *ownerRule;
    CSSRuleList *cssRules;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSSRuleList *cssRules; // @synthesize cssRules;
@property(retain, nonatomic) CSSRule *ownerRule; // @synthesize ownerRule;
- (id)initWithString:(id)arg1;
- (void)deleteRule:(unsigned long long)arg1;
- (long long)insertRule:(id)arg1 index:(unsigned long long)arg2;

@end
