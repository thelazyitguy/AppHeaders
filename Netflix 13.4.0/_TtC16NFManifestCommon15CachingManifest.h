//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestCommon/_TtC16NFManifestCommon8Manifest.h>

#import <NFManifestCommon/_TtP16NFManifestCommon17NFCachingManifest_-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol _TtP16NFManifestCommon10NFManifest_;

@interface _TtC16NFManifestCommon15CachingManifest : _TtC16NFManifestCommon8Manifest <_TtP16NFManifestCommon17NFCachingManifest_>
{
    // Error parsing type: , name: manifestAccess
    // Error parsing type: , name: downloadableToStream
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic, readonly) NSDictionary *downloadIdToVideoResolutionClass;
@property(nonatomic, readonly) NSDictionary *maxBitrateByVideoResolutionClass;
- (id)validCdnForStream:(id)arg1;
- (_Bool)isAudioTrackInTrackPrefereceArray:(id)arg1;
- (_Bool)isTextTrackInTrackPrefereceArray:(id)arg1;
@property(nonatomic, readonly) NSArray *sortedTrackPreferenceArray;
@property(nonatomic, readonly) NSArray *rankSortedCdnInfoArray;
- (id)locationForKey:(id)arg1;
- (id)cdnInfoAfter:(id)arg1 validCdnIdSet:(id)arg2;
- (id)cdnInfoFromCdnId:(long long)arg1;
- (void)enumerateTracks:(CDUnknownBlockType)arg1;
- (void)enumerateVideoTracks:(CDUnknownBlockType)arg1;
- (void)enumerateTextTracks:(CDUnknownBlockType)arg1;
- (void)enumerateAudioTracks:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) NSString *movieId;
- (id)streamForDownlodable:(id)arg1;
- (id)initWithManifest:(id)arg1;
@property(nonatomic, readonly) id <_TtP16NFManifestCommon10NFManifest_> manifestAccess; // @synthesize manifestAccess;

@end

