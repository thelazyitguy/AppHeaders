//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditRangedAudioSource-Protocol.h>

@class AVAssetExportSession, GPCPromise, NSMutableData, NSString, NSURL;
@protocol YTEditRangedNetworkService;

@interface YTEditRangedMP4Fetcher : NSObject <YTEditRangedAudioSource>
{
    GPCPromise *_promise;
    struct _NSRange _initialByteRange;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _actualTimeRange;
    CDStruct_1b6d18a9 _movieDuration;
    NSMutableData *_audioData;
    NSMutableData *_sessionData;
    NSURL *_url;
    id <YTEditRangedNetworkService> _networkService;
    unsigned long long _initTaskID;
    AVAssetExportSession *_exportSession;
}

- (void).cxx_destruct;
- (void)didExportFileAtTempURL:(id)arg1;
- (void)transcodeFileAtTempURL:(id)arg1;
- (void)networkService:(id)arg1 taskID:(long long)arg2 didCompleteWithError:(id)arg3;
- (void)networkService:(id)arg1 taskID:(long long)arg2 didReceiveData:(id)arg3;
- (void)networkService:(id)arg1 requestDidReceiveResponse:(unsigned long long)arg2;
- (void)succeedWithResult:(id)arg1;
- (void)failWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
- (void)audioDataDidDownload:(id)arg1;
- (struct YTEditRangedMP4Segment)segmentIndex:(struct SegmentIndex)arg1 startOffset:(long long)arg2 segmentContainingTime:(CDStruct_1b6d18a9)arg3 inclusiveSearch:(_Bool)arg4;
- (void)didParseSegmentIndex:(struct SegmentIndex)arg1;
- (void)didParseMovie:(struct Movie)arg1;
- (void)parseMP4Data:(id)arg1;
- (void)fetchAudioSegmentForRange:(struct _NSRange)arg1;
- (void)fetchInitAndIndexSegment;
- (_Bool)formatStreamIsValid:(id)arg1 error:(id *)arg2;
- (id)fetchAssetForFormatStream:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithRangedNetworkService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

