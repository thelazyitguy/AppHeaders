//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFPlaylistGeneration/PlaylistBuilderMovieHeaderDataProvider-Protocol.h>

@class NSString;
@protocol CdnSelectionDelegate;

@protocol MovieHeaderProtocol <PlaylistBuilderMovieHeaderDataProvider>
@property(nonatomic) _Bool dvStreamsExcludeHEVCStreams;
@property(nonatomic) _Bool filterStreamsByDisplayType;
@property(readonly, nonatomic) NSString *movieId;
@property __weak id <CdnSelectionDelegate> cdnSelectionDelegate;
- (_Bool)prefetchStartedForDownloadableId:(NSString *)arg1;
- (_Bool)hasDownloadBeenKickedOffForDownloadableId:(NSString *)arg1;
- (unsigned long long)prefetchedTextStreamCount;
- (unsigned long long)prefetchedAudioStreamCount;
- (unsigned long long)prefetchedVideoStreamCount;
- (void)cancelHeaderDownload;
- (void)setupHeaderDownloaders:(long long)arg1;
- (void)kickoffDownload;
- (_Bool)didDownloadAttemptFailForCdn:(long long)arg1;
@end
