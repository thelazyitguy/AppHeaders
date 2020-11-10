//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASCellNode.h>

@class ASTextNode, NSDictionary, NSString;

@interface ASTextCellNode : ASCellNode
{
    NSDictionary *_textAttributes;
    struct UIEdgeInsets _textInsets;
    NSString *_text;
    ASTextNode *_textNode;
}

+ (struct UIEdgeInsets)defaultTextInsets;
+ (id)defaultTextAttributes;
- (void).cxx_destruct;
@property(readonly) ASTextNode *textNode; // @synthesize textNode=_textNode;
- (void)locked_updateAttributedText;
@property(copy) NSString *text;
@property struct UIEdgeInsets textInsets;
@property(copy) NSDictionary *textAttributes;
- (id)layoutSpecThatFits:(CDStruct_42a63532)arg1;
- (id)initWithAttributes:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)init;

@end
