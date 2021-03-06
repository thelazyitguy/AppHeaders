//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTTextField.h"

@class NSString;
@protocol ExpandableTextFieldDelegate;

@interface ExpandableTextField : GBTTextField
{
    _Bool _maybeFocusing;
    id <ExpandableTextFieldDelegate> _delegate;
    NSString *_queryText;
    NSString *_expandedText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *expandedText; // @synthesize expandedText=_expandedText;
@property(copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(nonatomic) __weak id <ExpandableTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateExpandedText;
- (_Bool)isUsingMultiStageInputLanguage;
- (_Bool)shouldRunUpdateExpandedText;
- (id)attributeWithLightStyle:(_Bool)arg1;
- (void)textFieldTextChanged;
- (void)textFieldTouchDown;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

