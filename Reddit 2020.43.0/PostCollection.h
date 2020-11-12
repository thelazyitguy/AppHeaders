//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>

@class NSArray, NSDate, NSString, Post, Subreddit;

@interface PostCollection : ObservableObject <BaseModel>
{
    NSString *_pk;
    NSString *_title;
    NSString *_descriptionText;
    NSArray *_posts;
    NSDate *_updatedAt;
    NSDate *_createdAt;
    NSString *_authorId;
    long long _displayLayout;
    Subreddit *_subreddit;
    NSString *_primaryPostId;
}

+ (id)keyPathsToObserveChanges;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *primaryPostId; // @synthesize primaryPostId=_primaryPostId;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(readonly, nonatomic) long long displayLayout; // @synthesize displayLayout=_displayLayout;
@property(readonly, copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(copy, nonatomic) NSArray *posts; // @synthesize posts=_posts;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) Post *primaryPost;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)configureWithGraphQLData:(id)arg1;
- (void)configureWithData:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
