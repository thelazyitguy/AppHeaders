//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwilioVoice/TVOAudioCodec.h>

@interface TVOOpusCodec : TVOAudioCodec
{
}

- (id)description;
@property(readonly, nonatomic, getter=isDtxEnabled) _Bool useDtx;
@property(readonly, nonatomic) unsigned long long maxAverageBitrate;
- (id)initWithMaxAverageBitrate:(unsigned long long)arg1 useDtx:(_Bool)arg2;
- (id)initWithMaxAverageBitrate:(unsigned long long)arg1;
- (id)init;

@end
