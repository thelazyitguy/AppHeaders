//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString;

@interface YTILiveStreamVoteStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLikesCount; // @dynamic hasLikesCount;
@property(nonatomic) _Bool hasLikesTinyText; // @dynamic hasLikesTinyText;
@property(nonatomic) unsigned long long likesCount; // @dynamic likesCount;
@property(retain, nonatomic) YTIFormattedString *likesTinyText; // @dynamic likesTinyText;

@end

