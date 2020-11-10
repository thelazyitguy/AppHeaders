//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDisplayPageCellViewModel.h"

@class NFUIBookmark, NFUIDisplayPageSpecialCasesEntity, NSNumber, NSString, UIImage;

@interface DisplayPageSummaryArtCellViewModel : AbstractDisplayPageCellViewModel
{
    _Bool _ancestorHasBeenWatched;
    NFUIBookmark *_bookmark;
    unsigned long long _myListAction;
    NSString *_episodeTitle;
    NSString *_seasonEpisode;
    NSString *_synopsis;
    NSString *_currentEpisodeBadgeKey;
    NSString *_verticalBoxArtUrl;
    NSNumber *_thumbRating;
    NFUIDisplayPageSpecialCasesEntity *_specialCaseEntity;
    UIImage *_boxartImage;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImage *boxartImage; // @synthesize boxartImage=_boxartImage;
@property(retain, nonatomic) NFUIDisplayPageSpecialCasesEntity *specialCaseEntity; // @synthesize specialCaseEntity=_specialCaseEntity;
@property(copy, nonatomic) NSNumber *thumbRating; // @synthesize thumbRating=_thumbRating;
@property(copy, nonatomic) NSString *verticalBoxArtUrl; // @synthesize verticalBoxArtUrl=_verticalBoxArtUrl;
@property(copy, nonatomic) NSString *currentEpisodeBadgeKey; // @synthesize currentEpisodeBadgeKey=_currentEpisodeBadgeKey;
@property(nonatomic) _Bool ancestorHasBeenWatched; // @synthesize ancestorHasBeenWatched=_ancestorHasBeenWatched;
@property(copy, nonatomic) NSString *synopsis; // @synthesize synopsis=_synopsis;
@property(copy, nonatomic) NSString *seasonEpisode; // @synthesize seasonEpisode=_seasonEpisode;
@property(copy, nonatomic) NSString *episodeTitle; // @synthesize episodeTitle=_episodeTitle;
@property(nonatomic) unsigned long long myListAction; // @synthesize myListAction=_myListAction;
@property(copy, nonatomic) NFUIBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, copy, nonatomic) NSNumber *playId;
- (void)renewAndReload;
- (void)renewAndReloadBookmark;
- (void)refreshVolatileData;
- (id)seasonEpisodeAccessibilityLabel;
- (id)creatorsDirectors;
- (id)creatorsDirectorsAccessibilityLabel;
- (id)creatorsDirectorsString;
- (id)contentWarningModel;
- (void)reloadBookmark;
- (void)configureWithDictionary:(id)arg1;
- (_Bool)shouldCache;

@end
