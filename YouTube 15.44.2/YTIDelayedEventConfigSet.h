//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIDelayedEventRetryConfig;

@interface YTIDelayedEventConfigSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int batchSize; // @dynamic batchSize;
@property(nonatomic) _Bool hasBatchSize; // @dynamic hasBatchSize;
@property(nonatomic) _Bool hasMaxAgeHours; // @dynamic hasMaxAgeHours;
@property(nonatomic) _Bool hasRetryConfig; // @dynamic hasRetryConfig;
@property(nonatomic) _Bool hasUseLoggingDispatchQueue; // @dynamic hasUseLoggingDispatchQueue;
@property(nonatomic) int maxAgeHours; // @dynamic maxAgeHours;
@property(retain, nonatomic) YTIDelayedEventRetryConfig *retryConfig; // @dynamic retryConfig;
@property(nonatomic) _Bool useLoggingDispatchQueue; // @dynamic useLoggingDispatchQueue;

@end

