//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface GRWIntentEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long createdTimestampMs; // @dynamic createdTimestampMs;
@property(nonatomic) _Bool hasCreatedTimestampMs; // @dynamic hasCreatedTimestampMs;
@property(nonatomic) _Bool hasIntentFulfilled; // @dynamic hasIntentFulfilled;
@property(nonatomic) _Bool hasProcessedTimestampMs; // @dynamic hasProcessedTimestampMs;
@property(nonatomic) _Bool hasReceivingBundleIdentifier; // @dynamic hasReceivingBundleIdentifier;
@property(nonatomic) _Bool hasSendingBundleIdentifier; // @dynamic hasSendingBundleIdentifier;
@property(nonatomic) _Bool intentFulfilled; // @dynamic intentFulfilled;
@property(nonatomic) long long processedTimestampMs; // @dynamic processedTimestampMs;
@property(copy, nonatomic) NSString *receivingBundleIdentifier; // @dynamic receivingBundleIdentifier;
@property(copy, nonatomic) NSString *sendingBundleIdentifier; // @dynamic sendingBundleIdentifier;

@end

