//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ObjectObserverProtocol-Protocol.h"

@class ContentImageView, FeedPostCommentsBarView, FeedPostCrosspostView, FeedPostImageView, FeedPostOptions, FeedPostTitleViewExpanded, FeedPostYouTubeEmbeddedView, IntrinsicSizeNodeWrapper, NSString, Post, UITextView, _TtC6Reddit15RedditVideoNode, _TtC7Economy18FeedPostAwardsNode;
@protocol BaseStoreObservation, ViewContext;

@interface ChatPostView : BaseView <ObjectObserverProtocol>
{
    _Bool _hideCrosspost;
    _Bool _isChatPostPickerPostView;
    id _delegate;
    FeedPostOptions *_options;
    Post *_post;
    FeedPostTitleViewExpanded *_titleView;
    IntrinsicSizeNodeWrapper *_awardsNodeWrapper;
    _TtC7Economy18FeedPostAwardsNode *_awardsNode;
    UITextView *_textView;
    ContentImageView *_thumbnailImageView;
    FeedPostCommentsBarView *_commentsBarView;
    BaseView *_separatorView;
    FeedPostImageView *_imageView;
    FeedPostYouTubeEmbeddedView *_youTubeEmbeddedView;
    FeedPostCrosspostView *_crosspostView;
    id <ViewContext> _viewContext;
    _TtC6Reddit15RedditVideoNode *_redditVideoNode;
    id <BaseStoreObservation> _postObservation;
}

+ (id)attributedPostTitleForSizing:(id)arg1;
+ (_Bool)shouldShowThumbnailForPost:(id)arg1 useCompactView:(_Bool)arg2;
+ (_Bool)showImageForSizingForPost:(id)arg1;
+ (struct CGSize)calculatedSizeWithViewContext:(id)arg1 data:(id)arg2 forWidth:(double)arg3 withFeedPostOptions:(id)arg4 delegate:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id <BaseStoreObservation> postObservation; // @synthesize postObservation=_postObservation;
@property(retain, nonatomic) _TtC6Reddit15RedditVideoNode *redditVideoNode; // @synthesize redditVideoNode=_redditVideoNode;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) FeedPostCrosspostView *crosspostView; // @synthesize crosspostView=_crosspostView;
@property(retain, nonatomic) FeedPostYouTubeEmbeddedView *youTubeEmbeddedView; // @synthesize youTubeEmbeddedView=_youTubeEmbeddedView;
@property(retain, nonatomic) FeedPostImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) BaseView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) FeedPostCommentsBarView *commentsBarView; // @synthesize commentsBarView=_commentsBarView;
@property(retain, nonatomic) ContentImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) _TtC7Economy18FeedPostAwardsNode *awardsNode; // @synthesize awardsNode=_awardsNode;
@property(retain, nonatomic) IntrinsicSizeNodeWrapper *awardsNodeWrapper; // @synthesize awardsNodeWrapper=_awardsNodeWrapper;
@property(retain, nonatomic) FeedPostTitleViewExpanded *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool isChatPostPickerPostView; // @synthesize isChatPostPickerPostView=_isChatPostPickerPostView;
@property(nonatomic) _Bool hideCrosspost; // @synthesize hideCrosspost=_hideCrosspost;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)attributedPostTitle;
- (void)prepareForReuse;
- (id)thumbnailImageURLStringForPost:(id)arg1;
- (_Bool)showImageForPost:(id)arg1;
- (id)thumbnailExclusionPath;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1 displayMode:(unsigned long long)arg2;
- (void)configureWithData:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewContext:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithViewContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

