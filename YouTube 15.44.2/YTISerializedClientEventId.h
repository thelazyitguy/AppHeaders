//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTISerializedClientEventId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientCounter; // @dynamic clientCounter;
@property(nonatomic) _Bool hasClientCounter; // @dynamic hasClientCounter;
@property(nonatomic) _Bool hasSerializedEventId; // @dynamic hasSerializedEventId;
@property(copy, nonatomic) NSString *serializedEventId; // @dynamic serializedEventId;

@end

