//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIKidsFlowInfo;

@interface YTIKidsFlowCorpusSelectedEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasKidsCorpusPreferenceChoice; // @dynamic hasKidsCorpusPreferenceChoice;
@property(nonatomic) _Bool hasKidsFlowInfo; // @dynamic hasKidsFlowInfo;
@property(nonatomic) _Bool hasKidsFlowType; // @dynamic hasKidsFlowType;
@property(nonatomic) _Bool hasKidsSearchModeChoice; // @dynamic hasKidsSearchModeChoice;
@property(nonatomic) int kidsCorpusPreferenceChoice; // @dynamic kidsCorpusPreferenceChoice;
@property(retain, nonatomic) YTIKidsFlowInfo *kidsFlowInfo; // @dynamic kidsFlowInfo;
@property(nonatomic) int kidsFlowType; // @dynamic kidsFlowType;
@property(nonatomic) int kidsSearchModeChoice; // @dynamic kidsSearchModeChoice;

@end
