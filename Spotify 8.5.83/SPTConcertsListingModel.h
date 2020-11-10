//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateFormatter, NSString, SPTConcertsConcertModel, SPTConcertsDateFormatter;

@interface SPTConcertsListingModel : NSObject
{
    _Bool _isRecommendedToUser;
    _Bool _isOnlineEvent;
    _Bool _isGroupedListing;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_concerts;
    NSString *_venue;
    NSDate *_openingDate;
    NSDate *_closingDate;
    SPTConcertsDateFormatter *_dateFormatterProvider;
    NSDateFormatter *_timeTextDateFormatter;
    SPTConcertsConcertModel *_concert;
}

+ (id)artistsFromDictionary:(id)arg1;
+ (id)entitiesWithDictionary:(id)arg1 dateFormatter:(id)arg2 artistNameFormatter:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTConcertsConcertModel *concert; // @synthesize concert=_concert;
@property(nonatomic) __weak NSDateFormatter *timeTextDateFormatter; // @synthesize timeTextDateFormatter=_timeTextDateFormatter;
@property(nonatomic) __weak SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
@property(readonly, nonatomic) _Bool isGroupedListing; // @synthesize isGroupedListing=_isGroupedListing;
@property(readonly, nonatomic) _Bool isOnlineEvent; // @synthesize isOnlineEvent=_isOnlineEvent;
@property(readonly, nonatomic) _Bool isRecommendedToUser; // @synthesize isRecommendedToUser=_isRecommendedToUser;
@property(readonly, nonatomic) NSDate *closingDate; // @synthesize closingDate=_closingDate;
@property(readonly, nonatomic) NSDate *openingDate; // @synthesize openingDate=_openingDate;
@property(readonly, copy, nonatomic) NSString *venue; // @synthesize venue=_venue;
@property(readonly, copy, nonatomic) NSArray *concerts; // @synthesize concerts=_concerts;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)subtitleFromOpeningDate:(id)arg1 closingDate:(id)arg2 venue:(id)arg3 localDate:(id)arg4;
- (id)dateFromDictionary:(id)arg1 withKey:(id)arg2;
- (id)concertsFromArray:(id)arg1;
- (id)initWithDictionary:(id)arg1 dateFormatter:(id)arg2 artistNameFormatter:(id)arg3;

@end
