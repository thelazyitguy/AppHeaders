//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVGenericConversationsResult.h>

@class BVSyndicationSource, NSArray, NSDate, NSNumber, NSString;

@interface BVComment : BVGenericConversationsResult
{
    _Bool _isSyndicated;
    NSString *_title;
    NSString *_commentText;
    NSString *_reviewId;
    NSString *_commentId;
    NSString *_campaignId;
    NSString *_userNickname;
    NSString *_authorId;
    NSString *_userLocation;
    NSDate *_submissionTime;
    NSDate *_lastModeratedTime;
    NSDate *_lastModificationTime;
    NSString *_submissionId;
    NSNumber *_totalFeedbackCount;
    NSNumber *_totalPositiveFeedbackCount;
    NSNumber *_totalNegativeFeedbackCount;
    NSString *_contentLocale;
    NSArray *_badges;
    BVSyndicationSource *_syndicationSource;
    NSArray *_includedAnswers;
    NSArray *_includedAuthors;
    NSArray *_includedProducts;
    NSArray *_includedQuestions;
    NSArray *_includedReviews;
}

@property(retain) NSArray *includedReviews; // @synthesize includedReviews=_includedReviews;
@property(retain) NSArray *includedQuestions; // @synthesize includedQuestions=_includedQuestions;
@property(retain) NSArray *includedProducts; // @synthesize includedProducts=_includedProducts;
@property(retain) NSArray *includedAuthors; // @synthesize includedAuthors=_includedAuthors;
@property(retain) NSArray *includedAnswers; // @synthesize includedAnswers=_includedAnswers;
@property(readonly, nonatomic) BVSyndicationSource *syndicationSource; // @synthesize syndicationSource=_syndicationSource;
@property(readonly) _Bool isSyndicated; // @synthesize isSyndicated=_isSyndicated;
@property(readonly) NSArray *badges; // @synthesize badges=_badges;
@property(readonly) NSString *contentLocale; // @synthesize contentLocale=_contentLocale;
@property(readonly) NSNumber *totalNegativeFeedbackCount; // @synthesize totalNegativeFeedbackCount=_totalNegativeFeedbackCount;
@property(readonly) NSNumber *totalPositiveFeedbackCount; // @synthesize totalPositiveFeedbackCount=_totalPositiveFeedbackCount;
@property(readonly) NSNumber *totalFeedbackCount; // @synthesize totalFeedbackCount=_totalFeedbackCount;
@property(readonly) NSString *submissionId; // @synthesize submissionId=_submissionId;
@property(readonly) NSDate *lastModificationTime; // @synthesize lastModificationTime=_lastModificationTime;
@property(readonly) NSDate *lastModeratedTime; // @synthesize lastModeratedTime=_lastModeratedTime;
@property(readonly) NSDate *submissionTime; // @synthesize submissionTime=_submissionTime;
@property(readonly) NSString *userLocation; // @synthesize userLocation=_userLocation;
@property(readonly) NSString *authorId; // @synthesize authorId=_authorId;
@property(readonly) NSString *userNickname; // @synthesize userNickname=_userNickname;
@property(readonly) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(readonly) NSString *commentId; // @synthesize commentId=_commentId;
@property(readonly) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(readonly) NSString *commentText; // @synthesize commentText=_commentText;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1 includes:(id)arg2;

@end
