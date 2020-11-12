//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface ChatMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *chatMessage; // @dynamic chatMessage;
@property(nonatomic) int clientId; // @dynamic clientId;
@property(nonatomic) _Bool hasChatMessage; // @dynamic hasChatMessage;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasIsTest; // @dynamic hasIsTest;
@property(nonatomic) _Bool hasRetryNumber; // @dynamic hasRetryNumber;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) _Bool hasUsingHangoutMessageCollection; // @dynamic hasUsingHangoutMessageCollection;
@property(nonatomic) _Bool isTest; // @dynamic isTest;
@property(nonatomic) int retryNumber; // @dynamic retryNumber;
@property(nonatomic) int sequenceNumber; // @dynamic sequenceNumber;
@property(nonatomic) _Bool usingHangoutMessageCollection; // @dynamic usingHangoutMessageCollection;

@end
