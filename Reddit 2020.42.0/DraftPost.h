//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, PostFlair, Subreddit, _TtC10RedditCore8RichText;

@interface DraftPost : NSObject
{
    _Bool _isNSFW;
    _Bool _isSpoiler;
    _Bool _shouldSendReplies;
    _Bool _isOriginalContent;
    NSString *_draftPostId;
    long long _kind;
    Subreddit *_subreddit;
    PostFlair *_flair;
    NSURL *_link;
    NSDate *_createdAt;
    NSDate *_modifiedDate;
    _TtC10RedditCore8RichText *_selfPostRichText;
    NSString *_title;
    NSString *_selfText;
    NSString *_contentCategory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contentCategory; // @synthesize contentCategory=_contentCategory;
@property(copy, nonatomic) NSString *selfText; // @synthesize selfText=_selfText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _TtC10RedditCore8RichText *selfPostRichText; // @synthesize selfPostRichText=_selfPostRichText;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) PostFlair *flair; // @synthesize flair=_flair;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(nonatomic) _Bool isOriginalContent; // @synthesize isOriginalContent=_isOriginalContent;
@property(nonatomic) _Bool shouldSendReplies; // @synthesize shouldSendReplies=_shouldSendReplies;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool isSpoiler; // @synthesize isSpoiler=_isSpoiler;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(copy, nonatomic) NSString *draftPostId; // @synthesize draftPostId=_draftPostId;
- (id)initWithData:(id)arg1 subreddits:(id)arg2;

@end
