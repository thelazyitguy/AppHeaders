//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlaylistGeneration/HlsPlaylistEntity-Protocol.h>

@class MasterPlaylist, NSMutableArray, NSMutableDictionary, NSString;

@interface MasterPlaylistAudioGroup : NSObject <HlsPlaylistEntity>
{
    MasterPlaylist *_masterPlaylist;
    NSString *_groupId;
    long long _codecProfile;
    NSString *_defaultDownloadableId;
    long long _audioChannelCount;
    NSMutableArray *_audioGroupEntries;
    NSMutableDictionary *_audioGroupEntriesByLanguage;
}

+ (id)findMatchingGroupIds:(id)arg1 forCodecRanking:(id)arg2 from:(id)arg3;
+ (id)groupIdWithGroupIndex:(long long)arg1 stream:(id)arg2;
+ (_Bool)doesGroupId:(id)arg1 matchCodec:(id)arg2 bps:(unsigned long long)arg3;
+ (_Bool)doesGroupId:(id)arg1 matchCodec:(id)arg2;
+ (_Bool)doesGroupId:(id)arg1 matchCodecProfiles:(id)arg2;
+ (_Bool)doesGroupId:(id)arg1 matchCodecProfile:(id)arg2;
+ (long long)compareGroupId:(id)arg1 andGroupId:(id)arg2;
+ (id)splitGroupId:(id)arg1;
+ (int)bitrateFromGroupId:(id)arg1;
+ (id)codecIdFromGroupId:(id)arg1;
+ (id)codecRankingFromCodecProfileId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *audioGroupEntriesByLanguage; // @synthesize audioGroupEntriesByLanguage=_audioGroupEntriesByLanguage;
@property(retain, nonatomic) NSMutableArray *audioGroupEntries; // @synthesize audioGroupEntries=_audioGroupEntries;
@property(nonatomic) long long audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(retain, nonatomic) NSString *defaultDownloadableId; // @synthesize defaultDownloadableId=_defaultDownloadableId;
@property(nonatomic) long long codecProfile; // @synthesize codecProfile=_codecProfile;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) __weak MasterPlaylist *masterPlaylist; // @synthesize masterPlaylist=_masterPlaylist;
- (_Bool)copyAudioGroupEntresForLanguageDescription:(id)arg1 fromPlaylistAudioGroup:(id)arg2;
- (id)entryForLanguageDesc:(id)arg1;
- (long long)numberOfGroupEntry;
- (id)entityForPlaylistKey:(id)arg1;
- (void)generatePlaylistString:(id)arg1;
- (id)addGroupEntryWithManifest:(id)arg1 track:(id)arg2 stream:(id)arg3 cdnId:(id)arg4;
- (id)initWithMasterPlaylist:(id)arg1 groupId:(id)arg2 codecProfile:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

