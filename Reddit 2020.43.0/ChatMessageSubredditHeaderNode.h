//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCellNode.h>

@class ASImageNode, ASTextNode;

@interface ChatMessageSubredditHeaderNode : ASCellNode
{
    ASTextNode *_channelName;
    ASTextNode *_subredditName;
    ASTextNode *_subredditDescription;
    ASImageNode *_keyNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASImageNode *keyNode; // @synthesize keyNode=_keyNode;
@property(retain, nonatomic) ASTextNode *subredditDescription; // @synthesize subredditDescription=_subredditDescription;
@property(retain, nonatomic) ASTextNode *subredditName; // @synthesize subredditName=_subredditName;
@property(retain, nonatomic) ASTextNode *channelName; // @synthesize channelName=_channelName;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureWithChannel:(id)arg1;
- (id)init;

@end

