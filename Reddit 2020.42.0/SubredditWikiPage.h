//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _TtC10RedditCore8RichText;

@interface SubredditWikiPage : NSObject
{
    NSString *_name;
    _TtC10RedditCore8RichText *_contentRichText;
    long long _status;
    NSDate *_lastRevisionDate;
    NSString *_lastRevisionBy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastRevisionBy; // @synthesize lastRevisionBy=_lastRevisionBy;
@property(copy, nonatomic) NSDate *lastRevisionDate; // @synthesize lastRevisionDate=_lastRevisionDate;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) _TtC10RedditCore8RichText *contentRichText; // @synthesize contentRichText=_contentRichText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithGraphQLData:(id)arg1;

@end

