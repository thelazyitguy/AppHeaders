//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VariantPlaylist : NSObject
{
}

+ (id)variantIFramePlaylist:(id)arg1 cdnId:(id)arg2 playlistKey:(id)arg3 movieDetails:(id)arg4 playlistParameter:(id)arg5 liveSegmentTracker:(id)arg6;
+ (id)variantAVPlaylist:(id)arg1 cdnId:(id)arg2 playlistKey:(id)arg3 movieDetails:(id)arg4 playlistParameter:(id)arg5 liveSegmentTracker:(id)arg6;
+ (void)variantPlaylistLiveHeaderSections:(id)arg1 targetDuration:(int)arg2 playlistParameter:(id)arg3 sequenceNumber:(int)arg4 contentHeader:(id)arg5 movieDetails:(id)arg6 urlInPlaylist:(id)arg7 offset:(unsigned long long)arg8;
+ (id)variantIFramePlaylist:(id)arg1 cdnId:(id)arg2 playlistKey:(id)arg3 movieDetails:(id)arg4 playlistParameter:(id)arg5;
+ (id)variantAVPlaylist:(id)arg1 cdnId:(id)arg2 playlistKey:(id)arg3 movieDetails:(id)arg4 playlistParameter:(id)arg5;
+ (id)replaceUrlString:(id)arg1 withPort:(int)arg2 reason:(id)arg3 playbackId:(id)arg4 hasQuery:(_Bool *)arg5;
+ (void)variantPlaylistCommonSection2:(id)arg1 urlInPlaylist:(id)arg2 moovOffset:(unsigned long long)arg3 playlistParameter:(id)arg4;
+ (id)variantPlaylistUrlVariableSection:(id)arg1 urlInPlaylist:(id)arg2 urlVariable:(id)arg3;
+ (void)variantPlaylistKeySection:(id)arg1 keyUrl:(id)arg2 fpsAppCertVer:(id)arg3;
+ (id)variantPlaylistKeyUrl:(id)arg1 playbackId:(id)arg2 movieDetails:(id)arg3;
+ (void)variantPlaylistCommonSection1:(id)arg1 targetDuration:(int)arg2 playlistParameter:(id)arg3 sequenceNumber:(int)arg4 playlistType:(id)arg5;

@end
