//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIVideoShortsCreation_Creation_AudioSource_Segment;

@interface YTIVideoShortsCreation_Creation_AudioSource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsSourceVideoPurged; // @dynamic hasIsSourceVideoPurged;
@property(nonatomic) _Bool hasSegment; // @dynamic hasSegment;
@property(nonatomic) _Bool hasVolume; // @dynamic hasVolume;
@property(nonatomic) _Bool isSourceVideoPurged; // @dynamic isSourceVideoPurged;
@property(retain, nonatomic) YTIVideoShortsCreation_Creation_AudioSource_Segment *segment; // @dynamic segment;
@property(nonatomic) float volume; // @dynamic volume;

@end

