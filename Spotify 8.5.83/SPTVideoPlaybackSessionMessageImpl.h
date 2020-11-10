//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlaybackSessionMessage-Protocol.h"

@class NSString;
@protocol BMPlaybackIdentity;

@interface SPTVideoPlaybackSessionMessageImpl : NSObject <BMPlaybackSessionMessage>
{
    id <BMPlaybackIdentity> _identity;
    NSString *_featureIdentifier;
    long long _msStartPosition;
    long long _startBitrate;
    long long _msDuration;
    long long _msStartTime;
    long long _msManifestLoadTime;
    long long _msEncryptionLoadTime;
    long long _msInitialBuffering;
    long long _msBufferingSeek;
    long long _msBufferingSeekLongest;
    long long _msBufferingStall;
    long long _msBufferingStallLongest;
    long long _nStalls;
    long long _nSeekback;
    long long _nSeekforward;
    long long _msPlayed;
    long long _msPlayedNominal;
    long long _msPlayedBackground;
    long long _msPlayedFullscreen;
    long long _msPlayedSubtitles;
    NSString *_connectionTypeStart;
    NSString *_connectionTypeEnd;
    long long _kbpsAverageBandwidth;
    NSString *_encryptionType;
    long long _kbytesPlayed;
    long long _kbytesDownloaded;
    long long _nViewTransitions;
    long long _fps;
    long long _nDroppedFrames;
    double _averageScaleFactor;
    double _averageDeviceOrientation;
    NSString *_exitReason;
    double _aspectRatio;
    NSString *_lastUsedSubtitle;
    NSString *_streamingType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *streamingType; // @synthesize streamingType=_streamingType;
@property(copy, nonatomic) NSString *lastUsedSubtitle; // @synthesize lastUsedSubtitle=_lastUsedSubtitle;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy, nonatomic) NSString *exitReason; // @synthesize exitReason=_exitReason;
@property(nonatomic) double averageDeviceOrientation; // @synthesize averageDeviceOrientation=_averageDeviceOrientation;
@property(nonatomic) double averageScaleFactor; // @synthesize averageScaleFactor=_averageScaleFactor;
@property(nonatomic) long long nDroppedFrames; // @synthesize nDroppedFrames=_nDroppedFrames;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) long long nViewTransitions; // @synthesize nViewTransitions=_nViewTransitions;
@property(nonatomic) long long kbytesDownloaded; // @synthesize kbytesDownloaded=_kbytesDownloaded;
@property(nonatomic) long long kbytesPlayed; // @synthesize kbytesPlayed=_kbytesPlayed;
@property(copy, nonatomic) NSString *encryptionType; // @synthesize encryptionType=_encryptionType;
@property(nonatomic) long long kbpsAverageBandwidth; // @synthesize kbpsAverageBandwidth=_kbpsAverageBandwidth;
@property(copy, nonatomic) NSString *connectionTypeEnd; // @synthesize connectionTypeEnd=_connectionTypeEnd;
@property(copy, nonatomic) NSString *connectionTypeStart; // @synthesize connectionTypeStart=_connectionTypeStart;
@property(nonatomic) long long msPlayedSubtitles; // @synthesize msPlayedSubtitles=_msPlayedSubtitles;
@property(nonatomic) long long msPlayedFullscreen; // @synthesize msPlayedFullscreen=_msPlayedFullscreen;
@property(nonatomic) long long msPlayedBackground; // @synthesize msPlayedBackground=_msPlayedBackground;
@property(nonatomic) long long msPlayedNominal; // @synthesize msPlayedNominal=_msPlayedNominal;
@property(nonatomic) long long msPlayed; // @synthesize msPlayed=_msPlayed;
@property(nonatomic) long long nSeekforward; // @synthesize nSeekforward=_nSeekforward;
@property(nonatomic) long long nSeekback; // @synthesize nSeekback=_nSeekback;
@property(nonatomic) long long nStalls; // @synthesize nStalls=_nStalls;
@property(nonatomic) long long msBufferingStallLongest; // @synthesize msBufferingStallLongest=_msBufferingStallLongest;
@property(nonatomic) long long msBufferingStall; // @synthesize msBufferingStall=_msBufferingStall;
@property(nonatomic) long long msBufferingSeekLongest; // @synthesize msBufferingSeekLongest=_msBufferingSeekLongest;
@property(nonatomic) long long msBufferingSeek; // @synthesize msBufferingSeek=_msBufferingSeek;
@property(nonatomic) long long msInitialBuffering; // @synthesize msInitialBuffering=_msInitialBuffering;
@property(nonatomic) long long msEncryptionLoadTime; // @synthesize msEncryptionLoadTime=_msEncryptionLoadTime;
@property(nonatomic) long long msManifestLoadTime; // @synthesize msManifestLoadTime=_msManifestLoadTime;
@property(nonatomic) long long msStartTime; // @synthesize msStartTime=_msStartTime;
@property(nonatomic) long long msDuration; // @synthesize msDuration=_msDuration;
@property(nonatomic) long long startBitrate; // @synthesize startBitrate=_startBitrate;
@property(nonatomic) long long msStartPosition; // @synthesize msStartPosition=_msStartPosition;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
- (id)initWithIdentity:(id)arg1 featureIdentifier:(id)arg2 msStartPosition:(long long)arg3 startBitrate:(long long)arg4 msDuration:(long long)arg5 msStartTime:(long long)arg6 msManifestLoadTime:(long long)arg7 msEncryptionLoadTime:(long long)arg8 msInitialBuffering:(long long)arg9 msBufferingSeek:(long long)arg10 msBufferingSeekLongest:(long long)arg11 msBufferingStall:(long long)arg12 msBufferingStallLongest:(long long)arg13 nStalls:(long long)arg14 nSeekback:(long long)arg15 nSeekforward:(long long)arg16 msPlayed:(long long)arg17 msPlayedNominal:(long long)arg18 msPlayedBackground:(long long)arg19 msPlayedFullscreen:(long long)arg20 msPlayedSubtitles:(long long)arg21 connectionTypeStart:(id)arg22 connectionTypeEnd:(id)arg23 kbpsAverageBandwidth:(long long)arg24 encryptionType:(id)arg25 kbytesDownloaded:(long long)arg26 nViewTransitions:(long long)arg27 nDroppedFrames:(long long)arg28 averageDeviceOrientation:(double)arg29 exitReason:(id)arg30 aspectRatio:(double)arg31 lastUsedSubtitle:(id)arg32 streamingType:(id)arg33;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

