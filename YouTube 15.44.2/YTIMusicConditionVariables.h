//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMusicEntityRef, YTIMusicEntityReference;

@interface YTIMusicConditionVariables : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityRef *container; // @dynamic container;
@property(retain, nonatomic) YTIMusicEntityReference *containerReference; // @dynamic containerReference;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasContainer; // @dynamic hasContainer;
@property(nonatomic) _Bool hasContainerReference; // @dynamic hasContainerReference;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasVideo; // @dynamic hasVideo;
@property(nonatomic) _Bool hasVideoReference; // @dynamic hasVideoReference;
@property(retain, nonatomic) YTIMusicEntityRef *video; // @dynamic video;
@property(retain, nonatomic) YTIMusicEntityReference *videoReference; // @dynamic videoReference;

@end

