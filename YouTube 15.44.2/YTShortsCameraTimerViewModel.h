//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTEditAudioAsset;

@interface YTShortsCameraTimerViewModel : NSObject
{
    YTEditAudioAsset *_audioAsset;
    CDStruct_1b6d18a9 _maxRecordingDuration;
    CDStruct_1b6d18a9 _currentRecordedDuration;
}

+ (id)modelWithMaxRecordingDuration:(CDStruct_1b6d18a9)arg1 currentRecordedDuration:(CDStruct_1b6d18a9)arg2 audioAsset:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTEditAudioAsset *audioAsset; // @synthesize audioAsset=_audioAsset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentRecordedDuration; // @synthesize currentRecordedDuration=_currentRecordedDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxRecordingDuration; // @synthesize maxRecordingDuration=_maxRecordingDuration;

@end

