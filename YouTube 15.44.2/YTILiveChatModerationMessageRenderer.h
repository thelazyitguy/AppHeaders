//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTILiveChatModerationMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasTimestampUsec; // @dynamic hasTimestampUsec;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIFormattedString *message; // @dynamic message;
@property(nonatomic) unsigned long long timestampUsec; // @dynamic timestampUsec;

@end

