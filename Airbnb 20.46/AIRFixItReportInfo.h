//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString;

@interface AIRFixItReportInfo : AIRModel
{
    NSString *_reportID;
    NSNumber *_status;
    NSNumber *_reportType;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *reportType; // @synthesize reportType=_reportType;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;

@end
