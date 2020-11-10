//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlaylistGeneration/CdnSelector-Protocol.h>
#import <NFPlaylistGeneration/ContentHeaderDownloaderDelegate-Protocol.h>
#import <NFPlaylistGeneration/MovieHeaderProtocol-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, StreamFilterManager;
@protocol CdnSelectionDelegate, MovieHeaderDownloaderDelegate, _TtP16NFManifestCommon10NFManifest_;

@interface MovieHeaderDownloader3 : NSObject <CdnSelector, ContentHeaderDownloaderDelegate, MovieHeaderProtocol>
{
    NSDate *_downloaderStartTime;
    int _concurrentDownloads;
    int _contentHeaderDownloadPhase;
    _Bool _isLive;
    _Bool _filterStreamsByDisplayType;
    _Bool _dvStreamsExcludeHEVCStreams;
    _Bool _preferHEVCStreams;
    _Bool _excludeHEVCStreams;
    _Bool _excludeDVStreams;
    _Bool _prioritizePreferredText;
    _Bool _prioritizePreferredAudio;
    _Bool _prioritizeStereoAudio;
    _Bool _downloadSucceeded;
    _Bool _downloadFailed;
    _Bool _downloadCancelled;
    NSArray *_filteredHeaderDownloaders;
    id <CdnSelectionDelegate> _cdnSelectionDelegate;
    long long _movieDuration;
    long long _videoDuration;
    long long _audioDuration;
    long long _maxSegmentInSecond;
    double _videoCdnKbps;
    NSString *_playbackId;
    long long _maxParallelConnectionsAllowed;
    NSDictionary *_dlid2Pssh;
    NSMutableDictionary *_headerDownloaders;
    NSMutableDictionary *_filteredHeaderDownloaderMap;
    id <MovieHeaderDownloaderDelegate> _delegate;
    NSString *_movieId;
    double _totalCdnKbps;
    NSMutableDictionary *_contentHeaderDownloaderCompletionBlocks;
    NSMutableArray *_failedCdns;
    NSMutableArray *_videoDownloadableIds;
    StreamFilterManager *_streamFilterManager;
    id <_TtP16NFManifestCommon10NFManifest_> _manifest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP16NFManifestCommon10NFManifest_> manifest; // @synthesize manifest=_manifest;
@property(nonatomic) _Bool downloadCancelled; // @synthesize downloadCancelled=_downloadCancelled;
@property(nonatomic) _Bool downloadFailed; // @synthesize downloadFailed=_downloadFailed;
@property(nonatomic) _Bool downloadSucceeded; // @synthesize downloadSucceeded=_downloadSucceeded;
@property(retain, nonatomic) StreamFilterManager *streamFilterManager; // @synthesize streamFilterManager=_streamFilterManager;
@property(retain, nonatomic) NSMutableArray *videoDownloadableIds; // @synthesize videoDownloadableIds=_videoDownloadableIds;
@property(retain, nonatomic) NSMutableArray *failedCdns; // @synthesize failedCdns=_failedCdns;
@property(retain, nonatomic) NSMutableDictionary *contentHeaderDownloaderCompletionBlocks; // @synthesize contentHeaderDownloaderCompletionBlocks=_contentHeaderDownloaderCompletionBlocks;
@property(nonatomic) double totalCdnKbps; // @synthesize totalCdnKbps=_totalCdnKbps;
@property(retain, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(nonatomic) __weak id <MovieHeaderDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *filteredHeaderDownloaderMap; // @synthesize filteredHeaderDownloaderMap=_filteredHeaderDownloaderMap;
@property(retain, nonatomic) NSMutableDictionary *headerDownloaders; // @synthesize headerDownloaders=_headerDownloaders;
@property(retain, nonatomic) NSDictionary *dlid2Pssh; // @synthesize dlid2Pssh=_dlid2Pssh;
@property(nonatomic) _Bool prioritizeStereoAudio; // @synthesize prioritizeStereoAudio=_prioritizeStereoAudio;
@property(nonatomic) _Bool prioritizePreferredAudio; // @synthesize prioritizePreferredAudio=_prioritizePreferredAudio;
@property(nonatomic) _Bool prioritizePreferredText; // @synthesize prioritizePreferredText=_prioritizePreferredText;
@property(nonatomic) _Bool excludeDVStreams; // @synthesize excludeDVStreams=_excludeDVStreams;
@property(nonatomic) _Bool excludeHEVCStreams; // @synthesize excludeHEVCStreams=_excludeHEVCStreams;
@property(nonatomic) _Bool preferHEVCStreams; // @synthesize preferHEVCStreams=_preferHEVCStreams;
@property(nonatomic) long long maxParallelConnectionsAllowed; // @synthesize maxParallelConnectionsAllowed=_maxParallelConnectionsAllowed;
@property(retain, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(nonatomic) double videoCdnKbps; // @synthesize videoCdnKbps=_videoCdnKbps;
@property(nonatomic) long long maxSegmentInSecond; // @synthesize maxSegmentInSecond=_maxSegmentInSecond;
@property(nonatomic) long long audioDuration; // @synthesize audioDuration=_audioDuration;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long movieDuration; // @synthesize movieDuration=_movieDuration;
@property __weak id <CdnSelectionDelegate> cdnSelectionDelegate; // @synthesize cdnSelectionDelegate=_cdnSelectionDelegate;
@property(nonatomic) _Bool dvStreamsExcludeHEVCStreams; // @synthesize dvStreamsExcludeHEVCStreams=_dvStreamsExcludeHEVCStreams;
@property(nonatomic) _Bool filterStreamsByDisplayType; // @synthesize filterStreamsByDisplayType=_filterStreamsByDisplayType;
@property(retain, nonatomic) NSArray *filteredHeaderDownloaders; // @synthesize filteredHeaderDownloaders=_filteredHeaderDownloaders;
- (void)switchedCdnId:(long long)arg1 forDownloadableId:(id)arg2;
- (void)initiateDownloadableId:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)contentHeaderForDownloadableId:(id)arg1;
- (id)sidxInfoFactory;
- (id)psshCoordinator;
- (id)contentHeaderCache;
- (id)platformConfigProvider;
- (id)platformLogblobSink;
- (void)contentHeaderDownloaderDidCompleteMovieParse:(id)arg1;
- (void)reportAppError:(id)arg1 withParam:(id)arg2 isSevere:(_Bool)arg3;
- (_Bool)isLive;
- (_Bool)shouldContentHeaderDownloader:(id)arg1 attempDownloadFromCdn:(long long)arg2;
- (void)contentHeaderDownloader:(id)arg1 didFailDownloadAttemptFromCdn:(long long)arg2;
- (_Bool)isPrefetchCancelledForContentHeaderDownloader:(id)arg1;
- (void)contentHeaderDownloader:(id)arg1 didFinishDownloadableId:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)errorWithErrorCode:(long long)arg1 domain:(id)arg2 contentHeaderDownloaderError:(id)arg3;
- (void)notifyCompletionBlockForDownloadableId:(id)arg1;
- (_Bool)prefetchStartedForDownloadableId:(id)arg1;
- (_Bool)hasDownloadBeenKickedOffForDownloadableId:(id)arg1;
- (_Bool)didCancelPrefetch;
- (unsigned long long)prefetchedTextStreamCount;
- (unsigned long long)prefetchedAudioStreamCount;
- (unsigned long long)prefetchedVideoStreamCount;
- (void)cancelHeaderDownload;
- (void)setMaxSegmentInSecond:(long long)arg1 andMovieDurationIfNecessary:(long long)arg2;
- (void)onContentHeaderDownloaderFinish:(id)arg1;
- (_Bool)didDownloadAttemptFailForCdn:(long long)arg1;
- (void)downloadAttemptFailed:(long long)arg1;
- (void)setupHeaderDownloaders:(long long)arg1;
- (int)downloadPhaseFromMediaType:(long long)arg1;
- (void)calculateVideoKbps;
- (void)kickoffMoreDownloads;
- (void)kickoffDownload;
- (id)setupContentHeaderDownloaderForStream:(id)arg1;
- (void)setIsLive:(_Bool)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithMovieId:(id)arg1 playbackId:(id)arg2 manifest:(id)arg3 andDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

