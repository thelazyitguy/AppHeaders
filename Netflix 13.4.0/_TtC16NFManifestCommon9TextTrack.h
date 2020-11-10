//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestCommon/_TtC16NFManifestCommon5Track.h>

@class NSArray, NSString;

@interface _TtC16NFManifestCommon9TextTrack : _TtC16NFManifestCommon5Track
{
}

+ (id)identifierForImageBased;
+ (id)identifierForWebVTT;
+ (id)identifierForRichWebVTT;
+ (long long)typeFromSubtitleTrackTypeString:(id)arg1;
- (id)initWithDictionary:(id)arg1 manifest:(id)arg2;
@property(nonatomic, readonly) NSArray *rankSortedCdnInfoArray;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSString *languageCode;
@property(nonatomic, readonly) NSString *language;
@property(nonatomic, readonly) _Bool isForcedNarrative;
@property(nonatomic, readonly) _Bool isClosedCaption;
@property(nonatomic, readonly) long long textTrackType;
@property(nonatomic, readonly) unsigned long long streamCount;
@property(nonatomic, readonly) _Bool hasRichWebVTT;
@property(nonatomic, readonly) _Bool hasWebVTT;
@property(nonatomic, readonly) _Bool hasImageBased;
- (void)enumerateStreams:(CDUnknownBlockType)arg1;
- (void)enumerateTextStreams:(CDUnknownBlockType)arg1;
- (id)downloadableIdForStreamIdentifier:(id)arg1;

@end
