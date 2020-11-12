//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>
#import <RedditCore/NSSecureCoding-Protocol.h>

@class DiscoveryUnitAction, NSArray, NSDateInterval, NSDictionary, NSNumber, NSSet, NSString;

@interface DiscoveryUnit : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    _Bool _locationRequired;
    NSString *_pk;
    NSString *_title;
    unsigned long long _unitType;
    NSString *_unitName;
    unsigned long long _surfaceType;
    unsigned long long _layout;
    unsigned long long _chainingAction;
    NSString *_subtitle;
    NSString *_subtitleIconName;
    NSString *_urlString;
    NSString *_minAppVersion;
    NSString *_customHideKey;
    NSDictionary *_requestParameters;
    NSNumber *_insertionIndex;
    NSNumber *_forceIndex;
    NSNumber *_maximumChains;
    NSNumber *_maximumItems;
    NSNumber *_minimumItems;
    NSString *_section;
    NSNumber *_carryOverFrom;
    NSNumber *_carryOverCount;
    NSString *_seeMoreTitle;
    NSString *_seeMoreTab;
    NSString *_previewPk;
    DiscoveryUnitAction *_actionButton;
    NSDateInterval *_dateInterval;
    NSArray *_chainingSurfaces;
    NSSet *_options;
    NSDictionary *_surfaceParameters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *surfaceParameters; // @synthesize surfaceParameters=_surfaceParameters;
@property(copy, nonatomic) NSSet *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *chainingSurfaces; // @synthesize chainingSurfaces=_chainingSurfaces;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain, nonatomic) DiscoveryUnitAction *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) NSString *previewPk; // @synthesize previewPk=_previewPk;
@property(nonatomic) _Bool locationRequired; // @synthesize locationRequired=_locationRequired;
@property(copy, nonatomic) NSString *seeMoreTab; // @synthesize seeMoreTab=_seeMoreTab;
@property(copy, nonatomic) NSString *seeMoreTitle; // @synthesize seeMoreTitle=_seeMoreTitle;
@property(retain, nonatomic) NSNumber *carryOverCount; // @synthesize carryOverCount=_carryOverCount;
@property(retain, nonatomic) NSNumber *carryOverFrom; // @synthesize carryOverFrom=_carryOverFrom;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) NSNumber *minimumItems; // @synthesize minimumItems=_minimumItems;
@property(retain, nonatomic) NSNumber *maximumItems; // @synthesize maximumItems=_maximumItems;
@property(retain, nonatomic) NSNumber *maximumChains; // @synthesize maximumChains=_maximumChains;
@property(retain, nonatomic) NSNumber *forceIndex; // @synthesize forceIndex=_forceIndex;
@property(retain, nonatomic) NSNumber *insertionIndex; // @synthesize insertionIndex=_insertionIndex;
@property(copy, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(copy, nonatomic) NSString *customHideKey; // @synthesize customHideKey=_customHideKey;
@property(copy, nonatomic) NSString *minAppVersion; // @synthesize minAppVersion=_minAppVersion;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *subtitleIconName; // @synthesize subtitleIconName=_subtitleIconName;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) unsigned long long chainingAction; // @synthesize chainingAction=_chainingAction;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned long long surfaceType; // @synthesize surfaceType=_surfaceType;
@property(copy, nonatomic) NSString *unitName; // @synthesize unitName=_unitName;
@property(nonatomic) unsigned long long unitType; // @synthesize unitType=_unitType;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long surfacePosition;
@property(readonly, nonatomic) NSNumber *showIfSubscribed;
@property(readonly, nonatomic) _Bool includeStickyPosts;
@property(readonly, nonatomic) _Bool showPostScore;
@property(readonly, nonatomic) _Bool showSubscribersCount;
@property(readonly, nonatomic) _Bool isTransparentBackground;
@property(readonly, nonatomic) _Bool showUnitSubredditHeader;
@property(readonly, nonatomic) _Bool showPostSubredditHeader;
@property(readonly, nonatomic) _Bool enableShowLess;
@property(readonly, nonatomic) _Bool enableHideUnit;
@property(readonly, nonatomic) _Bool enableHideItems;
@property(readonly, nonatomic) _Bool enableSeeMore;
@property(readonly, nonatomic) _Bool showActionButton;
@property(readonly, nonatomic) _Bool showDescription;
@property(readonly, nonatomic) _Bool shouldHideHeader;
@property(readonly, nonatomic) _Bool includeOnlyInterested;
@property(readonly, nonatomic) _Bool includeOnlyLive;
@property(readonly, nonatomic) _Bool includeOnlyMedia;
@property(readonly, nonatomic) _Bool isWideLayout;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)layoutTypeForKey:(id)arg1;
- (unsigned long long)unitTypeForKey:(id)arg1;
- (unsigned long long)chainingActionForData:(id)arg1;
- (void)overwriteEnabledForMinimumAppVersion:(id)arg1;
- (void)updateModelWithData:(id)arg1;
- (id)initWithData:(id)arg1;

@end
