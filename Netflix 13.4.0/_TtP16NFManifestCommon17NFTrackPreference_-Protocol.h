//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestAccess/NSObject-Protocol.h>

@class NSString;
@protocol _TtP16NFManifestCommon12NFAudioTrack_;

@protocol _TtP16NFManifestCommon17NFTrackPreference_ <NSObject>
@property(readonly, copy, nonatomic) NSString *audioMediaId;
@property(readonly, copy, nonatomic) NSString *videoMediaId;
@property(readonly, copy, nonatomic) NSString *subtitleMediaId;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) unsigned long long preferenceOrder;
@property(retain, nonatomic) id <_TtP16NFManifestCommon12NFAudioTrack_> audioTrack;
@end

