//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TopicSubredditIconsModel : NSObject
{
    _Bool _shouldShowShareButton;
    NSArray *_subreddits;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowShareButton; // @synthesize shouldShowShareButton=_shouldShowShareButton;
@property(copy, nonatomic) NSArray *subreddits; // @synthesize subreddits=_subreddits;
- (id)initWithSubreddits:(id)arg1 shouldShowShareButton:(_Bool)arg2;

@end
