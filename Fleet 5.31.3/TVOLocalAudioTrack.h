//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwilioVoice/TVOAudioTrack.h>

@class NSString, TVOAudioOptions, TVOMediaFactory;

@interface TVOLocalAudioTrack : TVOAudioTrack
{
    NSString *_trackId;
    TVOAudioOptions *_options;
    TVOMediaFactory *_mediaFactory;
}

+ (id)trackWithOptions:(id)arg1 enabled:(_Bool)arg2 name:(id)arg3;
+ (id)track;
@property(nonatomic) __weak TVOMediaFactory *mediaFactory; // @synthesize mediaFactory=_mediaFactory;
@property(retain, nonatomic) TVOAudioOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (shared_ptr_1ecc81f6)coreLocalAudioTrack;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoreTrack:(shared_ptr_1ecc81f6)arg1 mediaFactory:(id)arg2 audioOptions:(id)arg3;
- (id)initWithAudioOptions:(id)arg1 enabled:(_Bool)arg2 name:(id)arg3 mediaFactory:(id)arg4;
- (id)initWithAudioOptions:(id)arg1 enabled:(_Bool)arg2 name:(id)arg3;
- (id)init;

@end
