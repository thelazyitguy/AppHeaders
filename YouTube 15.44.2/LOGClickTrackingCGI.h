//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class EIDClientEventIdMessage;

@interface LOGClickTrackingCGI : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool doNotLogURL; // @dynamic doNotLogURL;
@property(nonatomic) int elementIndex; // @dynamic elementIndex;
@property(nonatomic) _Bool hasDoNotLogURL; // @dynamic hasDoNotLogURL;
@property(nonatomic) _Bool hasElementIndex; // @dynamic hasElementIndex;
@property(nonatomic) _Bool hasNonArchivalVeIndex; // @dynamic hasNonArchivalVeIndex;
@property(nonatomic) _Bool hasOdelaySeLinker; // @dynamic hasOdelaySeLinker;
@property(nonatomic) _Bool hasPageStart; // @dynamic hasPageStart;
@property(nonatomic) _Bool hasResultFprint; // @dynamic hasResultFprint;
@property(nonatomic) _Bool hasResultGroupElementIndex; // @dynamic hasResultGroupElementIndex;
@property(nonatomic) _Bool hasResultIndex; // @dynamic hasResultIndex;
@property(nonatomic) _Bool hasVeEventId; // @dynamic hasVeEventId;
@property(nonatomic) _Bool hasVeIndex; // @dynamic hasVeIndex;
@property(nonatomic) _Bool hasVeType; // @dynamic hasVeType;
@property(nonatomic) _Bool hasYoutubeVeCounter; // @dynamic hasYoutubeVeCounter;
@property(nonatomic) int nonArchivalVeIndex; // @dynamic nonArchivalVeIndex;
@property(nonatomic) int odelaySeLinker; // @dynamic odelaySeLinker;
@property(nonatomic) int pageStart; // @dynamic pageStart;
@property(nonatomic) unsigned long long resultFprint; // @dynamic resultFprint;
@property(nonatomic) int resultGroupElementIndex; // @dynamic resultGroupElementIndex;
@property(nonatomic) int resultIndex; // @dynamic resultIndex;
@property(retain, nonatomic) EIDClientEventIdMessage *veEventId; // @dynamic veEventId;
@property(nonatomic) int veIndex; // @dynamic veIndex;
@property(nonatomic) int veType; // @dynamic veType;
@property(nonatomic) int youtubeVeCounter; // @dynamic youtubeVeCounter;

@end

