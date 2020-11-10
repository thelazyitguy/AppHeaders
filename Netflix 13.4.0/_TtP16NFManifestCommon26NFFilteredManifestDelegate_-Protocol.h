//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFPlaylistGeneration/NSObject-Protocol.h>

@protocol NFVideoStream, PlatformConfigProvider, _TtP16NFManifestCommon13NFAudioStream_, _TtP16NFManifestCommon18NFFilteredManifest_;

@protocol _TtP16NFManifestCommon26NFFilteredManifestDelegate_ <NSObject>
- (id <PlatformConfigProvider>)platformConfigProviderForFilteredManifest:(id <_TtP16NFManifestCommon18NFFilteredManifest_>)arg1;
- (unsigned long long)videoBitrateCapForFilteredManifest:(id <_TtP16NFManifestCommon18NFFilteredManifest_>)arg1;
- (_Bool)isAudioStreamAllowed:(id <_TtP16NFManifestCommon13NFAudioStream_>)arg1 forFilteredManifest:(id <_TtP16NFManifestCommon18NFFilteredManifest_>)arg2;
- (_Bool)isVideoStreamAllowed:(id <NFVideoStream>)arg1 forFilteredManifest:(id <_TtP16NFManifestCommon18NFFilteredManifest_>)arg2;
- (_Bool)offlineStateForFilteredManifest:(id <_TtP16NFManifestCommon18NFFilteredManifest_>)arg1;
- (_Bool)wifiStateForFilteredManifest:(id <_TtP16NFManifestCommon18NFFilteredManifest_>)arg1;
@end
