//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTEditAudioAmplitudeReader : NSObject
{
}

+ (_Bool)getSampleRate:(double *)arg1 channelCount:(unsigned int *)arg2 fromAudioTrack:(id)arg3;
- (void)processSampleBuff:(struct opaqueCMSampleBuffer *)arg1 amplitudeReaderState:(CDStruct_07cf4a1f *)arg2 bucketValues:(id)arg3;
- (void)readAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 numSections:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

