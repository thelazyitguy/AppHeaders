//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/DTAttributedTextContentViewDelegate-Protocol.h>

@class DTAttributedLabel, NSString, UIColor, UIFont;
@protocol GKSHTMLTextViewDelegate;

@interface GKSHTMLTextView : UIView <DTAttributedTextContentViewDelegate>
{
    unsigned char _textAlignment;
    _Bool _linkDecorated;
    id <GKSHTMLTextViewDelegate> _delegate;
    NSString *_HTMLText;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_linkColor;
    double _lineSpacing;
    DTAttributedLabel *_label;
}

+ (id)attributedTextForHTMLText:(id)arg1 font:(id)arg2 textColor:(id)arg3 linkColor:(id)arg4 textAlignment:(unsigned char)arg5 lineSpacing:(double)arg6 linkDecorated:(_Bool)arg7;
+ (id)defaultLinkColor;
+ (id)defaultTextColor;
+ (id)defaultFont;
+ (double)heightForHTMLText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 constrainedToWidth:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) DTAttributedLabel *label; // @synthesize label=_label;
@property(nonatomic, getter=isLinkDecorated) _Bool linkDecorated; // @synthesize linkDecorated=_linkDecorated;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *HTMLText; // @synthesize HTMLText=_HTMLText;
@property(nonatomic) __weak id <GKSHTMLTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ignoreNewlineCharactersForVoiceOver;
- (void)linkTapped:(id)arg1;
- (void)propertiesChanged;
- (id)attributedTextContentView:(id)arg1 viewForLink:(id)arg2 identifier:(id)arg3 frame:(struct CGRect)arg4;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

