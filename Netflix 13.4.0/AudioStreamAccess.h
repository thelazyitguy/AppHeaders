//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestAccess/StreamAccess.h>

#import <NFManifestAccess/_TtP16NFManifestCommon13NFAudioStream_-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;
@protocol NFTrack;

@interface AudioStreamAccess : StreamAccess <_TtP16NFManifestCommon13NFAudioStream_>
{
}

+ (unsigned long long)audioChannelCountFromString:(id)arg1;
@property(readonly, nonatomic) unsigned long long audioChannelCount;
@property(readonly, nonatomic) _Bool isEncryptedAudio;
@property(readonly, nonatomic) long long streamMediaType;

// Remaining properties
@property(readonly, copy, nonatomic) NSSet *allStreamCdnIdSet;
@property(readonly, copy, nonatomic) NSArray *allStreamUrls;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *downloadableId;
@property(nonatomic) _Bool duped;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long nominalBitrate;
@property(readonly, nonatomic) unsigned long long peakBitrate;
@property(readonly, nonatomic) NSDictionary *sidxRange;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSDictionary *ssixRange;
@property(retain, nonatomic) NSDictionary *stream;
@property(readonly, nonatomic) long long streamProfile;
@property(readonly, copy, nonatomic) NSString *streamProfileName;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <NFTrack> track;

@end

