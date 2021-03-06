//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface PILResponseMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int callbackNumber; // @dynamic callbackNumber;
@property(nonatomic) long long durationUsec; // @dynamic durationUsec;
@property(nonatomic) int featureType; // @dynamic featureType;
@property(nonatomic) _Bool hasDurationUsec; // @dynamic hasDurationUsec;
@property(nonatomic) _Bool isFirstCallback; // @dynamic isFirstCallback;
@property(nonatomic) _Bool isLastCallback; // @dynamic isLastCallback;
@property(nonatomic) _Bool isRefreshCallback; // @dynamic isRefreshCallback;
@property(nonatomic) long long notFoundCacheCount; // @dynamic notFoundCacheCount;
@property(nonatomic) int notFoundCount; // @dynamic notFoundCount;
@property(nonatomic) long long promiseCacheCount; // @dynamic promiseCacheCount;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) int source; // @dynamic source;
@property(nonatomic) long long valueCacheCount; // @dynamic valueCacheCount;
@property(nonatomic) int valuesCount; // @dynamic valuesCount;

@end

