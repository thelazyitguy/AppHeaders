//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface YTIPlaybackContextEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientPlaybackNonce; // @dynamic clientPlaybackNonce;
@property(nonatomic) _Bool hasClientPlaybackNonce; // @dynamic hasClientPlaybackNonce;
@property(nonatomic) _Bool hasSerializedContextData; // @dynamic hasSerializedContextData;
@property(copy, nonatomic) NSData *serializedContextData; // @dynamic serializedContextData;

@end
