//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface _TtC7Reviews21WarExpandableTextView : UITextView
{
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: placeholderColor
    // Error parsing type: , name: expandableTextViewDelegate
    // Error parsing type: , name: $__lazy_storage_$_placeHolderLabel
    // Error parsing type: , name: maximumNumberOfLines
    // Error parsing type: , name: minimumNumberOfLines
    // Error parsing type: , name: animateSizeChange
    // Error parsing type: , name: maxLength
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: calculationLayoutManager
    // Error parsing type: , name: calculationTextContainer
}

- (void).cxx_destruct;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)textDidBegin;
- (void)textDidEnd;
- (void)textChange;
@property(nonatomic) long long maxLength; // @synthesize maxLength;
@property(nonatomic) _Bool animateSizeChange; // @synthesize animateSizeChange;
@property(nonatomic) long long minimumNumberOfLines; // @synthesize minimumNumberOfLines;
@property(nonatomic) long long maximumNumberOfLines; // @synthesize maximumNumberOfLines;
@property(nonatomic, retain) UIColor *placeholderColor; // @synthesize placeholderColor;
@property(nonatomic, copy) NSString *placeholder;
@property(nonatomic, copy) NSString *text;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end
