//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCondition, AIRDate;

@interface AIRConditionRange : AIRModel
{
    AIRDate *_startDate;
    AIRDate *_endDate;
    AIRCondition *_conditions;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRCondition *conditions; // @synthesize conditions=_conditions;
@property(readonly, copy, nonatomic) AIRDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) AIRDate *startDate; // @synthesize startDate=_startDate;

@end
