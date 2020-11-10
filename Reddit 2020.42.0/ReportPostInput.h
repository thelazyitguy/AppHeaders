//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, Post;

@interface ReportPostInput : NSObject
{
    long long _siteRule;
    NSString *_freeText;
    NSNumber *_fromHelpDesk;
    NSString *_postId;
    NSString *_subredditRule;
    NSString *_customRule;
    Post *_post;
    NSArray *_additionalOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *additionalOptions; // @synthesize additionalOptions=_additionalOptions;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(copy, nonatomic) NSString *customRule; // @synthesize customRule=_customRule;
@property(copy, nonatomic) NSString *subredditRule; // @synthesize subredditRule=_subredditRule;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSNumber *fromHelpDesk; // @synthesize fromHelpDesk=_fromHelpDesk;
@property(copy, nonatomic) NSString *freeText; // @synthesize freeText=_freeText;
@property(readonly, nonatomic) long long siteRule; // @synthesize siteRule=_siteRule;
- (id)dictionaryRepresentation;
- (id)initWithPostId:(id)arg1 subredditRule:(id)arg2 post:(id)arg3;
- (id)initWithPostId:(id)arg1 siteRule:(long long)arg2 post:(id)arg3;

@end

