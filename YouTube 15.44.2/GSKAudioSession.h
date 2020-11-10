//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GSKSession.h>

@class NSDate, NSMutableData;

@interface GSKAudioSession : GSKSession
{
    NSMutableData *_audioDataBuffer;
    NSDate *_lastRequestTimestamp;
    _Bool _isPreambleAudio;
    double _minRequestInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double minRequestInterval; // @synthesize minRequestInterval=_minRequestInterval;
- (_Bool)isPreambleAudio;
- (id)flushAudioData;
- (id)sendAudioData:(id)arg1;
- (id)sendAudioData:(id)arg1 isPreamble:(_Bool)arg2;
- (void)startSession;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

@end

