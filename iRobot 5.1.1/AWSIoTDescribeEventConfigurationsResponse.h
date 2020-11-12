//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSDictionary;

@interface AWSIoTDescribeEventConfigurationsResponse : AWSModel
{
    NSDate *_creationDate;
    NSDictionary *_eventConfigurations;
    NSDate *_lastModifiedDate;
}

+ (id)lastModifiedDateJSONTransformer;
+ (id)eventConfigurationsJSONTransformer;
+ (id)creationDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSDictionary *eventConfigurations; // @synthesize eventConfigurations=_eventConfigurations;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;

@end
