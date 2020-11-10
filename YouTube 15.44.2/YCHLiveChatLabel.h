//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSLayoutManager, NSTextContainer, NSTextStorage;
@protocol YCHLiveChatLabelDelegate;

@interface YCHLiveChatLabel : UIView
{
    NSAttributedString *_attributedText;
    NSTextContainer *_textContainer;
    id <YCHLiveChatLabelDelegate> _delegate;
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    struct _NSRange _activeLinkRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange activeLinkRange; // @synthesize activeLinkRange=_activeLinkRange;
@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(nonatomic) __weak id <YCHLiveChatLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (struct _NSRange)linkRangeAtPoint:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
