//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSString;

@interface AWSIoTAuditMitigationActionsTaskMetadata : AWSModel
{
    NSDate *_startTime;
    NSString *_taskId;
    long long _taskStatus;
}

+ (id)taskStatusJSONTransformer;
+ (id)startTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long taskStatus; // @synthesize taskStatus=_taskStatus;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end
