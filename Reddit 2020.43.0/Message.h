//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>
#import <RedditCore/ReportableModel-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface Message : ObservableObject <BaseModel, ReportableModel>
{
    _Bool _isSelfMessage;
    _Bool _isUnread;
    NSString *_pk;
    NSString *_author;
    NSString *_destination;
    NSString *_body;
    NSString *_subject;
    NSString *_subreddit;
    NSString *_awardingId;
    NSDate *_createdAt;
    long long _distinguishedAs;
    NSArray *_replies;
    NSDictionary *_debugData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *debugData; // @synthesize debugData=_debugData;
@property(copy, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(nonatomic) _Bool isUnread; // @synthesize isUnread=_isUnread;
@property(nonatomic) long long distinguishedAs; // @synthesize distinguishedAs=_distinguishedAs;
@property(nonatomic) _Bool isSelfMessage; // @synthesize isSelfMessage=_isSelfMessage;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *awardingId; // @synthesize awardingId=_awardingId;
@property(copy, nonatomic) NSString *subreddit; // @synthesize subreddit=_subreddit;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool canBeBlocked;
@property(readonly, nonatomic) _Bool canBeReported;
@property(readonly, copy, nonatomic) NSString *sharingPermalinkIncludingDomain;
- (id)urlPath;
@property(readonly, copy) NSString *debugDescription;
- (void)updateModelWithReplies:(id)arg1;
- (void)configureWithData:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
