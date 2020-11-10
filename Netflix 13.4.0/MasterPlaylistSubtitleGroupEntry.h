//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlaylistGeneration/HlsPlaylistEntity-Protocol.h>

@class MasterPlaylist, NSString, PlaylistParameter;

@interface MasterPlaylistSubtitleGroupEntry : NSObject <HlsPlaylistEntity>
{
    _Bool _isDefault;
    _Bool _isForcedNarrative;
    _Bool _isClosedCaption;
    NSString *_playlistKey;
    MasterPlaylist *_masterPlaylist;
    PlaylistParameter *_playlistParameter;
    NSString *_groupName;
    NSString *_languageBCP47;
    NSString *_trackLanguageBCP47;
    NSString *_cdnId;
    NSString *_downloadableId;
    NSString *_groupId;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool isClosedCaption; // @synthesize isClosedCaption=_isClosedCaption;
@property(nonatomic) _Bool isForcedNarrative; // @synthesize isForcedNarrative=_isForcedNarrative;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *downloadableId; // @synthesize downloadableId=_downloadableId;
@property(retain, nonatomic) NSString *cdnId; // @synthesize cdnId=_cdnId;
@property(retain, nonatomic) NSString *trackLanguageBCP47; // @synthesize trackLanguageBCP47=_trackLanguageBCP47;
@property(retain, nonatomic) NSString *languageBCP47; // @synthesize languageBCP47=_languageBCP47;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) PlaylistParameter *playlistParameter; // @synthesize playlistParameter=_playlistParameter;
@property(nonatomic) __weak MasterPlaylist *masterPlaylist; // @synthesize masterPlaylist=_masterPlaylist;
@property(retain, nonatomic) NSString *playlistKey; // @synthesize playlistKey=_playlistKey;
- (id)generateVodVariantPlaylist:(id)arg1 forPlaylistKey:(id)arg2;
- (id)generateLiveVariantPlaylist:(id)arg1 forPlaylistKey:(id)arg2;
- (double)findTargetDuration:(id)arg1 withTotalPlaylistTime:(double)arg2;
- (id)generateVariantPlaylist:(id)arg1 forPlaylistKey:(id)arg2;
- (void)generatePlaylistString:(id)arg1;
- (id)initWithManifest:(id)arg1 track:(id)arg2 stream:(id)arg3 cdnId:(id)arg4 group:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
