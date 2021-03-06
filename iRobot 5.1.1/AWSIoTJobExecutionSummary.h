//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSNumber;

@interface AWSIoTJobExecutionSummary : AWSModel
{
    NSNumber *_executionNumber;
    NSDate *_lastUpdatedAt;
    NSDate *_queuedAt;
    NSDate *_startedAt;
    long long _status;
}

+ (id)statusJSONTransformer;
+ (id)startedAtJSONTransformer;
+ (id)queuedAtJSONTransformer;
+ (id)lastUpdatedAtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSDate *startedAt; // @synthesize startedAt=_startedAt;
@property(retain, nonatomic) NSDate *queuedAt; // @synthesize queuedAt=_queuedAt;
@property(retain, nonatomic) NSDate *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
@property(retain, nonatomic) NSNumber *executionNumber; // @synthesize executionNumber=_executionNumber;
- (void).cxx_destruct;

@end

