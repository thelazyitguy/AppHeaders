//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSString;

@interface AWSIoTJobSummary : AWSModel
{
    NSDate *_completedAt;
    NSDate *_createdAt;
    NSString *_jobArn;
    NSString *_jobId;
    NSDate *_lastUpdatedAt;
    long long _status;
    long long _targetSelection;
    NSString *_thingGroupId;
}

+ (id)targetSelectionJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)lastUpdatedAtJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)completedAtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *thingGroupId; // @synthesize thingGroupId=_thingGroupId;
@property(nonatomic) long long targetSelection; // @synthesize targetSelection=_targetSelection;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSDate *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
@property(retain, nonatomic) NSString *jobId; // @synthesize jobId=_jobId;
@property(retain, nonatomic) NSString *jobArn; // @synthesize jobArn=_jobArn;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSDate *completedAt; // @synthesize completedAt=_completedAt;
- (void).cxx_destruct;

@end
