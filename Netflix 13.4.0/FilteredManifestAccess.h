//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestAccess/ManifestAccess.h>

#import <NFManifestAccess/_TtP16NFManifestCommon18NFFilteredManifest_-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol PlatformConfigProvider, _TtP16NFManifestCommon26NFFilteredManifestDelegate_;

@interface FilteredManifestAccess : ManifestAccess <_TtP16NFManifestCommon18NFFilteredManifest_>
{
    _Bool _hasHEVC;
    _Bool _offline;
    _Bool _wifi;
    unsigned long long _cellularVideoBitrateCap;
    unsigned long long _validVideoTrackCount;
    id <PlatformConfigProvider> _platformConfigProvider;
    id <_TtP16NFManifestCommon26NFFilteredManifestDelegate_> _filteredManifestDelegate;
    NSMutableSet *_filteredStreamDownloadableIds;
    NSMutableSet *_filteredTrackNames;
    NSMutableDictionary *_dupeDlidToResolutions;
    NSArray *_cachedTrackPreferenceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedTrackPreferenceArray; // @synthesize cachedTrackPreferenceArray=_cachedTrackPreferenceArray;
@property(retain, nonatomic) NSMutableDictionary *dupeDlidToResolutions; // @synthesize dupeDlidToResolutions=_dupeDlidToResolutions;
@property(retain, nonatomic) NSMutableSet *filteredTrackNames; // @synthesize filteredTrackNames=_filteredTrackNames;
@property(retain, nonatomic) NSMutableSet *filteredStreamDownloadableIds; // @synthesize filteredStreamDownloadableIds=_filteredStreamDownloadableIds;
@property(nonatomic) __weak id <_TtP16NFManifestCommon26NFFilteredManifestDelegate_> filteredManifestDelegate; // @synthesize filteredManifestDelegate=_filteredManifestDelegate;
@property(nonatomic) __weak id <PlatformConfigProvider> platformConfigProvider; // @synthesize platformConfigProvider=_platformConfigProvider;
@property(nonatomic) unsigned long long validVideoTrackCount; // @synthesize validVideoTrackCount=_validVideoTrackCount;
@property(nonatomic) unsigned long long cellularVideoBitrateCap; // @synthesize cellularVideoBitrateCap=_cellularVideoBitrateCap;
@property(nonatomic, getter=isWifi) _Bool wifi; // @synthesize wifi=_wifi;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) _Bool hasHEVC; // @synthesize hasHEVC=_hasHEVC;
@property(readonly, copy, nonatomic) NSArray *sortedTrackPreferenceArray;
- (_Bool)isValidTextTrackForDictionary:(id)arg1;
- (_Bool)isValidAudioTrackForDictionary:(id)arg1;
- (_Bool)isValidVideoTrackForDictionary:(id)arg1;
- (id)textTrackForDictionary:(id)arg1;
- (id)audioTrackForDictionary:(id)arg1;
- (id)videoTrackForDictionary:(id)arg1;
- (void)additionalVideoFilterPass;
- (void)setupVideoFilters;
- (void)setupAudioFilter;
- (void)setupTextFilter;
- (void)setupFilters;
- (id)initWithDictionary:(id)arg1 filteredManifestDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *downloadIdToVideoResolutionClass;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *maxBitrateByVideoResolutionClass;
@property(readonly, copy, nonatomic) NSString *movieId;
@property(readonly, copy, nonatomic) NSArray *rankSortedCdnInfoArray;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *trickplayInfos;

@end
