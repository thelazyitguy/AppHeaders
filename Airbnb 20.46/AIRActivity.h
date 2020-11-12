//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRActivityRecommendationItems, AIRMarket, AIRPlace, AIRRestaurantInfo, AIRUser, NSArray, NSNumber, NSString, NSURL;

@interface AIRActivity : AIRModel
{
    _Bool _isBookable;
    _Bool _isPermanentlyClosed;
    NSString *_activityId;
    NSString *_title;
    NSString *_subtitle;
    NSString *_boldSubtitle;
    NSString *_insiderTagline;
    NSString *_activityDescription;
    NSString *_actionKicker;
    NSString *_actionKickerColor;
    NSString *_actionRowTitle;
    NSString *_actionRowSubtitle;
    NSURL *_shareURL;
    NSArray *_activityAttributes;
    NSNumber *_guestCount;
    NSNumber *_capacity;
    NSString *_placeReservationId;
    AIRRestaurantInfo *_restaurant;
    NSArray *_coverPhotos;
    AIRPlace *_place;
    AIRUser *_user;
    AIRMarket *_market;
    AIRActivityRecommendationItems *_recommendationItems;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRActivityRecommendationItems *recommendationItems; // @synthesize recommendationItems=_recommendationItems;
@property(readonly, copy, nonatomic) AIRMarket *market; // @synthesize market=_market;
@property(readonly, copy, nonatomic) AIRUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) AIRPlace *place; // @synthesize place=_place;
@property(readonly, copy, nonatomic) NSArray *coverPhotos; // @synthesize coverPhotos=_coverPhotos;
@property(readonly, copy, nonatomic) AIRRestaurantInfo *restaurant; // @synthesize restaurant=_restaurant;
@property(readonly, copy, nonatomic) NSString *placeReservationId; // @synthesize placeReservationId=_placeReservationId;
@property(readonly, copy, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(readonly, copy, nonatomic) NSNumber *guestCount; // @synthesize guestCount=_guestCount;
@property(readonly, copy, nonatomic) NSArray *activityAttributes; // @synthesize activityAttributes=_activityAttributes;
@property(readonly, copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, copy, nonatomic) NSString *actionRowSubtitle; // @synthesize actionRowSubtitle=_actionRowSubtitle;
@property(readonly, copy, nonatomic) NSString *actionRowTitle; // @synthesize actionRowTitle=_actionRowTitle;
@property(readonly, copy, nonatomic) NSString *actionKickerColor; // @synthesize actionKickerColor=_actionKickerColor;
@property(readonly, copy, nonatomic) NSString *actionKicker; // @synthesize actionKicker=_actionKicker;
@property(readonly, copy, nonatomic) NSString *activityDescription; // @synthesize activityDescription=_activityDescription;
@property(readonly, nonatomic) _Bool isPermanentlyClosed; // @synthesize isPermanentlyClosed=_isPermanentlyClosed;
@property(readonly, nonatomic) _Bool isBookable; // @synthesize isBookable=_isBookable;
@property(readonly, copy, nonatomic) NSString *insiderTagline; // @synthesize insiderTagline=_insiderTagline;
@property(readonly, copy, nonatomic) NSString *boldSubtitle; // @synthesize boldSubtitle=_boldSubtitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(readonly, nonatomic) _Bool isRestaurant;

@end
