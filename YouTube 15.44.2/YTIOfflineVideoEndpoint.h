//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIRenderer;

@interface YTIOfflineVideoEndpoint : GPBMessage
{
}

+ (id)descriptor;
+ (id)offlineVideoEndpointWithVideoID:(id)arg1 action:(int)arg2;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIRenderer *offlineability; // @dynamic offlineability;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

