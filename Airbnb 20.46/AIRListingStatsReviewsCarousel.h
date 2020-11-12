//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRListingReviewScores, NSNumber, NSString, NSURL;

@interface AIRListingStatsReviewsCarousel : AIRModel
{
    NSString *_id;
    NSNumber *_starRatingOverall;
    NSString *_name;
    NSURL *_pictureUrl;
    NSURL *_thumbnailUrl;
    NSNumber *_ratedReviewsCount;
    AIRListingReviewScores *_reviewScores;
    NSNumber *_reviewsCount;
    NSNumber *_readyForSelectStatus;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *readyForSelectStatus; // @synthesize readyForSelectStatus=_readyForSelectStatus;
@property(readonly, copy, nonatomic) NSNumber *reviewsCount; // @synthesize reviewsCount=_reviewsCount;
@property(readonly, copy, nonatomic) AIRListingReviewScores *reviewScores; // @synthesize reviewScores=_reviewScores;
@property(readonly, copy, nonatomic) NSNumber *ratedReviewsCount; // @synthesize ratedReviewsCount=_ratedReviewsCount;
@property(readonly, copy, nonatomic) NSURL *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSURL *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *starRatingOverall; // @synthesize starRatingOverall=_starRatingOverall;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;

@end
