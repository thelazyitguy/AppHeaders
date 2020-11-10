//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextPostViewController.h"

@class FeedPostCrosspostView, NSString, Post;

@interface CrosspostPostViewController : TextPostViewController
{
    FeedPostCrosspostView *_crosspostablePostView;
    NSString *_crosspostId;
    Post *_post;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(readonly, nonatomic) NSString *crosspostId; // @synthesize crosspostId=_crosspostId;
@property(retain, nonatomic) FeedPostCrosspostView *crosspostablePostView; // @synthesize crosspostablePostView=_crosspostablePostView;
- (void)willResignResponderAndDismiss;
- (void)didTapPostButton:(id)arg1;
- (void)didTapDropDown;
- (id)analyticsPageType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutTextFieldsInScroller;
- (id)postView;
@property(readonly, nonatomic) Post *originalPost;
- (void)testAndShowUnallowedPostDisplayTypeWarning;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 crosspostablePostId:(id)arg2;

@end

