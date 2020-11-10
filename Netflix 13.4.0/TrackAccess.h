//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFManifestAccess/_TtP16NFManifestCommon7NFTrack_-Protocol.h>

@class NSDictionary, NSString;
@protocol NFManifest;

@interface TrackAccess : NSObject <_TtP16NFManifestCommon7NFTrack_>
{
    id <NFManifest> manifest;
    NSDictionary *track;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *track; // @synthesize track;
@property(retain, nonatomic) id <NFManifest> manifest; // @synthesize manifest;
@property(readonly, nonatomic) unsigned long long streamCount;
- (void)enumerateStreams:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *decryptionKey;
@property(readonly, nonatomic) _Bool isEncrypted;
@property(readonly, copy, nonatomic) NSString *languageDescription;
@property(readonly, nonatomic) _Bool native;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, copy, nonatomic) NSString *rawTrackType;
@property(readonly, copy, nonatomic) NSString *languageCode;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSString *trackName;
@property(readonly, copy, nonatomic) NSString *trackUniqueIdentifier;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

