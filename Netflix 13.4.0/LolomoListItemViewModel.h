//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFamiliarityViewModel.h"

@class LolomoEntity, LolomoListViewModel, NSIndexPath, NSString, PlaybackSourceModel;

@interface LolomoListItemViewModel : NFUIFamiliarityViewModel
{
    LolomoEntity *_entity;
    NSIndexPath *_indexPath;
    _Bool _impressionRecorded;
    _Bool _forceHorizontal;
    PlaybackSourceModel *_entityPlaybackSource;
    long long _timesRendered;
    NSString *_titleGroupGenreId;
    NSString *_titleGroupCurrentUUID;
    NSString *_titleGroupSourceUUID;
    NSString *_titleGroupGalleryTitle;
    LolomoListViewModel *_list;
}

- (void).cxx_destruct;
@property(nonatomic) __weak LolomoListViewModel *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *titleGroupGalleryTitle; // @synthesize titleGroupGalleryTitle=_titleGroupGalleryTitle;
@property(retain, nonatomic) NSString *titleGroupSourceUUID; // @synthesize titleGroupSourceUUID=_titleGroupSourceUUID;
@property(retain, nonatomic) NSString *titleGroupCurrentUUID; // @synthesize titleGroupCurrentUUID=_titleGroupCurrentUUID;
@property(retain, nonatomic) NSString *titleGroupGenreId; // @synthesize titleGroupGenreId=_titleGroupGenreId;
@property(nonatomic) _Bool forceHorizontal; // @synthesize forceHorizontal=_forceHorizontal;
@property(nonatomic) _Bool impressionRecorded; // @synthesize impressionRecorded=_impressionRecorded;
@property(nonatomic) long long timesRendered; // @synthesize timesRendered=_timesRendered;
- (void)cleanupEntity;
- (void)renewEntity;
- (id)description;
@property(readonly) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly) PlaybackSourceModel *entityPlaybackSource; // @synthesize entityPlaybackSource=_entityPlaybackSource;
- (id)trackingInfo;
@property(readonly, nonatomic) id entity; // @dynamic entity;
- (id)initWithEntity:(id)arg1 list:(id)arg2;

@end
