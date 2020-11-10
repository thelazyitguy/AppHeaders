//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASNetworkImageNode, ASTextNode;

@interface ChatPostErrorNode : ASDisplayNode
{
    ASDisplayNode *_imageBackgroundNode;
    ASNetworkImageNode *_imageNode;
    ASTextNode *_textNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
@property(retain, nonatomic) ASNetworkImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(retain, nonatomic) ASDisplayNode *imageBackgroundNode; // @synthesize imageBackgroundNode=_imageBackgroundNode;
- (id)stringForEmbedStatus:(unsigned long long)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureWithEmbedStatus:(unsigned long long)arg1;
- (void)layout;
- (id)init;

@end
