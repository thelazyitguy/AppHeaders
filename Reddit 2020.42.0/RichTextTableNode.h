//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASScrollNode, NSAttributedString, RichTextNodeOptions, RichTextTextNode;
@protocol RichTextTextNodeDelegate;

@interface RichTextTableNode : ASDisplayNode
{
    NSAttributedString *_attributedText;
    ASScrollNode *_scrollNode;
    RichTextTextNode *_textNode;
    RichTextNodeOptions *_options;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextNodeOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) RichTextTextNode *textNode; // @synthesize textNode=_textNode;
@property(retain, nonatomic) ASScrollNode *scrollNode; // @synthesize scrollNode=_scrollNode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didLoad;
@property(nonatomic) __weak id <RichTextTextNodeDelegate> delegate;
- (id)initWithOptions:(id)arg1;

@end

