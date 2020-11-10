//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString;

@interface YTIPollChoice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *deselectServiceEndpoint; // @dynamic deselectServiceEndpoint;
@property(nonatomic) _Bool hasDeselectServiceEndpoint; // @dynamic hasDeselectServiceEndpoint;
@property(nonatomic) _Bool hasNumVotes; // @dynamic hasNumVotes;
@property(nonatomic) _Bool hasSelectServiceEndpoint; // @dynamic hasSelectServiceEndpoint;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasSigninEndpoint; // @dynamic hasSigninEndpoint;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasVotePercentage; // @dynamic hasVotePercentage;
@property(nonatomic) _Bool hasVotePercentageIfNotSelected; // @dynamic hasVotePercentageIfNotSelected;
@property(nonatomic) _Bool hasVotePercentageIfSelected; // @dynamic hasVotePercentageIfSelected;
@property(nonatomic) _Bool hasVoteRatio; // @dynamic hasVoteRatio;
@property(nonatomic) _Bool hasVoteRatioIfNotSelected; // @dynamic hasVoteRatioIfNotSelected;
@property(nonatomic) _Bool hasVoteRatioIfSelected; // @dynamic hasVoteRatioIfSelected;
@property(nonatomic) unsigned long long numVotes; // @dynamic numVotes;
@property(retain, nonatomic) YTICommand *selectServiceEndpoint; // @dynamic selectServiceEndpoint;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTICommand *signinEndpoint; // @dynamic signinEndpoint;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(retain, nonatomic) YTIFormattedString *votePercentage; // @dynamic votePercentage;
@property(retain, nonatomic) YTIFormattedString *votePercentageIfNotSelected; // @dynamic votePercentageIfNotSelected;
@property(retain, nonatomic) YTIFormattedString *votePercentageIfSelected; // @dynamic votePercentageIfSelected;
@property(nonatomic) double voteRatio; // @dynamic voteRatio;
@property(nonatomic) double voteRatioIfNotSelected; // @dynamic voteRatioIfNotSelected;
@property(nonatomic) double voteRatioIfSelected; // @dynamic voteRatioIfSelected;

@end

