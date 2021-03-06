//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HAMOpusIdentificationHeader : NSObject
{
    unsigned char _channelCount;
    unsigned char _streamCount;
    unsigned char _coupledStreams;
    unsigned short _gain;
    unsigned short _preSkip;
    unsigned int _layoutTag;
    int _sampleRate;
    NSData *_mapping;
}

+ (id)headerFromFormatDescription:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(readonly, nonatomic) unsigned int layoutTag; // @synthesize layoutTag=_layoutTag;
@property(readonly, nonatomic) NSData *mapping; // @synthesize mapping=_mapping;
@property(readonly, nonatomic) unsigned char coupledStreams; // @synthesize coupledStreams=_coupledStreams;
@property(readonly, nonatomic) unsigned char streamCount; // @synthesize streamCount=_streamCount;
@property(readonly, nonatomic) unsigned short preSkip; // @synthesize preSkip=_preSkip;
@property(readonly, nonatomic) unsigned short gain; // @synthesize gain=_gain;
@property(readonly, nonatomic) unsigned char channelCount; // @synthesize channelCount=_channelCount;
- (_Bool)isDecoderConfigurationCompatibleWithFormatDescription:(id)arg1;
- (id)initWithASBD:(const struct AudioStreamBasicDescription *)arg1;

@end

