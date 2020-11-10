//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsTrimPlayerObserver-Protocol.h"
#import "YTShortsTrimThumbnailControllerDelegate-Protocol.h"
#import "YTShortsTrimToolViewDelegate-Protocol.h"

@class AVAsset, NSMutableArray, NSString, YTShortsTrimThumbnailController, YTShortsTrimToolViewModel;
@protocol YTShortsTrimPlayer;

@interface YTShortsTrimToolController : NSObject <YTShortsTrimThumbnailControllerDelegate, YTShortsTrimPlayerObserver, YTShortsTrimToolViewDelegate>
{
    id <YTShortsTrimPlayer> _player;
    AVAsset *_asset;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_e83c9415 _fullTimeRange;
    int _defaultTimeScale;
    CDStruct_1b6d18a9 _maxTrimDuration;
    YTShortsTrimThumbnailController *_thumbnailController;
    NSMutableArray *_filmstripImages;
    _Bool _isInteractingWithFilmstrip;
    _Bool _isInteractingWithTrimmer;
    YTShortsTrimToolViewModel *_model;
    CDUnknownBlockType _didChangeModelHandler;
    CDUnknownBlockType _didEndInteractionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didEndInteractionHandler; // @synthesize didEndInteractionHandler=_didEndInteractionHandler;
@property(copy, nonatomic) CDUnknownBlockType didChangeModelHandler; // @synthesize didChangeModelHandler=_didChangeModelHandler;
@property(readonly, nonatomic) YTShortsTrimToolViewModel *model; // @synthesize model=_model;
- (double)totalNumberOfImagesForFilmstripThatFitsNumberOfImages:(double)arg1;
- (CDStruct_1b6d18a9)filmstripStartTime;
- (CDStruct_1b6d18a9)selectedTimeRangeDurationForStartPosition:(double)arg1 endPosition:(double)arg2;
- (CDStruct_1b6d18a9)selectedTimeRangeDuration;
- (CDStruct_1b6d18a9)selectedTimeRangeStart;
- (CDStruct_e83c9415)selectedTimeRangeForStartPosition:(double)arg1 endPosition:(double)arg2;
- (_Bool)isTimeRangeSupportedWithStartPosition:(double)arg1 endPosition:(double)arg2;
- (CDStruct_e83c9415)seekableTimeRange;
- (CDStruct_1b6d18a9)playheadTime;
- (double)rightTrimHandleReleasePlayheadPosition;
- (void)rebuildFilmstripImageArray;
- (id)accessibilityValueForTime:(CDStruct_1b6d18a9)arg1;
- (void)updateTrimmerAccessibilityValues;
- (void)updateFilmstripAccessibilityValues;
- (void)updateCurrentDurationString;
- (void)updatePlayerTimeRangeFromModel;
- (void)updatePlayerCurrentTimeFromModelWithSeekPrecision:(CDStruct_1b6d18a9)arg1;
- (void)didChangeModel;
- (void)shortsTrimFilmstripView:(id)arg1 didDisplayImagesAtIndices:(struct _NSRange)arg2;
- (void)shortsTrimFilmstripViewDidReloadImages:(id)arg1;
- (void)shortsTrimFilmstripViewScrollingDidEnd:(id)arg1;
- (void)shortsTrimFilmstripViewScrollingDidBegin:(id)arg1;
- (void)shortsTrimFilmstripView:(id)arg1 didResizeToFitNumberOfImages:(double)arg2;
- (void)shortsTrimFilmstripView:(id)arg1 normalizedScrollAmountDidChange:(double)arg2;
- (void)shortsTrimmerControl:(id)arg1 didEndInteraction:(unsigned long long)arg2;
- (void)shortsTrimmerControl:(id)arg1 didBeginInteraction:(unsigned long long)arg2;
- (void)shortsTrimmerControl:(id)arg1 normalizedPlayheadPositionDidChange:(double)arg2;
- (void)shortsTrimmerControl:(id)arg1 normalizedEndPositionDidChange:(double)arg2;
- (void)shortsTrimmerControl:(id)arg1 normalizedStartPositionDidChange:(double)arg2;
- (void)shortsTrimThumbnailController:(id)arg1 didLoadImage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shortsTrimPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 selectedTimeRange;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 asset:(id)arg2 maxTrimDuration:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

