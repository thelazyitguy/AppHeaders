//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALSMBaseState.h"

@class ALXAudioTrack;

@interface ALXSpeechSynthesizerPlayingState : ALSMBaseState
{
    ALXAudioTrack *_audioTrack;
}

+ (struct NSString *)stateUID;
@property(readonly, nonatomic) ALXAudioTrack *audioTrack; // @synthesize audioTrack=_audioTrack;
- (void).cxx_destruct;
- (id)initWithAudioTrack:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
