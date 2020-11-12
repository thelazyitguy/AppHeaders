//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSNumber;

@interface AWSKinesisPutRecordsOutput : AWSModel
{
    NSNumber *_failedRecordCount;
    NSArray *_records;
}

+ (id)recordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSNumber *failedRecordCount; // @synthesize failedRecordCount=_failedRecordCount;

@end
