//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class Post;
@protocol CommentBarNodeDelegate;

@interface _TtC6Reddit14CommentBarNode : BaseFeedDisplayNode
{
    // Error parsing type: , name: post
    // Error parsing type: , name: delegate
    // Error parsing type: , name: buttonNode
    // Error parsing type: , name: ctaCaption
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithVisibilityTracker:(id)arg1 visibilityOptions:(id)arg2;
- (void)addCommentButtonDidTap;
- (id)initWithPost:(id)arg1 ctaVariant:(long long)arg2;
@property(nonatomic) __weak id <CommentBarNodeDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) Post *post; // @synthesize post;

@end
