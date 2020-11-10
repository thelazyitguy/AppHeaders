//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFManifestAccess/_TtP16NFManifestCommon8NFStream_-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;
@protocol NFTrack;

@interface StreamAccess : NSObject <_TtP16NFManifestCommon8NFStream_>
{
    _Bool duped;
    NSDictionary *stream;
    id <NFTrack> track;
}

+ (int)streamTypeFlagFromStreamProfile:(long long)arg1;
+ (_Bool)isDVStreamProfile:(long long)arg1;
+ (_Bool)isHEVCStreamProfile:(long long)arg1;
+ (_Bool)isHEVCStream:(id)arg1;
+ (_Bool)isHevcDvStream:(id)arg1;
+ (_Bool)isHevcSdrStream:(id)arg1;
+ (_Bool)isAL1Stream:(id)arg1;
+ (_Bool)isCE3Stream:(id)arg1;
+ (id)mimeCodecFromStreamProfile:(long long)arg1;
+ (id)mimeTypeFromStreamProfile:(long long)arg1;
+ (id)streamProfileNameFromStreamProfile:(long long)arg1;
+ (long long)streamProfileFromString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool duped; // @synthesize duped;
@property(retain, nonatomic) id <NFTrack> track; // @synthesize track;
@property(retain, nonatomic) NSDictionary *stream; // @synthesize stream;
@property(readonly, copy, nonatomic) NSSet *allStreamCdnIdSet;
@property(readonly, copy, nonatomic) NSArray *allStreamUrls;
- (id)urlStringForCdnId:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *ssixRange;
@property(readonly, nonatomic) NSDictionary *sidxRange;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long peakBitrate;
@property(readonly, nonatomic) unsigned long long nominalBitrate;
@property(readonly, nonatomic) long long streamProfile;
@property(readonly, copy, nonatomic) NSString *streamProfileName;
@property(readonly, nonatomic) long long streamMediaType;
@property(readonly, copy, nonatomic) NSString *downloadableId;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
