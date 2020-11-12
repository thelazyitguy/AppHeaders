//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRDate, NSNumber, NSString;

@interface AIRCalendarDayPromotion : AIRModel
{
    AIRDate *_startDate;
    AIRDate *_endDate;
    NSNumber *_discountPercentage;
    NSString *_uuid;
    NSString *_promotionType;
}

+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSNumber *discountPercentage; // @synthesize discountPercentage=_discountPercentage;
@property(readonly, copy, nonatomic) AIRDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) AIRDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 discountPercentage:(id)arg3 uuid:(id)arg4 promotionType:(id)arg5;

@end
