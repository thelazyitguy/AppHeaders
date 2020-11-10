//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTParser-Protocol.h>

@class NSError, NSMutableArray, NSScanner, NSString;

@interface MLHLSMediaPlaylistParser : NSObject <YTParser>
{
    NSScanner *_scanner;
    NSMutableArray *_unparsedTags;
    NSMutableArray *_mediaSegments;
    double _lastDuration;
    NSError *_error;
    unsigned long long _version;
    NSString *_playlistType;
    unsigned long long _targetDuration;
}

- (void).cxx_destruct;
- (void)addUnparsedTag:(id)arg1;
- (void)parseSegmentURL;
- (void)parseTargetDurationTag;
- (void)parsePlaylistTypeTag;
- (void)parseVersionTag;
- (void)parseInfTag;
- (void)parseLine;
- (void)reset;
- (id)parseFromString:(id)arg1 error:(id *)arg2;
- (id)parse:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

