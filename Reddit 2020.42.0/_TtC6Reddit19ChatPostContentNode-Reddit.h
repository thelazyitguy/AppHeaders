//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reddit19ChatPostContentNode.h"

#import "AvatarImageNodeDelegate-Protocol.h"
#import "_TtP6Reddit28HighlightableContentProtocol_-Protocol.h"

@interface _TtC6Reddit19ChatPostContentNode (Reddit) <_TtP6Reddit28HighlightableContentProtocol_, AvatarImageNodeDelegate>
- (void)unhighlightContent;
- (void)highlightContentWithColor:(id)arg1;
- (void)avatarImageNodeWasTapped:(id)arg1;
- (unsigned long long)presentationStyle;
- (void)chatPostTextNode:(id)arg1 didTapReadMoreWithCommentNode:(id)arg2;
- (void)chatPostTextNode:(id)arg1 didTapURL:(id)arg2;
- (void)didTapParentNodeWithComment:(id)arg1;
- (void)chatPostVotingNodeDidTapDownvoteWithComment:(id)arg1;
- (void)chatPostVotingNodeDidTapUpvoteWithComment:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@end

