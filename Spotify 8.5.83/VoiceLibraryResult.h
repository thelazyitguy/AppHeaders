//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface VoiceLibraryResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasReferrerId; // @dynamic hasReferrerId;
@property(nonatomic) _Bool hasUtteranceId; // @dynamic hasUtteranceId;
@property(copy, nonatomic) NSString *referrerId; // @dynamic referrerId;
@property(copy, nonatomic) NSString *utteranceId; // @dynamic utteranceId;

@end
