//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTCMediaStreamTrack.h"

@class RTCAudioSource;

@interface RTCAudioTrack : RTCMediaStreamTrack
{
    RTCAudioSource *_source;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) scoped_refptr_833c0867 nativeAudioTrack;
@property(readonly, nonatomic) RTCAudioSource *source; // @synthesize source=_source;
- (id)initWithNativeTrack:(scoped_refptr_7d7e84a9)arg1 type:(long long)arg2;
- (id)initWithFactory:(id)arg1 source:(id)arg2 trackId:(id)arg3;

@end

