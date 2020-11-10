//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSNumber, NSString;

@interface NFUIDisplayPageEpisodeEntity : COEntity
{
    _Bool _isAvailableForED;
    _Bool _isAvailableForDownload;
    _Bool _hasNeverBeenWatched;
    _Bool _hasHiddenEpisodeNumbers;
    NSString *_interestingMomentUrl;
    NSString *_title;
    NSString *_synopsis;
    NSString *_dateMessaging;
    NSNumber *_episodeNumber;
    NSNumber *_seasonId;
    NSString *_episodeNewBadgeKey;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasHiddenEpisodeNumbers; // @synthesize hasHiddenEpisodeNumbers=_hasHiddenEpisodeNumbers;
@property(nonatomic) _Bool hasNeverBeenWatched; // @synthesize hasNeverBeenWatched=_hasNeverBeenWatched;
@property(nonatomic) _Bool isAvailableForDownload; // @synthesize isAvailableForDownload=_isAvailableForDownload;
@property(nonatomic) _Bool isAvailableForED; // @synthesize isAvailableForED=_isAvailableForED;
@property(copy, nonatomic) NSString *episodeNewBadgeKey; // @synthesize episodeNewBadgeKey=_episodeNewBadgeKey;
@property(copy, nonatomic) NSNumber *seasonId; // @synthesize seasonId=_seasonId;
@property(copy, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(copy, nonatomic) NSString *dateMessaging; // @synthesize dateMessaging=_dateMessaging;
@property(copy, nonatomic) NSString *synopsis; // @synthesize synopsis=_synopsis;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *interestingMomentUrl; // @synthesize interestingMomentUrl=_interestingMomentUrl;

@end

