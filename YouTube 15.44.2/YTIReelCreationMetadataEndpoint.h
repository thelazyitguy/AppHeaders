//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString, YTIRenderer;

@interface YTIReelCreationMetadataEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasReelTitle; // @dynamic hasReelTitle;
@property(nonatomic) _Bool hasRenderer; // @dynamic hasRenderer;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTIFormattedString *reelTitle; // @dynamic reelTitle;
@property(retain, nonatomic) YTIRenderer *renderer; // @dynamic renderer;

@end

