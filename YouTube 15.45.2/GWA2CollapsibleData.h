//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Data.h>

@class ORCH2CollapsibleData, ORCH2CollapsibleDataValue;

@interface GWA2CollapsibleData : GWA2Data
{
    ORCH2CollapsibleData *_collapsibleDataExtension;
    ORCH2CollapsibleDataValue *_collapsibleDataValueExtension;
    _Bool _expanded;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (void)runResultingAction:(id)arg1 triggeredByEventRuleId:(long long)arg2;
- (_Bool)conditionMatched:(id)arg1;
- (id)activeDataValues;
- (id)activeChildDataReferences;
- (void)updateDataValue:(id)arg1;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

@end
