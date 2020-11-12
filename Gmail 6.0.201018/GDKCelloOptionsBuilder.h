//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKBackendInstance, GDKBackfillOptions, NSArray, NSOrderedSet, NSURL;

@interface GDKCelloOptionsBuilder : NSObject
{
    _Bool _enableGooglePhotos_18;
    _Bool _multiParentDeprecationEnabled_29;
    _Bool _updateResourceSupportEnabled_28;
    _Bool _invalidateCacheForResourceSupport_33;
    _Bool _updateNativeSupportEnabled_26;
    _Bool _pessimisticCopy;
    _Bool _enableEventRecording;
    _Bool _skipSharedDrivesWithMissingStats;
    _Bool _enableSubfolderSharing;
    _Bool _allowLastViewedUpdateFailure;
    _Bool _searchStoreEnabled;
    _Bool _localeBasedTitleCollationEnabled;
    _Bool _disableApiary;
    _Bool _backfillOptions_hazzer;
    _Bool _backendInstance_hazzer;
    _Bool _mimeTypeConstraints_hazzer;
    _Bool _enableGooglePhotos_hazzer;
    _Bool _changelogTooDeepThreshold_hazzer;
    _Bool _multiParentDeprecationEnabled_hazzer;
    _Bool _logLevel_hazzer;
    _Bool _updateResourceSupportEnabled_hazzer;
    _Bool _invalidateCacheForResourceSupport_hazzer;
    _Bool _updateNativeSupportEnabled_hazzer;
    int _changelogTooDeepThreshold_25;
    GDKBackfillOptions *_backfillOptions_15;
    GDKBackendInstance *_backendInstance_15;
    NSArray *_mimeTypeConstraints_19;
    unsigned long long _logLevel_8;
    NSURL *_metadataURL;
    NSOrderedSet *_defaultFields;
    NSOrderedSet *_defaultSharedDriveFields;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithMetadataURL:(id)arg1 defaultFields:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool updateNativeSupportEnabled_hazzer; // @synthesize updateNativeSupportEnabled_hazzer=_updateNativeSupportEnabled_hazzer;
@property(nonatomic) _Bool invalidateCacheForResourceSupport_hazzer; // @synthesize invalidateCacheForResourceSupport_hazzer=_invalidateCacheForResourceSupport_hazzer;
@property(nonatomic) _Bool updateResourceSupportEnabled_hazzer; // @synthesize updateResourceSupportEnabled_hazzer=_updateResourceSupportEnabled_hazzer;
@property(nonatomic) _Bool logLevel_hazzer; // @synthesize logLevel_hazzer=_logLevel_hazzer;
@property(nonatomic) _Bool multiParentDeprecationEnabled_hazzer; // @synthesize multiParentDeprecationEnabled_hazzer=_multiParentDeprecationEnabled_hazzer;
@property(nonatomic) _Bool changelogTooDeepThreshold_hazzer; // @synthesize changelogTooDeepThreshold_hazzer=_changelogTooDeepThreshold_hazzer;
@property(nonatomic) _Bool enableGooglePhotos_hazzer; // @synthesize enableGooglePhotos_hazzer=_enableGooglePhotos_hazzer;
@property(nonatomic) _Bool mimeTypeConstraints_hazzer; // @synthesize mimeTypeConstraints_hazzer=_mimeTypeConstraints_hazzer;
@property(nonatomic) _Bool backendInstance_hazzer; // @synthesize backendInstance_hazzer=_backendInstance_hazzer;
@property(nonatomic) _Bool backfillOptions_hazzer; // @synthesize backfillOptions_hazzer=_backfillOptions_hazzer;
@property(nonatomic) _Bool disableApiary; // @synthesize disableApiary=_disableApiary;
@property(nonatomic) _Bool localeBasedTitleCollationEnabled; // @synthesize localeBasedTitleCollationEnabled=_localeBasedTitleCollationEnabled;
@property(nonatomic) _Bool searchStoreEnabled; // @synthesize searchStoreEnabled=_searchStoreEnabled;
@property(nonatomic) _Bool allowLastViewedUpdateFailure; // @synthesize allowLastViewedUpdateFailure=_allowLastViewedUpdateFailure;
@property(nonatomic) _Bool enableSubfolderSharing; // @synthesize enableSubfolderSharing=_enableSubfolderSharing;
@property(nonatomic) _Bool skipSharedDrivesWithMissingStats; // @synthesize skipSharedDrivesWithMissingStats=_skipSharedDrivesWithMissingStats;
@property(nonatomic) _Bool enableEventRecording; // @synthesize enableEventRecording=_enableEventRecording;
@property(nonatomic) _Bool pessimisticCopy; // @synthesize pessimisticCopy=_pessimisticCopy;
@property(copy, nonatomic) NSOrderedSet *defaultSharedDriveFields; // @synthesize defaultSharedDriveFields=_defaultSharedDriveFields;
@property(copy, nonatomic) NSOrderedSet *defaultFields; // @synthesize defaultFields=_defaultFields;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
- (id)build;
@property(nonatomic) _Bool updateNativeSupportEnabled; // @synthesize updateNativeSupportEnabled=_updateNativeSupportEnabled_26;
@property(nonatomic) _Bool invalidateCacheForResourceSupport; // @synthesize invalidateCacheForResourceSupport=_invalidateCacheForResourceSupport_33;
@property(nonatomic) _Bool updateResourceSupportEnabled; // @synthesize updateResourceSupportEnabled=_updateResourceSupportEnabled_28;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel_8;
@property(nonatomic) _Bool multiParentDeprecationEnabled; // @synthesize multiParentDeprecationEnabled=_multiParentDeprecationEnabled_29;
@property(nonatomic) int changelogTooDeepThreshold; // @synthesize changelogTooDeepThreshold=_changelogTooDeepThreshold_25;
@property(nonatomic) _Bool enableGooglePhotos; // @synthesize enableGooglePhotos=_enableGooglePhotos_18;
@property(copy, nonatomic) NSArray *mimeTypeConstraints; // @synthesize mimeTypeConstraints=_mimeTypeConstraints_19;
@property(retain, nonatomic) GDKBackendInstance *backendInstance; // @synthesize backendInstance=_backendInstance_15;
@property(retain, nonatomic) GDKBackfillOptions *backfillOptions; // @synthesize backfillOptions=_backfillOptions_15;

@end
