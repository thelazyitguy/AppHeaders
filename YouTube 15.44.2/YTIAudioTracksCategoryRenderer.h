//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIAudioTracksCategoryRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *categoryName; // @dynamic categoryName;
@property(retain, nonatomic) YTICommand *contentsEndpoint; // @dynamic contentsEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *cover; // @dynamic cover;
@property(nonatomic) _Bool hasCategoryName; // @dynamic hasCategoryName;
@property(nonatomic) _Bool hasContentsEndpoint; // @dynamic hasContentsEndpoint;
@property(nonatomic) _Bool hasCover; // @dynamic hasCover;

@end

