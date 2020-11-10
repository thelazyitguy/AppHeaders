//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentView.h>

#import <Module_Framework/NIAttributedLabelDelegate-Protocol.h>

@class GFBLegalTextContentViewObject, NIAttributedLabel, NSString;

@interface GFBLegalTextContentView : GOOBaseContentView <NIAttributedLabelDelegate>
{
    NIAttributedLabel *_legalTextLabel;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (struct CGSize)fittedLegalLabelSizeConstrainedToWidth:(double)arg1 withPadding:(struct UIEdgeInsets)arg2;
- (void)attributedLabel:(id)arg1 didLongPressTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) GFBLegalTextContentViewObject *object; // @dynamic object;
@property(readonly) Class superclass;

@end
