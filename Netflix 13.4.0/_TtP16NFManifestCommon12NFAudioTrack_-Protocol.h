//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestAccess/_TtP16NFManifestCommon7NFTrack_-Protocol.h>

@protocol _TtP16NFManifestCommon12NFAudioTrack_ <_TtP16NFManifestCommon7NFTrack_>
@property(readonly, nonatomic) _Bool isAssistive;
@property(readonly, nonatomic) long long audioTrackType;
- (void)enumerateAudioStreams:(void (^)(id <_TtP16NFManifestCommon13NFAudioStream_>, unsigned long long, _Bool *))arg1;
@end

